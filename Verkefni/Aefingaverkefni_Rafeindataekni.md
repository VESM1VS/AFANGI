## Rafeindatækni 

- Tímaverkefni.
- 0% af heildareinkunn.

<!--
- [Rafeindatækni](https://github.com/VESM1VS/afangi/wiki/Rafeindat%C3%A6kni). 

### Skammhlaup - Nóg að útskýra fyrir bekk, góð pæling sem snúa að hliðtengingum og lóðamistökum 
Horfðu á þetta [myndband](https://www.youtube.com/watch?v=RjdyCXmDtb8&ab_channel=KidovatorsbyGyanLab) um skammhlaup (e. short circuit).
1. Hvernig gætir séð þú hvort það er skammhlaup í rafrásinni þinni?
-->

---

### 1. Raðtengd lokuð rás. 
Settu upp rás með aflgjafa (5V), 1 x 220 ohm viðnám og rautt LED. 

1. Notaðu [fjölsviðsmæli](https://youtu.be/SLkPtmnglOI?t=324) (e. multimeter) og mældu [viðnámið](https://www.instructables.com/Resistors/) sem þú átt. Prófaðu að lesa úr litahringjunum á viðnámi, færðu sömu gildi?
1. Fáðu rautt [LED](https://www.instructables.com/Diodes/) til að loga á [brauðbretti](https://learn.adafruit.com/collins-lab-breadboards-and-perfboards) í [raðtengdri](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/tengingar.jpeg) lokaðri rás. 
1. Prófaðu að færa til viðnámið í rásinni (færðu það hinu megin við LED peruna), breytist eitthvað?
1. Prófaðu að skipta út viðnáminu í rásinni fyrir eitthvað annað viðnám, er einhver munur á birtunni (notaðu 1KΩ og 10KΩ)?

    Rafrásarmynd:

    ![rafrás](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_eitt_led_raf.png)

    <details>
    <summary>Tengimynd:</summary>

    ![tengimynd](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_eitt_led_fzz.png)
    </details>

---

### 2. Raðtengd LEDs. 
Settu upp rás með aflgjafa (5V), 1 x 220 ohm viðnám og **tvær** rauðar LEDs sem eru **raðtengdar**. 

1. Mældu [spennufallið](https://youtu.be/SLkPtmnglOI?t=160) yfir:  
   1. Aðra LED peruna
   2. Báðar LED perurnar
   3. Viðnámið
1. Getur þú bætt við þriðju LED? Hvað gerist? 

    Rafrásarmynd:

    ![rafrás](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_radtenging_raf.png)

    <details>
    <summary>Tengimynd:</summary>

    ![tengimynd](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_radtenging_fzz.png)
    </details>

---

### 3. KVL og Ohms lögmálið. 
Settu upp rás með aflgjafa (5V), 220 ohm viðnám og rautt LED (eins og rásina sem þú settir upp í lið 1). 

1. Lestu um [KVL & Ohms lögmálin](https://learn.adafruit.com/all-about-leds/forward-voltage-and-kvl). 
    - summa spennufalla um lokaða rafrás er alltaf núll.
    - Í raðtengdri rás er straumurinn alltaf sá sami í rásinni en spennan skiptist. 
    - Lögmál Ohms: $V = I * R$ þar sem $V$ er spenna, $I$ straumur og $R$ viðnám. Þetta má svo umrita eftir því hvaða gildi á að reikna:
        
        - $I = \frac{V}{R}$

        - $R = \frac{V}{I}$

1. Upphafsspenna er 5V. Ef spennufall á rauðri LED er 1.8V ([LED datasheet](https://learn.adafruit.com/all-about-leds/the-led-datasheet)) hvert er spennufallið þá hjá viðnáminu?
1. Upphafsspenna er 5V. Hvaða stærð á viðnámi ættum við að nota skv. Ohm`s lögmálinu m.v. að hafa 20mA straum í rásinni. Reiknaðu það út og mundu að breyta milliamp (mA) í Amp fyrir útreikninga, 1mA er 0,001Amp. 


---

### 4. Takki. 
Settu upp rás með aflgjafa (5V), 220 ohm viðnám og rautt LED. 

1. Bættu [takka](https://www.cuidevices.com/blog/tactile-switches-101#how-to-wire-a-tactile-switch) við rásina sem kveikir á LED. 

    <details>
    <summary>Rafrásarmynd:</summary>

    ![rafrás](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_takki_raf.png)
    </details>
    <details>
    <summary>Tengimynd:</summary>

    ![tengimynd](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_takki_fzz.png)
    </details>

---

### 5. Hliðtengd rás.

Í hliðtengdri rás er straumurinn dreifður (skiptist).

1. Settu upp á brauðbretti hliðtengda rás með aflgjafa (5V) sem skiftist í þrjár greinar sem hver inniheldur eina rauða LED og 220 ohm viðnám. Mældu spennufallið yfir viðnámi og LED.
1. Bættu einum takka við rásina sem getur kveikt á öllum þremur ljósunum.

    Rafrásarmynd:

    ![rafrás](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_hlidtenging_raf.png)

    <details>
    <summary>Tengimynd:</summary>

    ![tengimynd](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V1_hlidtenging_fzz.png)
    </details>
