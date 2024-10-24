
/**************************************
 
Tutorial:                                  https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299
DFPlayer - A Mini MP3 Player For Arduino:  https://www.dfrobot.com/index.php?route=product/product&product_id=1121
Stereo Enclosed Speaker Set - 3W 4 Ohm:    https://thepihut.com/products/stereo-enclosed-speaker-set-3w-4-ohm
Driver for DFPlayer Mini from DFRobot:     https://www.arduino.cc/reference/en/libraries/dfrobotdfplayermini/

 *  Hátalarar (3W 4 Ohm): Tengdu rauðu víra í SPK1 og svörtu í SPK2.  
 *  Með þessari lausn er notað DFRobotDFPlayerMini driver/safnið, hægt að sækja via Library Manager
 *  Aftengdu pinna [RX] á meðan þú setur inn (upload) forrit á Arduino. 
 *  Þarft líklegast 1K viðnám í TX (port 11 á Arduino) til að lagfæra hljóð (ég þurfti það ekki)
 *  (Með 1K viðnám í RX er hægt að lækka enn frekar í hátalara.)


 Helstu aðgerðir með DFPlayer safninu:
 * myDFPlayer.volume(10);   // Set volume value. From 0 to 30
 * myDFPlayer.volumeUp();   // Volume Up
 * myDFPlayer.volumeDown(); // Volume Down

 * myDFPlayer.play(1);     // Play first mp3
 * myDFPlayer.next();      // Play next mp3
 * myDFPlayer.previous();  // Play previous mp3
 * myDFPlayer.loop(1);     // Loop the first mp3
 * myDFPlayer.pause();     // pause the mp3
 * myDFPlayer.start();     // start the mp3 from the pause
 * myDFPlayer.enableLoopAll();   // loop all mp3 files.
 * myDFPlayer.disableLoopAll();  // stop loop all mp3 files.
 * myDFPlayer.randomAll();       // Random play all the mp3.

  
 ***************************************/

#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySoftwareSerial(10, 11);  // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void setup()
{
  mySoftwareSerial.begin(9600);  // notum softwareSerial í samskiptum við mp3.
  if (!myDFPlayer.begin(mySoftwareSerial)) {    
    while(true);
  }
}

void loop() 
{
   myDFPlayer.volume(10);  // Hljóðstyrkur (volume) frá 0 til 30  (má líka vera í setup)
   myDFPlayer.play(1);     // spilum fyrsta mp3 á SD kortinu.
   delay(4000);            // leyfum hljóðskrá að klárast, tekur 4 sekúndur. 
}
