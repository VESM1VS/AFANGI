## Tímaverkefni 1

- 12% af heildareinkunn áfanga.
- einstaklingsverkefni.


### Verkefnalýsing.
Verklegar tilraunir í kennslustund með; rafmagn, raðtengdar- og hliðtengdar rásir, íhluti, mælingar og útreikninga. <br>

---

#### 1. Viðnám.
1. Notaðu [mælir (myndband)](https://www.youtube.com/watch?v=SLkPtmnglOI&t=11s&ab_channel=SparkFunElectronics) og mældu viðnám sem þú átt og merktu þau.
1. Lestu úr litahringjunum á [viðnáminu](https://www.instructables.com/Resistors/), færðu sömu tölu?
1. Notaðu [Viðnáms reiknivél](https://resistorcolorcodecalc.com/), færðu sömu tölu?

---

#### 2. Raðtengd lokuð rás.*
Fáðu rauða [LED peru](https://www.instructables.com/Diodes/) til að loga á [brauðbretti](https://learn.adafruit.com/collins-lab-breadboards-and-perfboards) með einu 220 ohm [viðnámi](https://www.instructables.com/lesson/Resistors/) og 5V aflgjafa (Arduino) [raðtengdri](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#ra%C3%B0teng-r%C3%A1s) lokaðri rás. <br> 
1. Prófaðu að færa til viðnámið í rásinni.
1. Prófaðu að skipta út viðnáminu í rásinni fyrir eitthvað annað, er einhver munur á birtunni?

Ef þú lendir í vanda skoðaðu þá [algeng mistök](https://github.com/VESM1VS/AFANGI/wiki/Rafeindat%C3%A6kni#brau%C3%B0bretti-og-led-pera-algeng-mist%C3%B6k). 

---

#### 3. LED datasheet.
Lestu [The LED datasheet](https://learn.adafruit.com/all-about-leds/the-led-datasheet). Náðu í datasheetið fyrir Super Bright Red og finndu út eftirfarandi:

1. Hversu björt getur LED orðið (mcd)?
1. Hver eru hitaþolmörk LED?

---

#### 4. Takki og LED.*
Settu upp rás með takka sem kveikir á LED peru. Hér er svo smávegis um [rofa](https://www.instructables.com/Switches/)

---

#### 5. Spenna, Forward Voltage og KVL lögmálið. 
Horfðu á [myndband](https://www.youtube.com/watch?v=w82aSjLuD_8&list=PLWv9VM947MKi_7yJ0_FCfzTBXpQU-Qd3K&index=5) sem útskýrir spennu. Lestu svo greinina [Forward Voltage and KVL](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl) (að Ohm`s law).

1. Settu upp rás með Arduino sem aflgjafa, 220 ohm viðnám og rauða LED peru. Ef Forward Voltage á rauðri LED (mv. 20mA straum.) er 1.8V hvert er spennufallið hjá viðnáminu?
1. Notaðu mælir og mældu spennufallið yfir LED og viðnámi, stemmir það útfrá KVL? 

---

#### 6. Raðtengd LEDs.*
Raðtengdu tvær rauðar LEDs með einu 220 ohm viðnámi og Arduino sem spennugjafa. 

1. Mældu spennufallið a) yfir annarri LED b) yfir báðum LED perunum saman og c) viðnáminu 
1. Hvað getur þú raðtengt mörgum rauðum LED perum? 

---

#### 7. Ohms lögmálið. 

Lestu um [Ohms law](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl#ohms-law-641044-8) `Spenna (V) = Straumur (I) * Viðnám (R)`.<br>

1. Með Arduino (5V) sem aflgjafa og 220 ohm viðnám á brauðbretti í lokaðri raðtengdri rás. Hver er straumurinn? Reiknaðu það út með Ohm`s lögmálinu. Mundu að breyta [mA](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#margfaldarar) í Amp fyrir útreikninga. 
1. Í lokaðri raðtengdri rás með 9V batterí sem aflgjafa með 40mA straum. Hvað ætti viðnámið að vera?

---

#### 8. KLV og Ohm`s lögmálið. 
Horfðu á eftirfarandi [myndband](https://www.youtube.com/watch?v=EQtwsWJuUPs&list=PLRIGIzu0Z7KlfGFD6gd0eMX0ozfJyrQL-&index=6&t=0s).

1. Settu upp raðtengda rás með 5V spennugjafa (Arduino), R1 = 1K og R2 = 220.  
1. Reiknaðu út hvert spennufallið (Voltage drop) er á R1 og R2.
1. Mældu spennufallið á R1 og R2.

---

#### 9. Ohm`s lögmálið í raðtengdri rafrás með viðnámi og LED.*

1. Reiknaðu út strauminn í raðtengdri rás með V=5V, R=220 og rautt LED.  
1. Settu upp rásina og reiknaðu út strauminn útfrá mælingu á spennufallinu á viðnáminu og LED hinsvegar.

<!--
Ef ég er með 2 rauðar led perur, 20Ma straum og 12V batterí, hvert er viðnámið til að tryggja að þær fái sem hæfilegasta birtu? [Mynd](https://youtu.be/H69xDuon7vo?t=82) og _[lausnin](https://youtu.be/H69xDuon7vo?t=156)_
-->

---

#### 10. Viðnámsreiknir útfrá Ohm`s lögmálinu. 
Notaðu [LED Series Resistor Calculator](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-led-series-resistor) til að reikna út viðnám fyrir **bláa** LED mv. 20mA straum og 5V aflgjafa.

---

#### 11. Kraftur. (W) 
Kraftur (power) er mældur í wöttum (W). Pera sem dæmi myndar ljós og hita og er mæld í W. Annað dæmi um mælingu í W eru orkugjafar t.d. batterí. Í rafrás þá er kraftur (vinna yfir tíma) mæling á orkugjafa eða orkutapi í rás í formi t.d hita, ljós eða hreyfingar. Formúlan til að reikna út kraft er `W = V * A`, nánari skýring [myndband](https://www.youtube.com/watch?v=fQGjzxNY_mY&ab_channel=MichelvanBiezen) og [vefgrein](https://www.electronics-tutorials.ws/dccircuits/dcp_2.html).

1. Hvert er orkutapið í wöttum (W) í rás með 5V spennugjafa og 220R? 

---

#### 12. skammhlaup (e. short circuit).
Horfuð á [myndband](https://www.youtube.com/watch?v=RjdyCXmDtb8&ab_channel=KidovatorsbyGyanLab) um skammhlaup. Settu upp lokaða rafrás með LED sem framkvæmir skammhlaup.

---

#### 13. Hliðtengd rás. * 
Í raðtengdri rás er straumurinn alltaf sá sami í allri rásinni en spennan dreifist. Í hliðtengdri rás er spennan sú sama í allri rásinni, en straumurinn er hinsvegar dreifður (mismikill). Nánar um [hliðtengda rás](https://www.youtube.com/watch?v=5uyJezQNSHw&list=PLWv9VM947MKi_7yJ0_FCfzTBXpQU-Qd3K&index=7) 

1. Settu upp á brauðbretti hliðtengda rás sem skiftist í tvær greinar sem hvor inniheldur rauða LED og 220 ohm viðnám. Mældu spennufallið yfir báðu viðnámi og hinsvegar spennufallið yfir LEDs.
1. Settu upp á brauðbretti hliðtengda rás með eitt 220 ohm viðnám í aðalgrein sem svo skiftist í tvær greinar sem hvor inniheldur rauða LED. Mældu spennufallið yfir viðnáminu og báðum LEDs.


---

#### 14. Hliðtengd rás og Ohm`s lögmálið 

Með Arduino sem aflgjafa og hliðtengd rás með tveimur greinum, önnur greinin er með rautt LED og viðnám R1=220, hin greinin er með rautt LED og R2=1K. Hver er straumurinn í greinunum sem inniheldur R1 og R2? Notaðu Ohm`s lögmálið á sitthvoru greinina til að finna það út.

<!--
1. Við viljum hafa 20mA straum fyrir hvora peruna. Hvert ætti viðnámið að vera? _[Lausn](https://youtu.be/H69xDuon7vo?t=474)_
-->

---

#### 15. Hliðtengd rás með LEDs 
Í [myndbandinu sem sýnir LED Matrix](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=412) eru 8 LEDS hliðtengd með 220 ohm viðnám hvert til að allar LEDs gefi frá sér þokkalega birtu og 13,6 mA straum. En hvað þarf spennan og heildarstraumurinn að vera frá orkugjafanum? Sýndu útreikninga.


<!-- 

**Fleiri verkefni**
#### 16. Hliðtengd rás og fjöldi LEDs 
Með 9V batterí. Hvað getum við hliðtengt margar rauðar led perur ef við viljum tryggja að hver þeirra fái 15mA straum? Sýndu útreikninga.

#### 17. Rafrásarteikningar 
Þú vilt hanna og útbúa þína eigin LED jólaseríu sem hefur on/off takka. Teiknaðu hliðtengdarás fyrir þessari útfærslu, sjá [rafrásarteikningar](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#rafr%C3%A1sarteikningar)
-->

---

## Námsmat og skil
Yfirferð og námsmat á sér stað í tímum úr ofangreindum liðum. 

<!--
Eftirfarandi er metið í tíma útfrá verklegum tilraunum og skilningi nemanda:
1. Getur sett upp raðtengda lokaða rás (viðnám, LED) á breadboad.
1. Getur mælt spennu og viðnám með mælir. 
1. Getur nýtt sér KVL lögmálið í raðtengdri rás. 
1. Getur beitt Ohms lögmálinu. 
1. Kann að vinna með mælieiningar og margfaldara td. mA í ohm. 
1. Kann að lesa úr datasheet mikilvægar upplýsingar t.d. um LED. 
1. Kann að reikna og lesa úr litahringjum á viðnámi. 
1. Getur sett upp hliðtengda lokaða rás (viðnám, LEDS og takki) á breadboad. 
1. Þekkir muninn á raðtengdu og hliðtengdri rás m.t.t. straums og spennu. 
1. Getur teiknað einfalda raðtenga- og hliðtengda rás. 
1. Getur reiknað út kraft í wöttum (W=VI). 
-->


