#include "tdelay.h"

const int HRADI = 10; // Verður að vera PWM pinni
const int STEFNA_A = 9;
const int STEFNA_B = 8;

/*  motórinn á að bíða í 1 sek
    síðan að fara áfram í 2 sek
    síðan að stoppa í 3 sek
    síðan að bakka í 2 sek 
    og endurtaka */
// bý til senu (e. scene) með viðburðum
// ákveð: 0 er stopp, 1 er áfram og -1 er bakka
int sena[] = {0, 1, 0, -1};
// hversu lengi á hver viðburður að vara
int senu_timi[] = {1000, 2000, 3000, 2000}; 
// teljari sem veit hvar senan er stödd
int senu_teljari = 0;
// breyta sem veit hversu margir viðburðir eru í senunni
const int FJOLDI_VIDBURDA = 4;

TDelay motor_delay(1000); // hversu lengi er fyrsti viðburður

void afram(int hradi);
void bakka(int hradi);
void stoppa();

void setup() {
    pinMode(HRADI, OUTPUT);
    pinMode(STEFNA_A, OUTPUT);
    pinMode(STEFNA_B, OUTPUT);

    stoppa(); // upphafsstaðan, verður stopp þar til annað er ákveðið 
}

void loop() {

    if(motor_delay.timiLidinn() == true) {
        senu_teljari = (senu_teljari + 1) % FJOLDI_VIDBURDA;
        motor_delay.setBidtimi(senu_timi[senu_teljari]);
    }
    if(sena[senu_teljari] == 1) {
        afram(255);
    } else if(sena[senu_teljari] == -1) {
        bakka(255);
    } else {
        stoppa();
    }
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