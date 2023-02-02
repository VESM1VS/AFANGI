## Tímaverkefni 4 - **Í vinnslu**

- 15% af heildareinkunn áfanga.
- einstaklingsverkefni.

Í þessu verkefni ætlum við að kynnast og vinna með [mótora](https://www.instructables.com/Motors-and-Motion/).

---

### 1. Servo (20%)
1. Lestu þig til um servo mótor; [Servo A-Go-Go!](https://www.instructables.com/Servo-A-Go-Go/) og [How Servo Motor Works & Interface It With Arduino](https://lastminuteengineers.com/servo-motor-arduino-tutorial/).
1. Tengdu servo við [Servo tester](https://www.allelectronics.com/item/str-110/servo-tester/1.html) og notaðu Arduino sem aflgjafa. 
   1. :warning: Arduino tengist í **IN**, Servo í **OUT**, GND er brúnn á servo, Spennan er 4.8-6 V, sjá [myndband](https://youtu.be/--bpb485i1Q?t=42).
   1. Notaðu neutral stillingu (miðja) til að finna upphafsstöðu (90 gráður). 
   1. Leiðréttu arminn (taka af og setja aftur á), láttu hann vísa fram (90 gráður). 
1. Settu upp á brauðbretti með Arduino og stilltu servo með **kóða**. [leiðbeiningar](https://www.makerguides.com/servo-arduino-tutorial/)
   1. Láttu servo færa sig í þrjár stöður; fyrst í 0 gráður svo 180 gráður og að lokum í 90 gráður.
   1. Þetta á ekki að vera endurtekning, þe. kóðinn á að vera í `setup()`. 
   1. Þú gætir þurft að eiga aðeins við gildin  til að snúa frá 0 til 180 gráður, skoðaðu `myservo.attach(servoPin, min, max);`.
1. Keyrðu [`sweep`](https://lastminuteengineers.com/servo-motor-arduino-tutorial/#arduino-example-1-sweep) kóðann 0 til 180 gráður fram og aftur í stærri þrepum (5 gráður í einu).

<br>

> _Ítarefni; [Using Servo Motors with the Arduino](https://dronebotworkshop.com/servo-motors-with-arduino/) (vefgrein og myndband), [Servo City](https://www.servocity.com/servo-faqs/) (myndbönd og skýringar), [Making sense of servos](https://www.youtube.com/watch?v=IpubzroBjsQ&ab_channel=MakingtoLearn) (DIY Animatronics myndband)._


<!-- 
Spurningar
1. Hvað er mótorinn lengi að snúa sér í 90 gráður miðað við 6V?
1. Hvað er átt við að stöðvun [snúningsvægis](https://www.youtube.com/watch?v=T99yH_gw3p8) (stall torque) sé 10kg/cm við 6v? 
-->

---

### 2. DC mótor og aflgjafi (10%)

1. Skoðaðu e. datasheet á [6V Hobby DC mótor](https://components101.com/motors/toy-dc-motor). 
1. Lærðu að stilla og nota aflgjafann (Power Supply) sem er á borðinu með hjálp kennara. Og stilltu hann í samræmi við þolmörk DC mótors.
1. Tengdu DC mótorinn við spennugjafa (NICE-POWER), tengdu + rauður og - svartur við dc mótorinn. 
1. Hafðu V takkan (spennu) í neðstu stöðu á aflgjafa þ.e 0, snúðu V takkanum hægt uppá við að **6V** (max) og **250mA**. Hvað gerðist?
1. Víxlaðu + og - á mótor og endurtaktu. Hvað gerðist?


<!-- Stall current is the highest current that the motor can draw (under maximum torque load) -->

---

### 3. DC mótor og L298N DC Motor Driver (20%)
1. Til að geta stýrt hraða og snúningsátt á DC mótor með kóða, fylgdu [Interface L298N DC Motor Driver Module with Arduino](https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/) og settu upp á Breadboard en bara með einn 6V DC mótor. 
1. Passaðu að tengja allt rétt, láttu yfirfara teningar frá félaga og stillingar á aflgjafa; 8V og 250mA (max) straum. 
1. Aðlagaðu kóðann að einum DC mótor, láttu DC mótor fara í báðar áttir með fastri hraðastillingu á víxl (taktu út forlykkjurnar).

Tengimynd

![dc mótor og L298N](https://github.com/VESM1VS/AFANGI/blob/main/Kennsluefni/einn_dc_l298n.png)


---

### 4. Servo á mismunandi hraða en keyra samtímis með `TDelay` (30%)

Vandamálið við innbyggða `delay()` fallið í Arduino er að það blokkerar (e. block) forritið sem er að keyra á Arduino-num. Það þýðir að forritið stoppar og gerir ekkert annað en að bíða eftir að tíminn sem skilgreindur er í `delay()` fallinu er liðinn. Þetta skapar vandamál ef að Arduino-inn á að vera gera eitthvað annað á meðan beðið er.

TDelay leysir þetta en þó með aðeins annarri virkni. Þannig að í stað þess að bíða eftir að tíminn er liðinn þá þarf að spyrja TDelay hvort biðtíminn sé liðinn.

Notkun:

1. Búa til breytu af taginu TDelay (t.d.): `TDelay led_delay(1000);` breytan `led_delay` er þá með innbyggðan teljari sem klárast á 1000 ms.
2. Spyrja breytuna hvort tíminn er liðinn með fallinu `timiLidinn()` sem skilar `true` ef tíminn er liðinn annars `false` (t.d.): `if(led_delay.timiLidinn() == true) { /* gera það sem á að gera þegar biðtíminn er liðinn */ }`.
3. Ef þarf þá má breyta biðtímanum með fallinu `setBidtimi(nýr biðtími)` (t.d.): `led_delay.setBidtimi(1500)`, biðtíminn er núna 1500 ms.

Sjá nánar um notkun í dæmunum hér fyrir neðan.

<!-- 
Dæmi:

| Delay | TDelay |
| --- | --- |
| <pre>delay(1000);<br>digitalWrite(LED, HIGH);</pre> | <pre>if(led_delay.timiLidinn() == true) {<br>&emsp; digitalWrite(LED,HIGH)<br>}</pre>
-->

Kóðasafnið fyrir TDelay má finna [hér (zip skrá)](https://github.com/VESM1VS/AFANGI/raw/main/Kodi/tdelay.zip). Sett inn á Arduino IDE með því að fara í *Sketch->Include Library->Add .ZIP Library...*

Blikkandi LED:

- [Ein LED pera, blikkar á einnar sekúndu fresti.](https://wokwi.com/projects/349788528390963795)
- [Ein LED pera, mismunandi á og af tími](https://wokwi.com/projects/349253817043255891)
- [Þrjár LED perur, slembi (e. random) blikktími](https://wokwi.com/projects/349252429929251411)

#### Settu upp eftirfarandi verklega með servo:

1. [Einn Servo mótor - (0°-90°-180°-90°-0°)](https://wokwi.com/projects/349789993741320787)
2. [Einn Servo mótor - 0° til 180° til 0° (sweep)](https://wokwi.com/projects/349792066153218642)
3. [Tveir Servo mótorar - sweep á misjöfnum hraða](https://wokwi.com/projects/349794862688633427)

---

### 5. DC og Servo samtímis (20%)

1. Servo fer fram og aftur. 
1. DC með L298N DC Motor Drive snýst í eina átt á föstum hraða.

---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.


<!--
### PCA9685 Servo Driver (20%)

Stýrðu tvo Servo með [PCA9685 16-Channel Servo Driver](https://dronebotworkshop.com/servo-motors-with-arduino/#PCA9685_Servo_Driver_Board) sem þú færð frá kennara að láni. 
-->

<!--
###  DC mótor og Arduino (20%)

1. tengdu eins og í mynd, DC mótor og _TIP120_ [transistor](https://www.instructables.com/Transistors/) en hann er notaður til að kveikja og slökkva á mótornum. <br> ![Mynd](https://github.com/eirben/VESM1/blob/master/d%C3%A6mi/9V_DC_motor_tip120.png)
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
-->

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

