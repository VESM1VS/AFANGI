## Tímaverkefni 1

- 10% af heildareinkunn áfanga.
- einstaklingsverkefni.

### Verkefnalýsing
Verklegar tilraunir í kennslustund með; rafmagn, raðtengdar rásir, íhluti, mælingar og útreikninga. <br>

---

#### 1. Viðnám (10%)
1. Notaðu [mælir (myndband)](https://www.youtube.com/watch?v=SLkPtmnglOI&t=11s&ab_channel=SparkFunElectronics) og mældu viðnám sem þú átt og merktu þau.
1. Lestu úr litahringjunum á [viðnáminu](https://www.instructables.com/Resistors/), færðu sömu tölu?
1. Notaðu [Viðnáms reiknivél](https://resistorcolorcodecalc.com/), færðu sömu tölu?

---

#### 2. Raðtengd lokuð rás (10%)
Fáðu rauða [LED peru](https://www.instructables.com/Diodes/) til að loga á [brauðbretti](https://learn.adafruit.com/collins-lab-breadboards-and-perfboards) með einu 220 ohm [viðnámi](https://www.instructables.com/lesson/Resistors/) og 5V aflgjafa (Arduino) [raðtengdri](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#ra%C3%B0teng-r%C3%A1s) lokaðri rás. <br> 
1. Prófaðu að færa til viðnámið í rásinni.
1. Prófaðu að skipta út viðnáminu í rásinni fyrir eitthvað annað, er einhver munur á birtunni?

Ef þú lendir í vanda skoðaðu þá [algeng mistök](https://github.com/VESM1VS/AFANGI/wiki/Rafeindat%C3%A6kni#brau%C3%B0bretti-og-led-pera-algeng-mist%C3%B6k). 

---

#### 3. LED datasheet (10%)
Lestu [The LED datasheet](https://learn.adafruit.com/all-about-leds/the-led-datasheet). Náðu í datasheetið fyrir Super Bright Red og finndu út eftirfarandi:

1. Hversu björt getur LED orðið (mcd)?
1. Hver eru hitaþolmörk LED?

---

#### 4. Spenna, Forward Voltage og KVL lögmálið (10%)
Horfðu á [myndband](https://www.youtube.com/watch?v=w82aSjLuD_8&list=PLWv9VM947MKi_7yJ0_FCfzTBXpQU-Qd3K&index=5) sem útskýrir spennu. Lestu svo greinina [Forward Voltage and KVL](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl) (að Ohm`s law).

1. Með Arduino sem aflgjafa, 220 ohm viðnám og rauða LED peru. Ef Forward Voltage á rauðri LED (mv. 20mA straum.) er 1.8V hvert er spennufallið hjá viðnáminu?
1. Notaðu mælir og mældu spennufallið yfir LED og viðnámi, stemmir það útfrá KVL? 

---

#### 5. Raðtengd LEDs (10%)
Raðtengdu tvær rauðar LEDs með einu 220 ohm viðnámi og Arduino sem spennugjafa. 

1. Mældu spennufallið a) yfir annarri LED b) yfir báðum LED perunum saman og c) viðnáminu 
1. Hvað getur þú raðtengt mörgum rauðum LED perum? 

---

#### 6. Ohms lögmálið (10%)
Ohms lögmálið:  `Spenna (V) = Straumur (I) * Viðnám (R)`.<br>
Lestu [Ohm`s law](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl#ohms-law-641044-8).

1. Með Arduino (5V) sem aflgjafa og 220 ohm viðnám á brauðbretti í lokaðri raðtengdri rás. Hver er straumurinn? Reiknaðu það út með Ohm`s lögmálinu. Mundu að breyta [mA](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#margfaldarar) í Amp fyrir útreikninga. 
1. Í lokaðri raðtengdri rás með 9V batterí sem aflgjafa með 40mA straum. Hvað ætti viðnámið að vera?

---

#### 7. KLV og Ohm`s lögmálið (10%)
Horfðu á eftirfarandi [myndband](https://www.youtube.com/watch?v=EQtwsWJuUPs&list=PLRIGIzu0Z7KlfGFD6gd0eMX0ozfJyrQL-&index=6&t=0s).

1. Settu upp raðtengdarás með 5V spennugjafa (Arduino), R1 = 1K og R2 = 220.  
1. Reiknaðu út hvert spennufallið (Voltage drop) er á R1 og R2.
1. Mældu spennufallið á R1 og R2.

---

#### 8. Ohm`s lögmálið í raðtengdri rafrás með viðnámi og LED. (10%)

1. Reiknaðu út strauminn í raðtengdri rás með V=5V, R=220 og rautt LED.  
1. Settu upp rásina og reiknaðu út strauminn útfrá mælingu á spennufallinu á viðnáminu og LED hinsvegar.

<!--
Ef ég er með 2 rauðar led perur, 20Ma straum og 12V batterí, hvert er viðnámið til að tryggja að þær fái sem hæfilegasta birtu? [Mynd](https://youtu.be/H69xDuon7vo?t=82) og _[lausnin](https://youtu.be/H69xDuon7vo?t=156)_
-->

---

#### 9. Viðnámsreiknir útfrá Ohm`s lögmálinu. (10%)
1. Notaðu [LED Series Resistor Calculator](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-led-series-resistor) til að reikna út viðnám fyrir **bláa** LED mv. 20mA straum og 5V aflgjafa.

---

#### 10. Takki og LED (10%)

1. Settu upp rás með [push switch button](https://unciarobotics.com/wp-content/uploads/2020/04/Push-Button-Diagram-Part-2.svg) sem kveikir á LED peru. Hér er svo smávegis um [rofa](https://www.instructables.com/Switches/)

---


## Námsmat og skil
- Skilaðu á Innu svör við spurningum.
- Yfirferð og námsmat á sér stað í tíma. 
- Fyrir hvern lið; Fullt fyrir fullnægjandi lausn/skilning, ekkert ef lausn/skilningur er ábótavant eða vantar. <br>

<!--
Eftirfarandi er metið í tíma útfrá verklegum tilraunum og skilningi nemanda:
1. Getur sett upp raðtengda lokaða rás (viðnám, LED) á breadboad.
1. Getur mælt spennu og viðnám með mælir. 
1. Getur nýtt sér KVL lögmálið í raðtengdri rás. 
1. Getur beitt Ohms lögmálinu. 
1. Kann að vinna með mælieiningar og margfaldara td. mA í ohm. 
1. Kann að lesa úr datasheet mikilvægar upplýsingar t.d. um LED. 
1. Kann að reikna og lesa úr litahringjum á viðnámi. 
-->


