# Verkefni 2

- Rafeindatækni.
- 15% af heildareinkunn áfanga.
- Tímaverkefni.

### Verkefnalýsing
Verklegar tilraunir í kennslustund með; rafmagn, raðtengdar- og hliðtengdar rásir, íhluti, mælingar og útreikninga. <br>

---

#### 2.1 Raðtengd lokuð rás
Fáðu rauða [LED peru](https://www.instructables.com/Diodes/) til að loga á [brauðbretti](https://learn.adafruit.com/collins-lab-breadboards-and-perfboards) með einu 220 ohm [viðnámi](https://www.instructables.com/lesson/Resistors/) og 5V aflgjafa (Arduino) [raðtengdri](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#ra%C3%B0teng-r%C3%A1s) lokaðri rás. <br> 
1. Prófaðu að færa til viðnámið í rásinni.

Ef þú lendir í vanda skoðaðu þá [algeng mistök](https://github.com/VESM1VS/AFANGI/wiki/Rafeindat%C3%A6kni#brau%C3%B0bretti-og-led-pera-algeng-mist%C3%B6k). 


---

#### 2.2 Viðnám
1. Mældu viðnámið sem þú notaðir í **2.1** með mælir, stemmir það? 
1. Lestu úr litahringjunum á [viðnáminu](https://www.instructables.com/Resistors/), færðu sömu tölu?
1. Notaðu [Viðnáms reiknivél](hhttps://resistorcolorcodecalc.com/), færðu sömu tölu?
1. Prófaðu að skipta út viðnáminu í rásinni fyrir eitthvað annað, er einhver munur á birtunni?
1. Notaðu [mælir (myndband)](https://www.youtube.com/watch?v=SLkPtmnglOI&t=11s&ab_channel=SparkFunElectronics) og mældu fleiri viðnám sem þú átt og merktu þau.

---

#### 2.3 LED og mismunandi viðnám 
Fylgdu eftir [tilraunum](https://learn.adafruit.com/all-about-leds/what-are-leds-used-for) og svaraðu spurningum á vefsíðunni:
- blá og rauð LED 
- þrjár raðtengdar rásir með LED perum og mismunandi viðnámi.
- Með að nota mismunandi spennugjafa, 3.3V og 5V (slepptu að nota VIN).
- sprengdu eina glæra LED frá kennara.

---

#### 2.4 LED datasheet
Lestu greinina [The LED datasheet](https://learn.adafruit.com/all-about-leds/the-led-datasheet). Náðu í datasheetið fyrir Super Bright Red og finndu út eftirfarandi:

1. Hversu björt getur LED orðið (mcd)?
1. Hver eru hitaþolmörk LED?

---

#### 2.5 Spenna, Forward Voltage og KVL lögmálið
Horfðu á [myndband](https://www.youtube.com/watch?v=w82aSjLuD_8&list=PLWv9VM947MKi_7yJ0_FCfzTBXpQU-Qd3K&index=5) sem útskýrir spennu. Lestu svo greinina [Forward Voltage and KVL](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl) alveg að Ohm`s law.

1. Hvert er Forward Voltage á rauðri LED (mv. 20mA straum.)?
1. Með Arduino (5V) sem aflgjafa, 220 ohm viðnám og rauða LED peru. Hvert er spennufallið hjá viðnáminu?
1. Notaðu mælir og mældu spennufallið yfir LED og viðnámi, stemmir það útfrá KVL? 
1. Notaðu [LED Series Resistor Calculator](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-led-series-resistor) til að reikna út viðnám fyrir **bláa** LED mv. 20mA straum og 5V aflgjafa.

---

#### 2.6 Raðtengd LEDs 
Raðtengdu tvær rauðar LEDs með einu 220 ohm viðnámi og Arduino sem spennugjafa. 

1. Mældu spennufallið a) yfir annarri LED b) yfir báðum LED perunum saman og c) viðnáminu 
1. Hvað getur þú raðtengt mörgum rauðum LED perum? En hvað ef þú notar bláar LEDs?

---

#### 2.7 Ohm`s lögmálið
Ohm`s lögmálið:  `Spenna (V) = Straumur (I) * Viðnám (R)`. <br>
Lestu [Ohm`s law](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl#ohms-law-641044-8).


1. Með Arduino (5V) sem aflgjafa og 220 ohm viðnám á brauðbretti í lokaðri raðtengdri rás. Hver er straumurinn? Reiknaðu það út með Ohm`s lögmálinu. Mundu að breyta [mA](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#margfaldarar) í Amp fyrir útreikninga. <!-- mældu strauminn með mælir. -->
1. Í lokaðri raðtengdri rás með 9V batterí sem aflgjafa með 40mA straum. Hvað ætti viðnámið að vera?

---

#### 2.8 Breytiviðnám til að stilla birtustig
Kláraðu All About LEDs frá [Revisiting Resistors](https://learn.adafruit.com/all-about-leds/revisiting-resistors) um vensl straums og spennu.
1. Svaraðu spurningunum.
1. Notaðu breytiviðnám (blátt) og 100 ohm viðnámð með rauðri LED á brauðbretti með Arduino sem aflgjafa.

---

#### 2.9 KLV og Ohm`s lögmálið 
Horfðu á eftirfarandi [myndband](https://www.youtube.com/watch?v=EQtwsWJuUPs&list=PLRIGIzu0Z7KlfGFD6gd0eMX0ozfJyrQL-&index=6&t=0s).

1. Settu upp raðtengdarás með 5V spennugjafa (Arduino), R1 = 1K og R2 = 220.  
1. Reiknaðu út hvert spennufallið (Voltage drop) er á R1 og R2.
1. Mældu spennufallið á R1 og R2.

---

#### 2.10 Kraftur (W)
Kraftur (power) er mældur í wöttum (W). Pera sem dæmi myndar ljós og hita og er mæld í W. Annað dæmi um mælingu í W eru orkugjafar t.d. batterí. Í rafrás þá er kraftur (vinna yfir tíma) mæling á orkugjafa eða orkutapi í rás í formi t.d hita, ljós eða hreyfingar. Formúlan til að reikna út kraft er `W = V * A`. <br>
fyrir nánari skýringu; [myndband](https://www.youtube.com/watch?v=fQGjzxNY_mY&ab_channel=MichelvanBiezen) og  [vefgrein](https://www.electronics-tutorials.ws/dccircuits/dcp_2.html).

1. Hvert er orkutapið í wöttum (W) og í hvað formi er orkutapið í rás með 5V spennugjafa og 220R? 

---

#### 2.11 Ohm`s lögmálið í raðtengdri rafrás með viðnámi og LED.

1. Reiknaðu út strauminn í raðtengdri rás með V=5V, R=220K og rautt LED.  
1. Settu upp rásina og reiknaðu út strauminn útfrá mælingu á spennufallinu á viðnáminu og LED hinsvegar.

<!--
Ef ég er með 2 rauðar led perur, 20Ma straum og 12V batterí, hvert er viðnámið til að tryggja að þær fái sem hæfilegasta birtu? [Mynd](https://youtu.be/H69xDuon7vo?t=82) og _[lausnin](https://youtu.be/H69xDuon7vo?t=156)_
-->

---

#### 2.12 skammhlaup (e. short circuit)
Horfuð á [myndband](https://www.youtube.com/watch?v=RjdyCXmDtb8&ab_channel=KidovatorsbyGyanLab) um skammhlaup.

1. Settu upp lokaða rafrás með LED, 220R og Arduino sem aflgjafa sem framkvæmir skammhlaupt.

---

#### 2.13 Takki og LED

1. Settu upp rás með [push switch button](https://unciarobotics.com/wp-content/uploads/2020/04/Push-Button-Diagram-Part-2.svg) sem kveikir á LED peru. Hér er svo samantekt um [rofa](https://www.instructables.com/Switches/)

---

#### 2.14 Hliðtengd rás 
Í raðtengdri rás er straumurinn alltaf sá sami í allri rásinni en spennan dreifist. <br>
Í hliðtengdri rás er spennan sú sama í allri rásinni, en straumurinn er hinsvegar dreifður (mismikill). <br>
Nánar um [hliðtengda rás](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#hli%C3%B0tengd-r%C3%A1s) 

1. Settu upp hliðtengda rás með eitt 220 ohm viðnám í aðalgrein sem svo skiftist í tvær greinar með sitthvora rauða LED. Mældu spennufallið yfir viðnáminu og báðum LEDs.

1. Settu upp hliðtengda rás sem skiftist í tvær greinar með sitthvora rauða LED og 220 ohm viðnám. Mældu spennufallið yfir báðu viðnámi og LEDs.

---

#### 2.15 Hliðtengd rás og Ohm`s lögmálið

1. Með Arduino sem aflgjafa, settu upp hliðtengda rás með tveimur greinum sem innihalda LED og sitthvort viðnámið R1=220 og R2=1K.  
1. Hver er straumurinn í greininni sem innihledur R1 og R2? Notaðu Ohm`s lögmálið pr. grein til að finna það út.

<!--
1. Við viljum hafa 20mA straum fyrir hvora peruna. Hvert ætti viðnánmið að vera? _[Lausn](https://youtu.be/H69xDuon7vo?t=474)_
1. Núna ætlum við að vera með viðnám + led í sittvoru grein. Hver er straumurinn sem hvor peran fær? [myndband (að hliðtengingu)](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=404).
-->

---

#### 2.16 Hliðtengd rás með LEDs
1. Í [myndbandinu sem sýnir LED Matrix](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=412) eru 8 LEDS hliðtengd með 220 ohm viðnám hvert til að allar LEDs gefi frá sér þokkalega birtu og 13,6 mA straum. En hvað þarf spennan að vera frá orkugjafanum? Notaðu [Paralell reiknivél](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-parallel-and-series-resistor) til að finna út heildarviðnámið í rásinni.

---

#### 2.17 Hliðtengd rás og fjöldi LEDs 
Með 9V batterí. Hvað getum við hliðtengt margar led perur? ef við viljum tryggja að hver þeirra fái 15mA straum?


<!--
### Flóknarar: Samsett, raðtengd + hliðtengd rás
- [myndband](https://www.khanacademy.org/science/in-in-class10th-physics/in-in-electricity/in-in-solving-a-circuit-with-series-and-parallel-resistors/v/solved-example-finding-current-voltage-in-a-circuit)

-->

---

## Námsmat
- Yfirferð og námsmat á sér stað í tíma. 
- Fyrir hvern lið; Fullt fyrir fullnægjandi lausn/skilning, ekkert ef lausn/skilningur er ábótavant eða vantar. <br>

#### Eftirfarandi er metið í tíma útfrá verklegum tilraunum og skilningi nemanda:

1. Getur sett upp raðtengda lokaða rás (viðnám, LED) á breadboad. (10%)
1. Getur mælt spennu og viðnám með mælir. (10%)
1. Kann að lesa úr datasheet mikilvægar upplýsingar um LED. (5%)
1. Kann að lesa úr litahringjum á viðnámi (5%)
1. Þekkir og kann að beita íhlutum; LED, viðnám, breytiviðnám, takkar. (5%)
1. Kann að vinna með mælieiningar og margfaldara td. mA í ohm. (5%)
1. Getur nýtt sér KVL lögmálið í raðtengdri rás. (5%)
1. Getur beitt Ohms lögmálinu. (10%)
1. Þekkir og skilur samband straums, spennu og viðnáms. (5%)
1. Kann skil á short-circuit. (5%)
1. Getur reiknað út kraft í wöttum (W=VI). (5%)
1. Getur sett upp hliðtengda lokaða rás (viðnám, LEDS og takki) á breadboad. (10%)
1. Þekkir muninn á raðtengdu og hliðtengdri rás. (10%)
1. Getur nýtt sér reiknivélar til að finna út viðnám. (5%)
1. Getur teiknað einfalda raðtenga- og hliðtengda rás. (5%)



