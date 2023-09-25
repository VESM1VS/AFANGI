## Tímaverkefni 6 

- 8% af heildareinkunn áfanga.
- Einstaklingsverkefni.
- Áætlaður tími: 4 x 50 mín.
- Viðfangsefni: [mótorar](https://github.com/VESM1VS/AFANGI/wiki/Mekatr%C3%B3nik).

---

### 1. Servo (30%) 

1. Skoðaðu eftirfarandi grein, [Using a servo motor with an ESP32 board in MicroPython](https://www.upesy.com/blogs/tutorials/esp32-servo-motor-sg90-on-micropython). Leiðréttu arminn (taka af og setja aftur á), láttu hann vísa fram, 90 gráður. Keyrðu kóðasýnidæmin á ESP32.  <br>

1. Fáðu servo til að haga sér eins og e. [flipper í Pin Ball Machine](https://www.youtube.com/watch?v=Orxx7UImOYM&ab_channel=PinballHelp). Þegar þú smellir á takka þá á Servo að fara strax úr c.a. 60 gráðum í 120 gráður og svo til baka.

<br>

> _Ítarefni: [Servo City](https://www.servocity.com/servo-faqs/) (myndbönd og skýringar)._

---

### 2. Stepper mótor (30%) 
Tengdu Stepper mótor við ULM2003 Stepper mótor driver og fáðu mótorinn til að snúast í hálfan hring fram og aftur til skiptis, sjá nánar bls. 215, kafla 19 Stepper Motor í [pdf leiðbeiningum](https://github.com/VESM1VS/AFANGI/blob/main/Kennsluefni/Python_Tutorial.pdf).

---

### 3. Að keyra mótora samtímis (40%)

Ef við viljum gera eitthvað samtímis t.d. vera með tvo Servo sem snúa með misjöfnum hraða en á sama tíma þá dugar ekki að nota `sleep_ms`. Ástæðan fyrir því er að `sleep_ms` stoppar forritið í ákveðinn tíma og ekkert annað gerist á meðan. Við getum leyst þetta með því að nota þræði  _e. threads_.

**Sýnidæmi:**

```python
import _thread as th
import time
from machine import Pin
blink1_running = True
blink2_running = True
buzzer_running = True

buzzer = Pin(12,Pin.OUT) # buzzer í pinna 12 og GND
led1 = Pin(13, Pin.OUT) #led1 í pinna 13 og GND
led2 = Pin(14, Pin.OUT) #led2 í pinna 14 og GND
buzzer.value(0)

def blink1(delay):
     while blink1_running:
         led1.value(not led1.value())
         time.sleep(delay)
     led1.value(0)

def blink2(delay):
     while blink2_running:
         led2.value(not led2.value())
         time.sleep(delay)
     led2.value(0)

def buzz(delay):
    while buzzer_running:
        buzzer.value(not buzzer.value())
        time.sleep(delay)
    buzzer.value(0)

print("Byrja þráðavinnslu..")
th.start_new_thread(blink1, (0.5,))
th.start_new_thread(blink2, (0.25,))
th.start_new_thread(buzz,(0.25,))

count = 0
while True:
  print("Ljósa sýning og óhljóð... " + str(count))
  count += 1
  if count >= 10:
    break
  time.sleep(1)

print("Enda ljósasýningu...")
blink1_running = False
blink2_running = False
buzzer_running = False
```

Láttu eftirfarandi gerast samtímis

1. Servo hagar sér eins og [flipper](https://www.youtube.com/shorts/gBAMq95YVXU) á 3 sekúndna fresti.
1. Stepper mótor snýst í 3 hringi réttsælis og svo 3 hring rangsælis. Þetta er endurtekið endalaust.

---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.
- Skilaðu á Innu kóðalausnum.


