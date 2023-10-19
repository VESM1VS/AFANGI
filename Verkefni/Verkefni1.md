## Tímaverkefni 1

- 8% af heildareinkunn áfanga.
- [Rafeindatækni](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni). 
- Einstaklingsverkefni.
- Áætlaður tími: 4 x 50 mín.

---

#### 1. Raðtengd lokuð rás. 
Settu upp rás með aflgjafa (5V), 1 x 220 ohm viðnám og rautt LED. 

1. Notaðu [multimælir](https://youtu.be/SLkPtmnglOI?t=324) og mældu [viðnám](https://www.instructables.com/Resistors/) sem þú átt. Prófaðu að lesa úr litahringjunum á viðnámi, færðu sömu gildi?
1. Fáðu rautt [LED](https://www.instructables.com/Diodes/) til að loga á [brauðbretti](https://learn.adafruit.com/collins-lab-breadboards-and-perfboards) í [raðtengdri](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/tengingar.jpeg) lokaðri rás. 
1. Prófaðu að færa til viðnámið í rásinni, breytist eitthvað?
1. Prófaðu að skipta út viðnáminu í rásinni fyrir eitthvað annað viðnám, er einhver munur á birtunni?

<br>
Tengimynd

![tengimynd](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/radtengingar.png)

---

#### 2. Raðtengd LEDs. 
Settu upp rás með aflgjafa (5V), 1 x 220 ohm viðnám og **tvær** rauðar LEDs sem eru **raðtengdar**. 

1. Mældu [spennufallið](https://youtu.be/SLkPtmnglOI?t=160) yfir:  
   1. einu LED 
   2. báðum LED 
   3. viðnáminu
1. Getur þú bætt við þriðju LED? Hvað gerist? 

---

#### 3. Takki. 
Settu upp rás með aflgjafa (5V), 220 ohm viðnám og rautt LED. 

1. Bættu [takka](https://www.cuidevices.com/blog/tactile-switches-101) við rásina sem kveikir á LED. 

---

#### 4. Hliðtengd rás.

Í hliðtengdri rás er straumurinn dreifður (skiptist).

1. Settu upp á brauðbretti hliðtengda rás með aflgjafa (5V) sem skiftist í þrjár greinar sem hver inniheldur eina rauða LED og 220 ohm viðnám. Mældu spennufallið yfir viðnámi og LED.
1. Hvað gerist ef þú fjölga greinum? 

<br>
Tengimynd

![tengimynd](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/hlidtengingar.png)

<!-- góð pæling sem snúa að hliðtengingum og lóðamistökum -->
> [myndband](https://www.youtube.com/watch?v=RjdyCXmDtb8&ab_channel=KidovatorsbyGyanLab) um skammhlaup (e. short circuit).

<!-- 1. Hver er straumurinn í greinunum? Notaðu Ohm`s lögmálið til að finna það út. -->

---
<!--
#### 5. Pörun. 

Settu upp verklega á brauðbretti einfalt [pörunarspil](https://www.youtube.com/watch?v=OwhoSbvQ1yc&ab_channel=Kutuhal-SundayScienceSchool) með einni "spurningu" og þremur svarmöguleikum. Ef þú velur rangan svarmöguleika þá heyrist í [active buzzer](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/activebuzzer.jpeg) en ef þú velur réttan svarmöguleika þá kemur ljós á LED. Notaðu aflgjafa, brauðbretti, buzzer, viðnám, LED og víra eftir þörfum. Notaðu multimælir til að kanna [tengingar](https://youtu.be/SLkPtmnglOI?t=495).

---
-->
#### 5. KVL og Ohms lögmálið.  
Settu upp rás með Arduino sem aflgjafa (5V), 220 ohm viðnám og rautt LED. 

1. Lestu um [KVL & Ohms lögmálin](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl). 
   - summa spennufalla um lokaða rafrás er alltaf núll.
   - Í raðtengdri rás er straumurinn alltaf sá sami í rásinni en spennan skiptist. 
   - Spenna (V) = Straumur (I) * Viðnám (R).  
1. Ef Forward Voltage á rauðri LED (mv. 20mA straum.) er 1.8V skv. [LED datasheet](https://learn.adafruit.com/all-about-leds/the-led-datasheet) hvert er spennufallið hjá viðnáminu?
1. Notaðu multimælir og mældu spennufallið yfir LED og svo viðnámi, stemmir það útfrá KVL? 
1. Hvaða stærð á viðnámi ættum við að nota skv. Ohm`s lögmálinu m.v. að hafa 20mA straum í rásinni. Reiknaðu það út og mundu að breyta milliamp (mA) í Amp fyrir útreikninga, 1mA er 0,001Amp. 


<!-- [myndband](https://www.youtube.com/watch?v=EQtwsWJuUPs&list=PLRIGIzu0Z7KlfGFD6gd0eMX0ozfJyrQL-&index=6&t=0s) -->

---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tímum úr ofangreindum liðum. 

