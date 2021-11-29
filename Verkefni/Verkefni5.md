# Verkefni 5 (15%)

- 15% af heildareinkunn.
- Mótorar og hreyfingar.
- Tíma- og einstaklingsverkefni.

---

### Að vinna með stafræn gildi í Arduino
Stafrænt (e. digital) gildi getur annaðhvort verið 0 eða 1 (eða á/af, kveikt/slökkt). Í Arduino er búið að skilgreina [fastana (e. constant)](https://www.arduino.cc/reference/en/language/variables/constants/constants/) ```HIGH``` sem 1 (einn) og ```LOW``` sem 0 (núll). 
- `HIGH` spenna meira en 3.0V á pinna og `LOW` spenna minni en 1.5V á pinna.
- ```pinMode(PINNI, STADA)``` – stillir pinna sem inntaks eða úttakspinna. 
- Dæmi: ```pinMode(4, OUTPUT);``` setur pinna 4 sem úttakspinna. 
- Sjá nánar [Digital Pins](https://www.arduino.cc/en/Tutorial/Foundations/DigitalPins)

---

### 5.1 Digtial Output (20%)
- ```digitalWrite(PINNI, GILDI)```  skrifar annaðhvort ```HIGH``` eða ```LOW``` á pinna. 
- Dæmi: ```digitalWrite(4, LOW);``` skrifar ```LOW``` út á pinna 4. 
- Pinnar stilltir á `output` geta skemmst ef þeir eru tengdir i jörð eða spennu (3.3V eða 5V)
- Nánar um [digitalWrite()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/)

Fylgdu verklega eftifarandi tutorial:
1. [Blink á brauðbretti](https://learn.adafruit.com/adafruit-arduino-lesson-2-leds/blinking-the-led)

<!-- 1. [Blink (Halló heimur) með innbyggðu led](https://learn.adafruit.com/ladyadas-learn-arduino-lesson-number-1/upload-your-first-sketch) -->

---

### 5.2 Digital Input (20%)
- ```digitalRead(PINNI)``` – les stöðuna á pinna, staðan á pinnanum getur verið annaðhvort ```HIGH``` eða ```LOW```. 
- Dæmi: ```int k = digitalRead(4);``` les stöðuna á pinna 4 og geymir í breytunni ```k```.
- Ef pinni er ekki tengdur við neitt, `digitalRead()`  skilar þá annaðhvort HIGH eða LOW með handahófskennt (random).
- Nánar um [digitalRead() og kóðasýnidæmi (takki + LED)](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/)

Fylgdu verklega eftifarandi tutorial:
1. Settu upp á brauðbretti LED og takka. Skrifaðu Arduino kóða þannig að takkinn virki með LED.

---

### 5.3 Servo mótor (30%)
Kynntu þér [Servo mótors](https://www.instructables.com/Servo-A-Go-Go/)

1. Settu upp með Arduino og SG90 micro servo (blár) og keyrðu `sweep` kóðann á brauðbretti [Sweep leiðbeiningar](https://lastminuteengineers.com/servo-motor-arduino-tutorial/#arduino-code-sweep)
1. Settu upp með Arduino og SG90 micro servo (blár) og keyrðu `Knob` kóðann á brauðbretti [Controlling Servo with a Potentiometer](https://lastminuteengineers.com/servo-motor-arduino-tutorial/#controlling-servo-with-a-potentiometer)

---

### 5.4 MG995 Servo (20%)
Skoðaðu upplýsingar um [MG995 Servo Motor](https://components101.com/motors/mg995-servo-motor) og svaraðu eftirfarandi:

1. Á hvaða spennusviði vinnur MG995 Servo Motor og afhverju þurfum við að vita það?
1. Hver er lausagangs straumur (free current) við 6V? Hvað er átt við með þessu?
1. Hvað er átt við að stöðvun snúningsvægis (stall torque) sé 11kg/cm við 6v? 
1. Hver er hámarkssnúningshraði RPM við 6V í lausagangi (no-load)?

Bjargir: 
- [7.2: Classical Mechanics](https://curriculum.vexrobotics.com/curriculum/speed-power-torque-and-dc-motors/classical-mechanics.html)
- [7.3: DC Motors](https://curriculum.vexrobotics.com/curriculum/speed-power-torque-and-dc-motors/dc-motors.html)
- [Torque explained (myndband)](https://www.youtube.com/watch?v=T99yH_gw3p8)

---

### 5.5 Rafþéttar (10%)

Kynntu þér rafþétta (e. capasitors):
1. [Capacitors](https://www.instructables.com/lesson/Capacitors-2/)
1. [Circuit Playground: C is for Capacitor (myndband)](https://learn.adafruit.com/circuit-playground-c-is-for-capacitor/video)

Svaraðu eftirfarandi:
1. Hver er munurinn á rafhlöðu og rafþétti?
1. Hver er munurinn á Nonpolarized (NPD) og polarized (PD) þéttum?
1. Afhverju er heppilegt að nota rafþéttir með mótor?


<!--
### Gírar 
Skoðið myndina vel og svarið 2 spurningum
 
![Gírar](https://raw.githubusercontent.com/VESM1VS/Efni/main/Myndir/girar.png)

1. Hvert er snúningsvægi út ef snúningsvægi mótors er 1Nm ?
1. Hver er snúningshraði út ef snúningshraði mótors er 1000 RPM ?

Bjargir: 
- [Kafli 8.1 - 8.6](https://curriculum.vexrobotics.com/curriculum/mechanical-power-transmission.html)
-->

---

### Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.
- Skilaðu á Innu svörum.

