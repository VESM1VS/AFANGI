# Tímaverkefni 5 - Sjálfkeyrandi bíll

- 35% af heildareinkunn
- Hópverkefni (2 saman)

---

## Verkefnalýsing 

Í þessu verkefni eigið þið að gera bíl sem getur keyrt hjálparlaust um ganga skólans. Hann þarf því að geta skynjað hindranir og forðast þær.

---

## Verkþættir

### Grunnkröfur (50%)

1. Samsetning á bíl:
   1. Setjið bílinn saman samkvæmt teikningu.
   1. Lóða víra á mótora.
   1. Lóða "headers" á mótorstýringu.
   1. Lóða 9V rafhlöðutengi við ON/OFF takka.
   1. Lóða víra á 6V rafhlöðubox.
   1. Festið Ultrasonic skynjarann á bílinn.
2. Tengingar:
   1. Tengið alla víra eftir þessari [mynd](https://raw.githubusercontent.com/VESM1VS/AFANGI/main/Myndir/V23_Lokaverkefni_K2_bill.png).
3. Kóðun á grunnvirkni (í kóðanum í þessum lið er hægt að nota "venjulegt" `delay`, þ.e.a.s. það þarf ekki að nota `TDelay`):
   1. Notið þennan [kóða](https://github.com/VESM1VS/AFANGI/blob/main/Kodi/Lokaverkefni_K2_bill_init.ino) sem upphafskóða. 
   2. Bætið við föllunum (e. [function](https://docs.arduino.cc/learn/programming/functions)) `bakka`, `haegri`, `vinstri` og `stoppa`.
      1. Notkun á Ai1, Ai2, Bi1 og Bi2:
          Xi1 | Xi2 | Snúningur mótors
            --- | --- | ---
            HIGH | HIGH | Stopp
            HIGH | LOW | Réttsælis
            LOW | HIGH | Rangsælis
            LOW | LOW | Stopp
       2. Sannreynið virkni fallanna hjá ykkur með því að láta bílinn keyra eftirfarandi á gólfinu:
          1. Keyra áfram á hraðanum 255 í 1 sekúndu.
          1. Keyra áfram á hraðanum 127 í 1 sekúndu.
          1. Stoppa í 1 sekúndu.
          1. Beygja til hægri í 90°.
          1. Stoppa í 1 sekúndu.
          1. Bakka á hraðanum 127 í eina sekúndu.
          1. Stoppa í 1 sekúndu.
          1. Beygja til vinstri í 90°.
          1. Stoppa í 1 sekúndu.
          1. Beygja til hægri í 180°.
          1. Stoppa í 1 sekúndu.
   3. Bætið núna inn árekstrarvörn með Ultrasonic skynjaranum. Árekstrarvörnin á að virka þannig að ef bíllinn skynjar eitthvað í minna en 50 cm. fjarlægð á hann að stoppa og beygja svo í 90° annaðhvort til hægri eða vinstri. Bíllinn velur hvort hann fer til hægri eða vinstri með slembifalli (e. random), sjá kóðadæmi [hér](https://www.arduino.cc/reference/en/language/functions/random-numbers/random/).

### Aukakröfur (40%)

1. (15%) Betri árekstrarvörn. Þegar bíllinn skynjar eitthvað innan 50 cm. fjarlægðar gerir hann eftirfarandi:
   1. Stoppar.
   2. Snýr sér 90° til vinstri og stoppar.
   3. Mælir fjarlægð í næstu hindrun og geymir í breytu.
   4. Snýr sér 180° til hægri og stoppar.
   5. Mælir fjarlægð í næstu hindrun og geymir í breytu.
   6. Ef fjarlægðirnar sem hann mældi eru báðar minni en 50 cm. þá beygir hann í 90° til hægri og keyrir svo áfram.
   7. Annars ef önnur eða báðar fjarlægðirnar sem hann mældi eru stærri en 50 cm. þá á hann að snúa sér í þá átt þar sem fjarlægðin er meiri. 
2. (5%) Stefnuljós og lögguljós:
   1. Stefnuljós, vinstri og hægri. Þegar bíllinn beygir kviknar ljós sem sýnir í hvaða átt hann er að beygja. Ljósin slokkna þegar bíllin keyrir áfram, er stopp eða bakkar.
   1. Lögguljós. Þegar bíllinn keyrir áfram blikka rautt og blátt ljós (krefst notkunar á `TDelay`). Bæði ljósin slokkna þegar bíllinn beygir, stoppar eða bakkar.
3. (20%) Annað sem ykkur dettur í hug í samráði við kennara.

---

## Skýrsla (10%)
Búið til public Github geymslu (repository) og skrifið skýrslu í `readme.md` sem innheldur eftirfarandi, leiðbeiningar fyrir markdown finnið þið [hér](https://github.com/VESM1VS/AFANGI/blob/main/Kennsluefni/skyrslugerd.md): 

1. Stutt myndband af virkni og notkun. 
2. Stutt lýsing, efni notað, höfundar og heimildir.
3. Ljósmyndir af bílnum á ýmsum stigum smíðaferlisins.
4. Kóði.

--- 

## Matsþættir

1. Samsetning á bíl og lóðun (10%)
2. Grunnvirkni (40%)
3. Aukahlutir (40%) 
4. Skýrsla (10%)

---

## Námsmat og skil
Einkunn byggir á útfærslum á ofangreindum matsþáttum og vinnuframlagi sem á sér stað í kennslustund.

Fyrir hverja kennslulotu (2 klst) í skóla sem nemandi mætir ekki, dregst **0.5** frá einkunn hjá viðkomandi.

- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.
- Skilið á Innu slóð á github geymslu sem innheldur skýrslu.
