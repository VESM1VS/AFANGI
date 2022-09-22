## Tímaverkefni 4

- 8% af heildareinkunn áfanga.
- einstaklingsverkefni.

---

Í þessu verkefni ætlum við að kynnast og vinna með [mótora](https://www.instructables.com/Motors-and-Motion/).

### 1. Servo (30%)
1. Lestu eftirfarandi um [servo](https://www.instructables.com/Servo-A-Go-Go/) mótora.
1. Kynntu þér hvernig servo virkar með að lesa [How Servo Motor Works & Interface It With Arduino](https://lastminuteengineers.com/servo-motor-arduino-tutorial/).
1. Tengdu servo við [Servo tester](https://www.allelectronics.com/item/str-110/servo-tester/1.html), sjá [hér](https://www.youtube.com/watch?v=--bpb485i1Q) leiðbeiningar. Notaðu Arduino sem aflgjafa og prófaðu svo testerinn.
1. Settu upp á brauðbretti með Arduino og stilltu servo **með kóða** í upphafstöðu (90 gráður), kóðinn á að vera í _setup_ fallinu. Leiðréttu arminn (taka af og setja aftur á), láttu hann vísa fram (90 gráður).
1. Láttu Servo **með kóða** færir sig í þrjár stöður; fyrst í 0 gráður svo 180 gráður og að lokum í 90 gráður (ekki endurtekning).
1. Keyrðu [`sweep`](https://lastminuteengineers.com/servo-motor-arduino-tutorial/#arduino-code-sweep) kóðann frá 45 til 135 gráður fram og aftur.  
<!-- 
1. Stýrðu tvo Servo með [16-Channel Servo Driver](https://learn.adafruit.com/16-channel-pwm-servo-driver), sjá [skýringar](https://dronebotworkshop.com/servo-motors-with-arduino/#PCA9685_Servo_Driver_Board). 
-->

Sjá einnig: [Using Servo Motors with the Arduino](https://dronebotworkshop.com/servo-motors-with-arduino/).

<!-- 
Servo ítarefni:
- [Making sense of servos (youtube)](https://www.youtube.com/watch?v=IpubzroBjsQ&ab_channel=MakingtoLearn)
- [Servo City](https://www.servocity.com/servo-faqs/)
-->

<!-- 
Spurningar
1. Hvað er mótorinn lengi að snúa sér í 90 gráður miðað við 6V?
1. Hvað er átt við að stöðvun [snúningsvægis](https://www.youtube.com/watch?v=T99yH_gw3p8) (stall torque) sé 10kg/cm við 6v? 
-->

---

### 2. DC mótor og aflgjafi (10%)

1. Skoðaðu e. datasheet á [6V Hobby DC mótor](https://www.robotshop.com/media/files/pdf/datasheet-711.pdf). 
1. Lærðu að stilla og nota aflgjafann (Power Supply) sem er á borðinu með hjálp kennara. Og stilltu hann í samræmi við þolmörk DC mótors.
1. Tengdu DC mótorinn við spennugjafa (NICE-POWER), tengdu + rauður og - svartur við dc mótorinn. 
1. Hafðu V takkan (spennu) í neðstu stöðu á aflgjafa þ.e 0 snúðu V takkanum hægt uppá við að 9V (max). Hámarks straumur fyrir þennan DC mótor er 500mA (stall current). Hvað gerðist?
1. Víxlaðu + og - á mótor og endurtaktu. Hvað gerðist?

<!-- Stall current is the highest current that the motor can draw (under maximum torque load) -->

---

### 3. DC mótor og Arduino (30%)

1. tengdu eins og í mynd, DC mótor og TIO120 [transistor](https://www.instructables.com/Transistors/) en hann er notaður til að kveikja og slökkva á mótornum. <br> ![Mynd](https://github.com/eirben/VESM1/blob/master/d%C3%A6mi/9V_DC_motor_tip120.png)
2. keyrðu svo eftirfarandi kóða.
``` C
#define pwm 9  // breyta sem inniheldur töluna 9

void setup() {
  pinMode(pwm,OUTPUT);  // notum datapinna 9 á Arduino
  analogWrite(pwm,0);   // set hraðann á mótor í núll
}
void loop() {
  analogWrite(pwm, 255);  // 255 er mesti snúningshraðinnn
  delay(1000);
  analogWrite(pwm, 0);
  delay(1000);
}
```
3. Prófaðu að breyta gildunum í `analogWrite()`, gildin eru frá 0 - 255.

Sjá einnig: [Lesson 13. DC Motors](https://learn.adafruit.com/adafruit-arduino-lesson-13-dc-motors). [Diode](https://www.instructables.com/Diodes/) notuð til að koma í veg fyrir að rafmagn fari í öfuga átt, diode þarf svo viðnám (einsog LED).

---

### 4. DC mótor og L298N DC Motor Driver (30%)
1. Til að geta stýrt hraða og snúningsátt á DC mótor með kóða, fylgdu [Interface L298N DC Motor Driver Module with Arduino](https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/) og settu upp á Breadboard en bara með einn 6V DC mótor. 
1. Passaðu að tengja allt rétt, láttu yfirfara teningar frá félaga og stillingar á aflgjafa; 8V (max) og 250mA (max) straum. 
1. Aðlagaðu kóðann að einum DC mótor, taktu út forlykkjur og notaðu sama gildi fyrir hraðastillingu.

---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.
- Skilaðu á Innu svörum.


<!--
### DC mótor og L293D mótor driver 
Til að geta stýrt hraða og snúningsátt á DC mótor með kóða, fylgdu [Lesson 15. DC Motor Reversing](https://learn.adafruit.com/adafruit-arduino-lesson-15-dc-motor-reversing) og settu upp á Breadboard. Notaðu breytiviðnám til að stýra hraðanum og takka til að stýra átt. Nánar um [L293D](https://maker.pro/custom/projects/all-you-need-to-know-about-l293d)
-->

<!--
### VEX mótor
Tengingar í [Vex 393](http://cmra.rec.ri.cmu.edu/products/cortex_video_trainer/lesson/media_files/2_wire_393_motor_ig.pdf) mótora eru eins og á servomótor það sem er öðruvísi er að Vex er með ESC electric speed controler þá getum við stjórnað hraða.

1. Tengdu einn mótor eins og servo. Prófaðu mótorinn með arduino en til þess þurfið þið að sækja kóðasafn (Library) [hér](https://github.com/michaellatman/Arduino-VEX) Veljið græna takkan (Code) og Download ZIP, Opnið Arduino og veljið Sketch - Include Library - Add.ZIP Library og veljið það sem þið sóttuð. Kóðinn hér fyrir neðan ætti þá að virka fínt. 
``` C
/*
   Vexmótor getur breytt um hraða með þvi að breyta gildum frá -255 til  +255
*/
#include <Servo.h>
#include <VexMotor.h>     // includes the vexMotor library - uses Servo.h
VexMotor myVexMotor1(9);  // creates an instance of the vexMotor class
int speed = 255;          // ath -255 fer á fullt afturábak, ekki fara neðar en 100 eða - 100 það vantar meiri spennu til þess( gerður fyrir 7,2V)

void setup()
{
  myVexMotor1.set(9);    // setup, attach the vexMotor onto pin 9
  Serial.begin(9600);    // starts the Serial communication on Arduino
}

void loop()
{
  myVexMotor1.set(255);//á fullt áfram
  delay(2000);// fullt áfram í 2 sek
  myVexMotor1.set(-255);//á fullt afturábak
  delay(2000);
  myVexMotor1.set(100);//hálfa ferð áfram
  delay(2000);
  myVexMotor1.set(-100);//hálfa ferð afturábak
  delay(2000);
}
```

Settu upp línulega hreyfingu með Vex mótor, tannhjólum, VEX íhlutum. <br>
![mynd](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/vexMotorTenging.png).
-->

