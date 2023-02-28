# Tímaverkefni 5 

- 35% af heildareinkunn
- Hópverkefni (4 saman)

---

## Verkefnalýsing 

Þið eigið að útbúa [animatronics](https://github.com/VESM1VS/AFANGI/wiki/Mekatr%C3%B3nik#animatronics) fígúru (**hámarkstærð 50x50x50 cm**) sem getur hreyft sig á ýmsan hátt. Notið Arduino fyrir forritun, DC og Servo mótora fyrir hreyfingar og LED lýsingu fyrir augu. Tínið til það efni sem þið þurfið fyrir samsettningu, klæðnað og útlit.<br>
Til að ákveða hvenær hreyfingarnar eiga að byrja þá má nota [þrýstiplötu](https://www.instructables.com/Use-a-DIY-Pressure-Plate-Switch-to-Automate-Your-H/) eða [HC-SR04 Ultrasonic](https://lastminuteengineers.com/arduino-sr04-ultrasonic-sensor-tutorial/) fjarlægðarskynjarann.<br>
Fígúran á að geta tjáð sig t.d. talað eða sungið. Notið [MP3](https://www.dfrobot.com/product-1121.html) spilara, [hátalara](https://thepihut.com/products/stereo-enclosed-speaker-set-3w-4-ohm) og hljóðskrá eða [hljóðupptöku](https://www.audacityteam.org/) til að fá fram réttu áhrifin. 

Sjá [leiðbeiningar](../Kennsluefni/forritun_lokaverkefni.md) fyrir að forrita senu (samsett dæmi) með Arduino, LEDs, MP3 spilara og hátalara, Ultrasonic fjarlægðamælir, mótor driver með DC mótor og Servo mótora.

<!--
[PIR](https://lastminuteengineers.com/pir-sensor-arduino-tutorial/) hreyfiskynjara með [röraútfærslu](https://www.youtube.com/watch?v=aPhuZUS0zrc&ab_channel=Halstaff%27sAnimatronicWorkshop).
-->

---

### Matsþættir

1. Fígúra á að innihalda samsettar hreyfingar: 
   1. ólínuleg hreyfing á búk og höndum t.d. vagga, upp/niður, fram/aftur (DC motor). **(25%)**
   1. hljóðvinnsla og samhæfing hreyfingu á munn (micro servo) við hljóð **(25%)**
1. Útlit; led í augu, hendur, rifbein/fyllingar og klæðnaður á fígúru. **(15%)**
1. Triggerútfærsla (þrýstiplata eða fjarlægðaskynjari). **(10%)**
1. Forritun á senu (samhæfing) **(25%)**
1. _Valkvæmt (ef tími gefst til): 1-3 axis gimbal hreyfing á háls með haus, höndum eða olnboga (servos)._ 

<!--
grunnkrafa: 80%
aukakrafa: 20% - 1-3 axis gimbal hreyfing á háls með haus, höndum eða olnboga (servos).
-->

---

### Dæmi um samsettingar og hreyfingar:

Dæmi um [útfærslur](https://github.com/TskoliV5) frá nemendum á Tölvubraut frá fyrri önnum.
<br>

Hér er sýnt hvernig hægt er að vinna með PVC rör og einn mótor til að gera búk hreyfingar:

- Samantekt hjá [Steve Koci](https://youtu.be/mDxZNeLr8nI).
- Snúningur (hægri/vinstri): [Watchman](https://www.spiderhillpropworks.com/Animated-Watchman-Complete-Kit_p_32.html) og [sitjandi](https://www.youtube.com/watch?v=wxkXeRpMUpY&ab_channel=FrightProps)
- Upp og niður: [Ground Breaker](https://www.spiderhillpropworks.com/Animated-Ground-Breaker-Complete-Kit-_p_57.html) 
- Vaggandi: [Animated Swaying Zombie](https://www.spiderhillpropworks.com/Animated-Swaying-Zombie-Basic-Kit-_p_23.html)
- Hring- og vaggandi hreyfing: [Ground Breaker](https://www.youtube.com/watch?v=YJYXlgN1PaU)
- Fram og aftur: [Grave Grabber](http://www.fulcrumsites.com/haunt/html/the_grave_grabber.html)
- Fram og aftur og haus upp/niður: [One Armed Grave Grabber](https://www.youtube.com/watch?v=Ill7k_zleuQ) og [hér](http://www.fulcrumsites.com/haunt/html/the_one-armed_grave_grabber.html) 
- Hliðarhreyfing (liggjandi): [Swaying Zombie](https://www.youtube.com/watch?v=pk85vAiTC9U)
- Ruggandi (upp/niður): [Rockin Corpse](https://www.youtube.com/watch?v=x_cv7uOKOZo&ab_channel=deoblo85)
- Ruggandi (fram og aftur) og snúa haus: [The Watcher Prop](https://www.youtube.com/watch?v=M9avbEOjebE&ab_channel=deoblo85)
- Að hræra í pott: [Cauldron creep](https://www.youtube.com/watch?v=4t6pAuB6jDY), [leiðbeiningar](http://devilschariot.blogspot.com/)

<!--
- _Fram og aftur (skæri): [Zombie clown](https://www.youtube.com/watch?v=Cjkal0K9-PI&ab_channel=deoblo85) , [part 1 ](https://www.youtube.com/watch?v=z1G8xuvyhHk&ab_channel=deoblo85) , [part 2](https://www.youtube.com/watch?v=dj2RxPFyLcM&ab_channel=deoblo85)_
- Flókið: [DIY Legion Prop one motor, 6 movements (linkage og latex)](https://www.youtube.com/watch?v=Bv3bVVeowyg)
- [Shiatsu (nuddtæki) Zombie Halloween Prop Full Build](https://www.youtube.com/watch?v=U79K-0LTPQw&ab_channel=Montclair%27sLair)
- [Omars Haunted Trail](http://omarshauntedtrail.com/Props/props.htm)
- Hliðarhreyfing (standandi):[Leering Skeleton](https://www.youtube.com/watch?v=Kyi7D8PKBPQ&ab_channel=deoblo85)

-->

---

### Dæmi um verkþætti:

1. Búkur 
   1. samsettning og hreyfing á búk með DC mótor 
   1. forritun á búkhreyfingu
2. Haus 
   1. Setja LED í augun.
   1. Hreyfing á kjálka (nota servo tester)
   1. Hljóðvinnsla (tal, öskur eða söngur).
   1. Forritun munnhreyfingar útfrá hljóðskrá.
3. Forritun á kveikju (trigger) 
4. Samsettning og útlit á fígúru (grind, klæðnaður, hendur).
5. Forritun á senu (allt kemur saman).
6. Gera skýrslu.
 

---

## Skýrsla 
Búið til public Github geymslu (repository) og skrifið skýrslu í `readme.md` sem innheldur eftirfarandi: 

1. Stutt myndband af virkni og notkun. 
1. Stutt lýsing, efni notað ásamt mælingum, höfundar og heimildir.
1. Ljósmyndir af mekaník, samsettningu og fígúru.
1. Kóði.

--- 

## Námsmat og skil
Einkunn byggir á útfærslum á ofangreindum matsþáttum og vinnuframlagi sem á sér stað í kennslustund.<br>
Fyrir hverja kennslulotu (2 klst) í skóla sem nemandi mætir ekki, dregst **0.5** frá einkunn hjá viðkomandi.

- Yfirferð og námsmat á sér stað í tíma.
- Gefið er fullt fyrir hvern lið sem er fullnægjandi, hálft ef hann er ábótavant og ekkert ef hann vantar.
- Skilið slóð á github geymslu sem innheldur skýrslu á Innu.

