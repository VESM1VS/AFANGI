#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include "tdelay.h"
#include <Servo.h>

// ---------- Ultrasonic skynjarinn ----------
const int ECHO = 2;
const int TRIG = 4;

int fjarlaegd(); // fall sem sér um mælinguna, útfært hér fyrir neðan

// ---------- Servo mótorar ----------
Servo servo1;
const int S1 = 3; // pinninn
int s1_stefna = 0; // upphafsstefna
bool s1_upp = true; // hreyfast upp eða niður
const int S1_MAX = 180; // hversu mikið á servo-inn að hreyfast
const int S1_MIN = 0;
TDelay s1_delay(50); // biðtíminn

Servo servo2;
const int S2 = 5;
int s2_stefna = 180;
bool s2_upp = false;
const int S2_MAX = 180;
const int S2_MIN = 0;
TDelay s2_delay(100);

Servo servo3;
const int S3 = 6;
int s3_stefna = 90;
bool s3_upp = true;
const int S3_MAX = 130;
const int S3_MIN = 50;
TDelay s3_delay(150);

// ---------- MP3 spilarinn ----------
SoftwareSerial mySoftwareSerial(12, 13);  // RX, TX
DFRobotDFPlayerMini myDFPlayer;

// ---------- DC Mótorinn (L298N) ----------
const int HRADI = 11; // Verður að vera PWM pinni
const int STEFNA_A = 10;
const int STEFNA_B = 9;

const int HRATT = 255; // skilgreini hraða
const int HAEGT = 127;

/*  motórinn á að bíða í 1 sek
    síðan að fara áfram HRATT í 2 sek
    síðan að stoppa í 1 sek
    síðan að bakka HAEGT í 4 sek 
    og endurtaka */
// bý til senu (e. scene) með viðburðum
// ákveð: 0 er stopp, 1 er áfram og -1 er bakka
int sena[] = {0, 1, 0, -1};
// hversu lengi á hver viðburður að vara
int senu_timi[] = {1000, 2000, 1000, 4000}; 
// teljari sem veit hvar senan er stödd
int senu_teljari = 0;
// breyta sem veit hversu margir viðburðir eru í senunni
const int FJOLDI_VIDBURDA = 4;

TDelay motor_delay(1000); // hversu lengi er fyrsti viðburður

// Föll sem stjórna hraða og átt, útfærð hér fyrir neðan
void afram(int hradi);
void bakka(int hradi);
void stoppa();

// ---------- LED-perur ----------
const int LED1 = 7;
const int LED2 = 8;
bool led1_on = true;
TDelay led_delay(500);

// ---------- Annað ----------

// breytan er notuð til að halda "sýningu"
// áfram þó enginn sé lengur nær en 50 cm.
bool syning_i_gangi = false;

void setup() {
    // Ultrasonic 
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);    

    // Servo
    servo1.attach(S1);   
    servo2.attach(S2);        
    servo3.attach(S3);
    servo1.write(s1_stefna);
    servo2.write(s2_stefna);
    servo3.write(s3_stefna);    
     
    // DC mótorinn 
    pinMode(HRADI, OUTPUT);
    pinMode(STEFNA_A, OUTPUT);
    pinMode(STEFNA_B, OUTPUT);
    stoppa(); // upphafsstaðan, verður stopp þar til annað er ákveðið 

    // MP3 spilarinn
    mySoftwareSerial.begin(9600);  // samskiptin
    // Use softwareSerial to communicate with mp3.
    if (!myDFPlayer.begin(mySoftwareSerial)) {  
      while(true);
    }

    // LED perur
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop() {
    // ekkert gert fyrr en einhver kemur nær en 50 cm.
    if(fjarlaegd() < 50 || syning_i_gangi) {
        syning_i_gangi = true; // tryggir að sýning haldi áfram þó sonic skynji engan lengur
        // byrja að spila mp3
        myDFPlayer.volume(10);  // Set volume value. From 0 to 30
        myDFPlayer.play(1);     // Play the first mp3

        // keyra dc í gang
        if(motor_delay.timiLidinn() == true) {
            senu_teljari = (senu_teljari + 1) % FJOLDI_VIDBURDA;
            motor_delay.setBidtimi(senu_timi[senu_teljari]);
        }
        if(sena[senu_teljari] == 1) {
            afram(HRATT);
        } else if(sena[senu_teljari] == -1) {
            bakka(HAEGT);
        } else {
            stoppa();
        }

        // byrja að sweep-a servo-a
        if(s1_delay.timiLidinn()) {
            if(s1_upp) s1_stefna++;
            else s1_stefna--;
            if(s1_stefna <= S1_MIN || s1_stefna >= S1_MAX) s1_upp = !s1_upp;
        }

        if(s2_delay.timiLidinn()) {
            if(s2_upp) s2_stefna++;
            else s2_stefna--;
            if(s2_stefna <= S2_MIN || s2_stefna >= S2_MAX) s2_upp = !s2_upp;
        }

        if(s3_delay.timiLidinn()) {
            if(s3_upp) s3_stefna++;
            else s3_stefna--;
            if(s3_stefna <= S3_MIN || s3_stefna >= S3_MAX) s3_upp = !s3_upp;
        }

        // LED
        if(led_delay.timiLidinn()) {
            led1_on = !led1_on;      
        }
        digitalWrite(LED1, led1_on);
        digitalWrite(LED2, !led1_on);
    }
}

// -------------------- Hjálparföll -------------------------
int fjarlaegd() {
    // sendir út púlsa
    digitalWrite(TRIG,LOW);
    delayMicroseconds(2); // of stutt delay til að skipta máli
    digitalWrite(TRIG,HIGH);
    delayMicroseconds(10); // of stutt delay til að skipta máli
    digitalWrite(TRIG,LOW);

    // mælt hvað púlsarnir voru lengi að berast til baka
    return (int)pulseIn(ECHO,HIGH)/58.0; // deilt með 58 til að breyta í cm
}

void afram(int hradi) {
    digitalWrite(STEFNA_A, HIGH);
    digitalWrite(STEFNA_B, LOW);
    analogWrite(HRADI, hradi);
}

void bakka(int hradi) {
    digitalWrite(STEFNA_A, LOW);
    digitalWrite(STEFNA_B, HIGH);
    analogWrite(HRADI, hradi);
}

void stoppa() {
    digitalWrite(STEFNA_A, LOW);
    digitalWrite(STEFNA_B, LOW);
    analogWrite(HRADI, 0);
}