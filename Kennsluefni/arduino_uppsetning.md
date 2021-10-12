# Arduino hugbúnaðurinn

  - [Grunnhugbúnaður](#grunnhugbúnaður)
  - [Auka forritasöfn](#auka-forritasöfn)

## Grunnhugbúnaður

Til að setja kóða á Arduino tölvuna þarf að nota forrit sem þú getur sótt á [Arduiono.cc](https://www.arduino.cc) vefsíðuna.

Farðu inn á þá síðu og veldu Software -> Downloads:

![Arduino Download](../Myndir/arduino_download_1.png)

Þegar þú ert komin(n) á Downloads síðuna veldu þá viðeigandi pakka (flestir ættu að velja þennan efsta):

![Val á pakka](../Myndir/arduino_download_2.png)

Á síðunni sem opnast þá þarf að smella á *Just Download*:
![Just downaload](../Myndir/arduino_download_3.png)

Arduino umhverfið er svo sett upp eins og hvert annað forrit og er óhætt að nota allar sjálfgefnar stillingarnar.

Ræstu nú Arduino forritið og tengdu Arduino tölvuna þína með USB snúrunni við tölvuna.

Þú þarft svo að segja Arudino forritinu í hvaða USB porti Arduino tölvan er tengd. Það gerir þú með því að smella á Tools -> Port og veldu svo það port sem við stendur (Arduino Uno):

![Velja port](../Myndir/arduino_com_port.png)

## Auka forritasöfn

Stundum þarf að setja inn auka forritasöfn (e. library). Hér er dæmi um hvernig *ToneLibrary* safnið er sett inn.

Til að setja það inn ferðu í Tools -> Manage Libraries...:

![Library](../Myndir/arduino_library_1.png)

Þá opnast Library Manager glugginn og þá slærðu inn *tonelibrary* í leitarsvæðið og smellir svo á Install hnappinn:

![Library install](../Myndir/arduino_library_2.png)