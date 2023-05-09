#include <lcd.h>  //add library files
lcd Lcd;  //define a Lcd class instance 

void setup() {
  Lcd.Init(); //initialize
  Lcd.Clear();  //clear
}

char string[10];
void loop() {
  Lcd.Cursor(0,0);
  Lcd.Display("Humidity:"); 
  Lcd.Cursor(0,9);
  Lcd.DisplayNum(63);
  
  Lcd.Cursor(2,0);
  Lcd.Display("Temperature:");
  Lcd.Cursor(2,12);
  Lcd.DisplayNum(26);
  
  delay(200);
}
//**********************************************************************************
