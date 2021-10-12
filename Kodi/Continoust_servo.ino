#include <Servo.h>  // Servo library

Servo myservo;      // Servo fyrir fætur
Servo myservo2;     // Servo nr. 2 fyrir t.d. haus, fálma, hala 
#define GREEN 12    // pinnaport 12 fyrir grænt LED
#define RED 13      // pinnaport 12 fyrir rautt LED

void setup() {
  myservo.attach(5);        // port fyrir Servo mótor nr. 1
  myservo2.attach(6);       // port fyrir servo mótor nr. 2
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN,HIGH);
  digitalWrite(RED,LOW);
  myservo.write(0);          // Turn clockwise at high speed
  myservo2.write(0);
  delay(2000);

  digitalWrite(GREEN,LOW);
  digitalWrite(RED,HIGH);
  myservo.write(180);
  myservo2.write(180);
  delay(2000);
}
