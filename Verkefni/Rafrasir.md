# Verklegar tilraunir

### Brauðbretti og Led pera.
- Fáðu LED peru til að loga á brauðbretti með einu 220 ohm viðnámi. 

algeng mistök:
* Ekkert ljós
    - LED pera snýr vitlaust
    - Sambandsleysi, vírar með haus, brotnir að innan.
    - Ekki lokuð rás.
* LED springur
    - Viðnám vantar
    - Short Circuit, LED pera er tengd í sömu röðina + og -

---

### LEDs, viðnám, Ohms, KLV.
Fylgdu [Adafruit tutorial: All About LEDs](https://learn.adafruit.com/all-about-leds/overview)

---

### Raðtengd rás
Settu upp verklega, teiknaðu rásina, reiknaðu og mældu svo til staðfestingar.

1. aflgjafi og 1 x viðnám.
   1. V=5V og I=20mA, hvert er viðnámið (R) stórt?
   1. V=5V, R=330 ohms, hver er straumurinn (I)?
   1. I=20mA og R=220 ohms, hver spennan (V)?
1. V=9V, R1=10ohm, R2=20ohm. I=300mA. Hver er spennufall (Voltage drop) á R1 og R2? [Sjá skýringarmyndband](https://www.youtube.com/watch?v=EQtwsWJuUPs&list=PLRIGIzu0Z7KlfGFD6gd0eMX0ozfJyrQL-&index=6&t=0s)
1. V=5V, R=1K, 1xled. Hver er straumurinn (I)? [myndband (að enda)](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=404)
1. V=5V, I=20mA og 1xled.
   1. Hver er spennufallið (voltage drop) á rauðri led peru og viðnáminu? (sjá KvL lögmál og datasheet fyrir LED).
   1. Reiknaðu út viðnámið í rásinni. 
1. Hvað get ég raðtengt margar rauðar leds perur m.v. 9V batterí og eitt 220R viðnám, hver er straumurinn? Hvað ef ég nota bláar perur, einhver munur? 
1. Ef ég er með 2 rauðar led perur, 20Ma straum og 12V batterí, hvert er viðnámið til að tryggja að þær fái sem hæfilegasta birtu? [Mynd](https://youtu.be/H69xDuon7vo?t=82)
    og _[lausnin](https://youtu.be/H69xDuon7vo?t=156)_
1. aflgjafi + 1 x viðnám + led + takki. Veldu eigin gildi.

---

### Hliðtengd rás
Settu upp verklega, teiknaðu rásina, reiknaðu og mældu svo til staðfestingar.

1. Við erum með hliðtengda rás með 5V batterí, eitt viðnám í aðalgrein sem splittar svo í 2 greinar með rautt led. Við viljum hafa 20mA straum fyrir hvora peruna. [Mynd](https://youtu.be/H69xDuon7vo). Hvert ætti viðnánmið að vera? _[Lausn](https://youtu.be/H69xDuon7vo?t=474)_
1. Með 9V batterí. Hvað getum við hliðtengt margar led perur? ef við viljum tryggja að hver þeirra fái 20mA straum, hvert ætti viðnámið að vera?
1. Við erum með viðnám + led í sittvoru grein. Hver er straumurinn sem hvor peran fær? [myndband (að hliðtengingu)](https://youtu.be/G4lIo-MRSiY?list=PLJse9iV6Reqgy8sdjBwKDwihQdbSxbcNg&t=404).
1. Við viljum búa til jólaseríu sem er hliðtengd rás með 8 led perur. Hver led pera þarf 20mA straum, hvert ætti viðnámin að vera stór og hvað þurfum við stórt batterí? 

---

### Flóknarar: Samsett, raðtengd + hliðtengd rás
- [myndband](https://www.khanacademy.org/science/in-in-class10th-physics/in-in-electricity/in-in-solving-a-circuit-with-series-and-parallel-resistors/v/solved-example-finding-current-voltage-in-a-circuit)
