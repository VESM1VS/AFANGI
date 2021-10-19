# Verkefni 2

- Rafeindatækni.
- 15% af heildareinkunn áfanga.
- Tímaverkefni.

### Verkefnalýsing
Verklegar tilraunir í kennslustund með; rafmagn, raðtengdar- og hliðtengdar rásir, íhluti, mælingar og útreikninga. <br>

---

#### 2.1 Raðtengd lokuð rás
Fáðu **rauða** [LED peru](https://www.instructables.com/Diodes/) til að loga á [brauðbretti](https://learn.adafruit.com/collins-lab-breadboards-and-perfboards) með einu 220 ohm [viðnámi](https://www.instructables.com/lesson/Resistors/) og aflgjafa (Arduino). <br> 
Ef þú lendir í vanda skoðaðu þá [algeng mistök](https://github.com/VESM1VS/AFANGI/wiki/Rafeindat%C3%A6kni#brau%C3%B0bretti-og-led-pera-algeng-mist%C3%B6k). Prófaðu að færa til viðnámið í rásinni.

---

#### 2.2 Viðnám
1. Mældu viðnámið sem þú notaðir í **3.1** með mælir, stemmir það? 
1. Lestu úr litahringjunum á [viðnáminu](https://www.instructables.com/Resistors/), færðu sömu tölu?
1. Notaðu [Viðnáms reiknivél](hhttps://resistorcolorcodecalc.com/), færðu sömu tölu?
1. Prófaðu að mæla fleiri viðnám.

---

#### 2.3 Blá LED vs rauð LED
Fáðu núna **bláa** led peru til að loga á brauðbretti. Afhverju skyldi ekki vera sama birtustigið af blárri og rauðri LED? 

---

#### 2.4 LED og mismunandi viðnám 
Fylgdu eftir eftifarandi [tilraunum](https://learn.adafruit.com/all-about-leds/what-are-leds-used-for) á vefsíðunni ( þú endar á að sprengja eina LED :) ).

---

#### 2.5 LED datasheet
Lestu greinina [The LED datasheet](https://learn.adafruit.com/all-about-leds/the-led-datasheet). Náðu í datasheetið fyrir Super Bright Red og finndu út eftirfarandi:

1. Hversu björt getur LED orðið (mcd)?
1. Hver eru hitaþolmörk LED?
1. Hvaða hitast er gott að nota fyrir lóðun?
1. Forward Voltage (mv. 20mA straum.)

---

#### 2.6 Forward Voltage og KVL lögmálið
1. Lestu um [Forward Voltage and KVL](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl) að Ohm`s law.
1. Með Arduino (5V) sem aflgjafa, 220 ohm viðnám og rauða LED peru. Hvert er spennufallið hjá viðnáminu?
1. Notaðu mælir og mældu spennufallið. 

---

#### 2.7 Raðtengd LEDS 
Hvað getur þú raðtengt mörgum rauðum LED perum mv. að hafa Arduino sem aflgjafa og 220 ohm viðnám? Afhverju ekki fleiri? En bláar LED?

---

#### 2.8 LED Series Resistor Calculator
Notaðu [LED Series Resistor Calculator](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-led-series-resistor) til að reikna út viðnám fyrir bláa LED mv. 20mA straum og 5V aflgjafa.
<!--
Formúlan til að finna út lágmarks viðnám fyrir t.d. LED er `Viðnám = (spenna frá orkugjafa - spennufall yfir LED) / LED current rating`
-->

---

#### 2.9 Ohm`s lögmálið
Ohm`s lögmálið:  Spenna (V) = Straumur (I) * Viðnám (R) <br>
Lestu [Ohm`s law](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl#ohms-law-641044-8).

1. Með Arduino (5V) sem aflgjafa og 220 ohm viðnám á brauðbretti í lokaðri raðtengdri rás. Hver er straumurinn? Reiknaðu það út með Ohm`s lögmálinu. <!-- mældu strauminn með mælir. -->
1. Í lokaðri raðtengdri rás með 9V batterí sem aflgjafa með 40mA straum. Hvað ætti viðnámið að vera?

---

#### 2.10 Breytiviðnám til að stilla birtu
Kláraðu að lesa tutorialinn All About LEDs frá [Revisiting Resistors](https://learn.adafruit.com/all-about-leds/revisiting-resistors) um vensl straums og spennu.
Notaðu breytiviðnám (blátt) og 100 ohm viðnámð með rauðri LED á brauðbretti með Arduino sem aflgjafa.

---

**MEIRA VÆNTANLEGT!**

---

## Námsmat
- Yfirferð og námsmat á sér stað í tíma. 
- Fyrir hvern lið; Fullt fyrir fullnægjandi útfærslu, hálft ef lausn er ábótavant og ekkert ef lausn er stórlega ábótavant eða vantar. <br>

### Eftirfarandi er metið útfrá verklegum tilraunum:

1. Getur sett upp raðtengda lokaða rás (viðnám, LED) á breadboad. 
1. Getur mælt spennu og viðnám með mælir.
1. Kann að lesa úr datasheet mikilvægar upplýsingar um LED.
1. Kann að lesa úr litahringjum á viðnámi
1. Þekkir og kann að beita íhlutum; LED, viðnám, breytiviðnám, takkar.
1. Kann að vinna með mælieiningar og margfaldara td. mA í ohm.
1. Getur nýtt sér KVL lögmálið í raðtengdri rás. 
1. Getur beitt Ohms lögmálinu.
1. Þekkir og skilur samband straums, spennu og viðnáms.
1. Kann skil á short-circuit.
1. Getur reiknað út kraft í wöttum (W=VI). 
1. Getur sett upp hliðtengda lokaða rás (viðnám, LEDS og takki) á breadboad.
1. Þekkir muninn á raðtengdu og hliðtengdri rás.
1. Getur nýtt sér reiknivélar til að finna út viðnám.
1. Getur teiknað einfalda raðtenga- og hliðtengda rás.

---



