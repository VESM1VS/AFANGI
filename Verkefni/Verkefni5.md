# Tímaverkefni 5

- 35% af heildareinkunn
- Hópverkefni (3 saman)


---

## Verkefnalýsing 

Þið eigið að útbúa [animatronics](https://github.com/VESM1VS/AFANGI/wiki/Mekatr%C3%B3nik#animatronics) fígúru (**hámarkstærð 50x50x50 cm**) sem getur hreyft sig á ýmsan hátt við ákveðna kveikju (trigger), [þrýstiplötu](https://www.instructables.com/Use-a-DIY-Pressure-Plate-Switch-to-Automate-Your-H/) eða [PIR](https://lastminuteengineers.com/pir-sensor-arduino-tutorial/) hreyfiskynjara með [röraútfærslu](https://www.youtube.com/watch?v=aPhuZUS0zrc&ab_channel=Halstaff%27sAnimatronicWorkshop). Notið Arduino fyrir forritun, mótora fyrir hreyfingar og LED lýsingu fyrir augu. Fígúran á einnig að geta tjáð sig t.d. talað eða sungið. Notið [MP3](https://www.dfrobot.com/product-1121.html) spilara, [hátalara](https://thepihut.com/products/stereo-enclosed-speaker-set-3w-4-ohm) og [hljóðupptöku](https://www.audacityteam.org/) til að fá fram réttu áhrifin. Tínið til það efni sem þið þurfið fyrir samsettningu, klæðnað og útlit.

---

### Matsþættir

1. Fígúra á að innihalda samsettar hreyfingar: 
   1. ólínuleg hreyfing á búk og höndum t.d. vagga, upp/niður, fram/aftur (DC motor). **(20%)**
   1. 2 axis eða 3 axis gimbal hreyfing á háls með haus (servos). **(20%)** 
   1. hljóðvinnsla og samhæfing hreyfingu á munn (micro servo) við hljóð **(20%)**
1. Triggerútfærsla (þrýstiplata eða PIR). **(10%)**
1. Forritun á senu (samhæfing á hreyfingum) **(20%)**
1. Útlit (led í augu, klæðnaður osfrv.) á fígúru. **(10%)**

---

### Dæmi um samsettingar og hreyfingar 
Hér er sýnt hvernig hægt er að vinna með PVC rör og einn mótor til að gera búk hreyfingar [Steve Koci](https://youtu.be/mDxZNeLr8nI).

- Snúningur (hægri/vinstri): [Watchman](https://www.spiderhillpropworks.com/Animated-Watchman-Complete-Kit_p_32.html) og [sitjandi](https://www.youtube.com/watch?v=wxkXeRpMUpY&ab_channel=FrightProps)
- Upp og niður: [Ground Breaker](https://www.spiderhillpropworks.com/Animated-Ground-Breaker-Complete-Kit-_p_57.html) 
- Vaggandi: [Animated Swaying Zombie](https://www.spiderhillpropworks.com/Animated-Swaying-Zombie-Basic-Kit-_p_23.html)
- Hring- og vaggandi hreyfing: [Ground Breaker](https://www.youtube.com/watch?v=YJYXlgN1PaU)
- Fram og aftur: [Grave Grabber](http://www.fulcrumsites.com/haunt/html/the_grave_grabber.html)
- Fram og aftur og haus upp/niður: [One Armed Grave Grabber](https://www.youtube.com/watch?v=Ill7k_zleuQ) og [hér](http://www.fulcrumsites.com/haunt/html/the_one-armed_grave_grabber.html) 
- Hliðarhreyfing (liggjandi): [Swaying Zombie](https://www.youtube.com/watch?v=pk85vAiTC9U)
- Hliðarhreyfing (standandi):[Leering Skeleton](https://www.youtube.com/watch?v=Kyi7D8PKBPQ&ab_channel=deoblo85)
- Ruggandi (upp/niður): [Rockin Corpse](https://www.youtube.com/watch?v=x_cv7uOKOZo&ab_channel=deoblo85)
- Ruggandi (fram og aftur) og snúa haus: [The Watcher Prop](https://www.youtube.com/watch?v=M9avbEOjebE&ab_channel=deoblo85)
- Að hræra í pott: [Cauldron creep](https://www.youtube.com/watch?v=4t6pAuB6jDY), [leiðbeiningar](http://devilschariot.blogspot.com/)
- Fram og aftur (skæri): [Zombie clown](https://www.youtube.com/watch?v=Cjkal0K9-PI&ab_channel=deoblo85) , [part 1 ](https://www.youtube.com/watch?v=z1G8xuvyhHk&ab_channel=deoblo85) , [part 2](https://www.youtube.com/watch?v=dj2RxPFyLcM&ab_channel=deoblo85)

<!--
- Flókið: [DIY Legion Prop one motor, 6 movements (linkage og latex)](https://www.youtube.com/watch?v=Bv3bVVeowyg)
- [Shiatsu (nuddtæki) Zombie Halloween Prop Full Build](https://www.youtube.com/watch?v=U79K-0LTPQw&ab_channel=Montclair%27sLair)
- [Omars Haunted Trail](http://omarshauntedtrail.com/Props/props.htm)
-->

---

### Dæmi um verkþætti og skiptingu

1. Búkur 
   1. samsettning og hreyfing á búk og limum með mótor 
   1. forritun á hreyfingu
1. Samsettning og forritun á kveikju (trigger) 
1. Hljðvinnsla (tal, öskur eða söngur) og bakgrunnshljóð.
1. Haus
   1. samsettning a haus og hálsliðum með servos (3 axis haus hreyfing).
   1. munnhreyfing og forritun á tali eða söng útfrá hljóðskrá.
   1. LED í augu (og hreyfing á þeim).
1. Forritun á senu (allt kemur saman).
1. Útlit á fígúru og frágangur (grind, klæðnaður, hendur).
1. Klára skýrslu.


---

## Skýrsla 
Búið til public Github geymslu (repository) og skrifið skýrslu í `readme.md` sem innheldur eftirfarandi: 

1. Tengil á myndband (hýst á youtube) af virkni og notkun. 
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

