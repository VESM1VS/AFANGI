#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include "tdelay.h"  
#include <Servo.h> 

// MP3
DFRobotDFPlayerMini myDFPlayer;
SoftwareSerial mySoftwareSerial(10, 11);  // RX, TX  verðum að nota þessa pinna.
void playSound();                         // útfært neðar
TDelay spilun(5000);                      // Tími fyrir hljóðskrá að spila í millis, 5 sekúndur hér.

// Servo
Servo motor;                      // bý til tilvik af Servo klasanum
int motor_pinni = 3;              // pinninn sem ég nota til að stjórna mótornum
int stefna = 0;                   // stefnan sem mótorinn á að snúa í
bool hreyfing_til_haegri = true;  // er mótorinn að snúast til hægri eða vinstri
void munnur();
TDelay motor_bid(50);             // bíða í 50 ms. milli færslna


void setup() {
  
// Hljóð
  mySoftwareSerial.begin(9600);  // samskiptin við mp3
  // Use softwareSerial to communicate with mp3.
  if (!myDFPlayer.begin(mySoftwareSerial)) {  
    while(true);
  }
  myDFPlayer.volume(5);         // Set volume value. From 0 to 30

// Servo
  motor.attach(motor_pinni);    // segi servo tilvikinu hvaða pinna á að nota
  motor.write(stefna);          // í þessu tilfelli á mótorinn að byrja í 0°
}

void loop() {
 playSound();
 munnur();
}  

// spilar hljóðskrá á x fresti
void playSound() {
  if (spilun.timiLidinn() == true) {
    myDFPlayer.play(1);     // Play mp3 
  }
}

// sweep
void munnur(){
  if(motor_bid.timiLidinn()) {
    if(hreyfing_til_haegri == true) {
      stefna++; 
    } else {  // mótorinn er að hreyfast til hægri
      stefna--; 
    }
    if(stefna == 0 || stefna == 180) {   // ef mótirnn er kominn út á enda, víxla áttunum
      hreyfing_til_haegri = !hreyfing_til_haegri;
    }
    motor.write(stefna);
  }
}

