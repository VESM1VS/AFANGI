#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include "tdelay.h"
#include <Servo.h>

// ---------- LED-perur ----------
const int LED1 = 7;
const int LED2 = 8;
bool led1_on = true;
TDelay led_delay(500);

// ---------- Ultrasonic skynjarinn ----------
const int ECHO = 2;
const int TRIG = 4;
bool syning_i_gangi = false;  // halda áfram þó enginn sé lengur nær en 50 cm.

// ---------- MP3 spilarinn ----------
SoftwareSerial mySoftwareSerial(12, 13);  // RX, TX
DFRobotDFPlayerMini myDFPlayer;

// ---------- Servo mótorar ----------
Servo servo1;
const int S1 = 3; // pinninn
int s1_stefna = 0; // upphafsstefna
bool s1_upp = true; // hreyfast upp eða niður
const int S1_MAX = 60; // hversu mikið á servo-inn að hreyfast
const int S1_MIN = 0;
TDelay s1_delay(50); // biðtíminn

// ---------- DC Mótorinn (L298N) ----------
const int HRADI = 11; // Verður að vera PWM pinni
const int STEFNA_A = 6;
const int STEFNA_B = 5;
TDelay motor_delay(1000); 


void setup() {
    // Ultrasonic 
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);    

    // Servo
    servo1.attach(S1);   
    servo1.write(s1_stefna); 
     
    // DC mótorinn 
    pinMode(HRADI, OUTPUT);
    pinMode(STEFNA_A, OUTPUT);
    pinMode(STEFNA_B, OUTPUT);
    stoppa(); // upphafsstaðan, verður stopp þar til annað er ákveðið 

    // MP3 spilarinn
    mySoftwareSerial.begin(9600);  
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
        
        syning_i_gangi = true;    // tryggir að sýning haldi áfram þó sonic skynji engan lengur
        
        // byrja að spila mp3
        myDFPlayer.volume(10);  // Set volume value. From 0 to 30
        myDFPlayer.play(1);     // Play the first mp3

        // keyra dc í gang
        if(motor_delay.timiLidinn() == true) {
            afram(200);  // hraði er 200
        }
        
        // byrja að sweep-a servo
        if(s1_delay.timiLidinn()) {
            if(s1_upp) s1_stefna++;
            else s1_stefna--;
            if(s1_stefna <= S1_MIN || s1_stefna >= S1_MAX) s1_upp = !s1_upp;
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

// Fall sem mælir fjarlægð með Sonic-sensornum, fallið skilar fjarlægð i cm.
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

// Föll fyrir DC mótor sem stjórna hraða og átt
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
