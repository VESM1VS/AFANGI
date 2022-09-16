## Tímaverkefni 3

- 35% af heildareinkunn.
- einstaklingsverkefni

---

## Simon Says

Í þessu verkefni ætlar þú að smíða frá grunni, spilið [Simon Says](https://en.wikipedia.org/wiki/Simon_(game)), sjá dæmi um spilun [hér](https://youtu.be/1Yqj76Q4jJ4). Þegar þú hefur lokið við verkefnið ættir þú að hafa fullbúið spil í höndunum sem er tilbúið að fara í verslanir.


---

### Verkáætlun

1. Settu [Arduino IDE](https://github.com/VESM1VS/Efni/blob/main/Kennsluefni/arduino_uppsetning.md) upp á tölvuna þína og settu upp *ToneLibrary* safnið.
1. Test: Prófaðu að kveikja á LED með [Arduino forritun](https://github.com/VESM1VS/AFANGI/blob/main/Verkefni/ArduinoForritun.md).
1. Settu upp Simon Says [kóðann](https://github.com/VESM1VS/Efni/blob/main/Kodi/simon.ino) fyrir verkefnið 
1. Setja upp á brauðbretti (frumgerð), sjá rafrásarteikningu ![mynd](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/simonFrumtengimynd.PNG)
   1. tengdu **passive** [piezo buzzer](https://www.youtube.com/watch?v=AQIayZgeqq4) og gerðu prófun á hljóði. <!-- active er með svart tape á botni-->
   1. bættu við LED og takka og gerðu prófun á honum.
   1. kláraðu uppsetninguna og prófaðu spilun.
1. Búðu til veroborð og lóðaðu, gerðu þetta í skrefum einsog á brauðbretti (gera regluleg prófun). <!-- Ath. LED eru með innbyggt viðnám. -->
1. Útfærðu [rocker switch button](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/rockerswitch.jpg)  <!-- og festu [skó](https://cdn.sparkfun.com/assets/learn_tutorials/4/1/JST_CrimpChart__English_.pdf) á víra. -->
1. Samsetning og frágangur.
1. Kláraðu skýrsluna.

<!-- teikna rafrásina brenna, á kassann, + merkja tengin -->

---

### Rafrásarteikning

![Rafrásarteikning](https://github.com/VESM1VS/AFANGI/blob/main/Myndir/simonsays_rafras.png)

---

## Skýrsla

Búðu til public Github geymslu (repository) með heitinu SimonSays og skrifaðu skýrsluna í `readme.md` með [markdown](https://www.markdownguide.org/cheat-sheet/) <br>
Skýrslan þarf að innihalda eftirfarandi:

1. Stutt verkefnalýsing, höfundur.
1. Tengil á myndband af virkni (spilun) lokafurðar.
1. Ljósmyndir af lokaafurð (inní kassa og utan)
1. Ljósmyndir af lóðun (báðar hliðar).
1. Hönnunarteikning (.svg) af kassa.
1. Ljósmynd af samsetningu frumgerðar (brauðbretti, takkar, vírar o.s.frv.).
<!-- 1. Tengil á myndband (t.d. youtube) af virkni frumgerðar (án lóðun). -->

---

## Námsmat og skil
Yfirferð og námsmat á sér stað í tíma. <br>
Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er að hluta til kominn eða ófullnægjandi og ekkert ef hann vantar.

1. 10% Kóðavirkni og samsettning á brauðbretti (frumgerð).
1. 25% Lóðun á veroborði.
1. 15% Víratengingar íhluta við veroborð og Arduino (crimp töng, splæasa saman, lengdir á vírum og frágangur).
1. 30% Hönnunarútfærsla á rafrás (rýmisnýting) og virkni (hægt að spila).
1. 10% Samsetning á boxi.
1. 10% Skýrsla.

Skilaðu á Innu tengil á skýrsluna (Github repository).

<!--
   1. Header er tengdur frá veroborð í Arduino
   2. Vírar eru tengdir frá veroborð í Arduino (GND og Data pinnar) 
   3. GND og datapinni 12 (hátalari) eru tengdir frá veroobrði í Arduino 
-->
