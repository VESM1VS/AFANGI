## Tímaverkefni 3 
- 10% af heildareinkunn áfanga.
- einstaklingsverkefni.

### Verkefnalýsing
Verklegar tilraunir í kennslustund með hliðtengdar rásir og útreikningum. <br>

---

#### 1. skammhlaup (e. short circuit)
Horfuð á [myndband](https://www.youtube.com/watch?v=RjdyCXmDtb8&ab_channel=KidovatorsbyGyanLab) um skammhlaup.

1. Settu upp lokaða rafrás með LED sem framkvæmir skammhlaup.

---

#### 2. Hliðtengd rás 
Í raðtengdri rás er straumurinn alltaf sá sami í allri rásinni en spennan dreifist. <br>
Í hliðtengdri rás er spennan sú sama í allri rásinni, en straumurinn er hinsvegar dreifður (mismikill). <br>
Nánar um [hliðtengda rás](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#hli%C3%B0tengd-r%C3%A1s) 

1. Settu upp hliðtengda rás með eitt 220 ohm viðnám í aðalgrein sem svo skiftist í tvær greinar með sitthvora rauða LED. Mældu spennufallið yfir viðnáminu og báðum LEDs.
1. Settu upp hliðtengda rás sem skiftist í tvær greinar með sitthvora rauða LED og 220 ohm viðnám. Mældu spennufallið yfir báðu viðnámi og LEDs.

---

#### 3. Hliðtengd rás og Ohm`s lögmálið

1. Með Arduino sem aflgjafa, settu upp hliðtengda rás með tveimur greinum sem innihalda LED og sitthvort viðnámið R1=220 og R2=1K.  
1. Hver er straumurinn í greininni sem innihledur R1 og R2? Notaðu Ohm`s lögmálið pr. grein til að finna það út.

<!--
1. Við viljum hafa 20mA straum fyrir hvora peruna. Hvert ætti viðnánmið að vera? _[Lausn](https://youtu.be/H69xDuon7vo?t=474)_
1. Núna ætlum við að vera með viðnám + led í sittvoru grein. Hver er straumurinn sem hvor peran fær? [myndband (að hliðtengingu)](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=404).
-->

---

#### 4. Hliðtengd rás með LEDs
1. Í [myndbandinu sem sýnir LED Matrix](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=412) eru 8 LEDS hliðtengd með 220 ohm viðnám hvert til að allar LEDs gefi frá sér þokkalega birtu og 13,6 mA straum. En hvað þarf spennan að vera frá orkugjafanum? Notaðu [Paralell reiknivél](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-parallel-and-series-resistor) til að finna út heildarviðnámið í rásinni.

---

#### 5. Hliðtengd rás og fjöldi LEDs 
Með 9V batterí. Hvað getum við hliðtengt margar led perur? ef við viljum tryggja að hver þeirra fái 15mA straum?

---

#### 6. Rafrásarteikningar

Teiknaðu hliðtengda rás sem inniheldur LED, viðnám, takka og aflgjafa, sjá [rafrásarteikningar](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni#rafr%C3%A1sarteikningar)

---

#### 7. Kraftur (W)
Kraftur (power) er mældur í wöttum (W). Pera sem dæmi myndar ljós og hita og er mæld í W. Annað dæmi um mælingu í W eru orkugjafar t.d. batterí. Í rafrás þá er kraftur (vinna yfir tíma) mæling á orkugjafa eða orkutapi í rás í formi t.d hita, ljós eða hreyfingar. Formúlan til að reikna út kraft er `W = V * A`. <br>
fyrir nánari skýringu; [myndband](https://www.youtube.com/watch?v=fQGjzxNY_mY&ab_channel=MichelvanBiezen) og  [vefgrein](https://www.electronics-tutorials.ws/dccircuits/dcp_2.html).

1. Hvert er orkutapið í wöttum (W) og í hvað formi er orkutapið í rás með 5V spennugjafa og 220R? 

---

## Námsmat og skil

- Skilaðu á Innu svör við spurningum.
- Yfirferð og námsmat á sér stað í tíma. 
- Fyrir hvern lið; Fullt fyrir fullnægjandi lausn/skilning, ekkert ef lausn/skilningur er ábótavant eða vantar. <br>

Eftirfarandi er metið í tíma útfrá verklegum tilraunum og skilningi nemanda:


1. Getur sett upp hliðtengda lokaða rás (viðnám, LEDS og takki) á breadboad. (30%)
1. Þekkir muninn á raðtengdu og hliðtengdri rás m.t.t. straums og spennu. (30%)
1. Getur teiknað einfalda raðtenga- og hliðtengda rás. (30%)
1. Getur reiknað út kraft í wöttum (W=VI). (10%)

<!--
#### 1. Breytiviðnám til að stilla birtustig
Kláraðu All About LEDs frá [Revisiting Resistors](https://learn.adafruit.com/all-about-leds/revisiting-resistors) um vensl straums og spennu.
1. Svaraðu spurningunum.
-->
