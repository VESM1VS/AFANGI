## Arduino Forritun

Undirbúningur fyrir SimonSays

1. Settu [Arduino IDE](https://github.com/VESM1VS/Efni/blob/main/Kennsluefni/arduino_uppsetning.md) upp á tölvuna þína, ef þú ert ekki þegar búinn að því.
1. Settu upp [Blink á brauðbretti](https://learn.adafruit.com/adafruit-arduino-lesson-2-leds/blinking-the-led)

---

#### Digital pinnar
Stafrænt (e. digital) gildi getur annaðhvort verið 0 eða 1 (eða á/af, kveikt/slökkt). Í Arduino er búið að skilgreina [fastana (e. constant)](https://www.arduino.cc/reference/en/language/variables/constants/constants/) ```HIGH``` sem 1 (einn) og ```LOW``` sem 0 (núll). 
- `HIGH` spenna meira en 3.0V á pinna og `LOW` spenna minni en 1.5V á pinna.
- ```pinMode(PINNI, STADA)``` – stillir pinna sem inntaks eða úttakspinna. 
- Dæmi: ```pinMode(4, OUTPUT);``` setur pinna 4 sem úttakspinna. 
- Sjá nánar [Digital Pins](https://www.arduino.cc/en/Tutorial/Foundations/DigitalPins)

#### Digtial Output
- ```digitalWrite(PINNI, GILDI)```  skrifar annaðhvort ```HIGH``` eða ```LOW``` á pinna. 
- Dæmi: ```digitalWrite(4, LOW);``` skrifar ```LOW``` út á pinna 4. 
- Pinnar stilltir á `output` geta skemmst ef þeir eru tengdir i jörð eða spennu (3.3V eða 5V)
- Nánar um [digitalWrite()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/)

#### Digital Input
- ```digitalRead(PINNI)``` – les stöðuna á pinna, staðan á pinnanum getur verið annaðhvort ```HIGH``` eða ```LOW```. 
- Dæmi: ```int k = digitalRead(4);``` les stöðuna á pinna 4 og geymir í breytunni ```k```.
- Ef pinni er ekki tengdur við neitt, `digitalRead()`  skilar þá annaðhvort HIGH eða LOW með handahófskennt (random).
- Nánar um [digitalRead()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/)

<!--
1. Settu upp á brauðbretti LED og takka. Skrifaðu Arduino kóða þannig að takkinn virki með LED.
-->


