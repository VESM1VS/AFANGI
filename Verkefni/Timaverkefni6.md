## Tímaverkefni 6 

- 10% af heildareinkunn áfanga.
- einstaklingsverkefni.

---

### 6.1 Servo (30%)

Framkvæmdu eftirfarandi með Servo og Arduino forritun:
1. Stilltu Servo með kóða í upphafstöðu (90 gráður) þannig að armur vísar fram.
1. Láttu Servo með kóða færir sig í þrjár stöður; fyrst í 0 gráður svo 120 gráður og að lokum í 90 gráður (ekki endurtekning).
1. Keyrðu [`sweep`](https://lastminuteengineers.com/servo-motor-arduino-tutorial/#arduino-code-sweep) kóðann frá 30 til 120 gráður fram og aftur. 
1. Prófaðu [`Knob`](https://lastminuteengineers.com/servo-motor-arduino-tutorial/#controlling-servo-with-a-potentiometer) kóðann með Servo.

Bjargir:
- [Servo A-Go-Go!](https://www.instructables.com/Servo-A-Go-Go/)
- [How Servo Motor Works & Interface It With Arduino](https://lastminuteengineers.com/servo-motor-arduino-tutorial/)
- [Using Servo Motors with the Arduino](https://dronebotworkshop.com/servo-motors-with-arduino/)

<!--
- Ítarefni [Making sense of servos (youtube)](https://www.youtube.com/watch?v=IpubzroBjsQ&ab_channel=MakingtoLearn)
Servo City:  https://www.servocity.com/servo-faqs/  
-->
---

### 6.2 MG995 Servo (10%)
Skoðaðu upplýsingar um [MG995 Servo](https://www.electronicoscaldas.com/datasheet/MG995_Tower-Pro.pdf) mótorinn og svaraðu eftirfarandi spurningum:

1. Á hvaða spennusviði vinnur MG995 Servo Motor og afhverju þurfum við að vita það?
1. Hvað er mótorinn lengi að snúa sér í 90 gráður miðað við 6V?
1. Hvað er átt við að stöðvun [snúningsvægis](https://www.youtube.com/watch?v=T99yH_gw3p8) (stall torque) sé 10kg/cm við 6v?

---

### 6.3 DC Mótor (10%)
Skoðaðu þetta um Vex motora : [Vex 393](http://cmra.rec.ri.cmu.edu/products/cortex_video_trainer/lesson/media_files/2_wire_393_motor_ig.pdf)
Svaraðu eftirfarandi spurningum
1. Fyrir hvaða spennu er þessi mótor hannaður?
2. Hvert er snúningsvægi hans í Nm ?

---

### 6.4 Notkun á Vex motor (40%)
1. Tenging VexMotors
Tengingar eru eins og á servomótor það sem er öðruvísi er að Vex er með ESC electric speed controler þá getum við stjórnað hraða, tengdu einn mótor eins og servo

![mynd](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/vexMotorTenging.png)

2. Prófaðu mótorinn með arduino.
Hér er kóði fyrir að keyra áfram og aftur í eina sek hvora leið:
``` C
#include <Servo.h>
Servo Motor; 
 
const int MF = 20;  // áfram
const int MB = 138; // aftur
const int MS = 91; // stop
 
void setup()
{
 // Hvítur vír pinni 9 control
 // Appelsínugulur 5v +
 // Svartur jörð (GND)-
 Motor.attach(9);
}
 
void loop() 
{
  Motor.write(MF); // fer áfram
  delay(1000);  //fer áfram í eina sek
  Motor.write(MS9); // stoppar
  delay(500); //stoppar í hálfa sek
  Motor.write(MB); // fer afturábak
  delay(1000); // fer afturábak í eina sek
}
```
3. Skoðaðu þetta [lyftubúnað](https://kb.vex.com/hc/en-us/articles/360037388692-Building-V5-Robot-Lift-Systems) og settu saman einfaldan búnað sem framkvæmir línulega færslu lárétt eða lóðrétt eins og í lyftu.
4. Verkefnið gengur út á það að stjórna hraða vexmótor en til þess þurfið þið að sækja kóðasafn (Library) [hér](https://github.com/michaellatman/Arduino-VEX) Veljið græna takkan (Code) og Download ZIP, Opnið Arduino og veljið Sketch - Include Library - Add.ZIP Library og veljið það sem þið sóttuð.
Kóðinn hér fyrir neðan ætti þá að virka fínt. :-)
``` C
/*
Vexmótor getur breytt um hraða með þvi að breyta gildum frá -255 -  +255
*/
#include <vexMotor.h> // includes the vexMotor library - uses Servo.h

vexMotor myVexMotor1;  // creates an instance of the vexMotor class

void setup()
{
  myVexMotor1.attach(9); // setup / attach the vexMotor onto pin 9
  Serial.begin(9600);    // starts the Serial communication on Arduino
}
int speed = 255;//ath -255 fer á fullt afturábak ,ekki fara neðar en 100 eða - 100 það vantar meiri spennu til þess( gerður fyrir 7,2V)

void loop()
{
  myVexMotor1.write(255);//á fullt áfram
  delay(2000);// fullt áfram í 2 sek
  myVexMotor1.write(-255);//á fullt afturábak
  delay(2000);
  myVexMotor1.write(100);//hálfa ferð áfram
  delay(2000);
  myVexMotor1.write(-100);//hálfa ferð afturábak
  delay(2000);
}
```
---

### 6.5 Gírar og tannhjól (10%)
Skoðið þetta varðandi gíra [krækja](https://renegaderobotics.org/compound-gears/)
 
![Gírar](https://raw.githubusercontent.com/VESM1VS/Efni/main/Myndir/girar.png)

1. Hvert er snúningsvægi út ef snúningsvægi mótors er 1Nm ?
1. Hver er snúningshraði út ef snúningshraði mótors er 1000 RPM ?

Bjargir: 
- [Kafli 8.1 - 8.6](https://curriculum.vexrobotics.com/curriculum/mechanical-power-transmission.html)
- [lyftubúnaður](http://roboplex.org/wp/wp-content/uploads/2015/07/VEX-Lifts.pdf)


---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.
- Skilaðu á Innu svörum.

