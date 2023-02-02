### MP3 spilari

- [Kóðadæmi](../Kodi/DFPlayer_Demo2.ino)

:warning: Muna að aftengja RX pinna á MP3 spilara meðan kóða er hlaðið upp (e. upload) á Arduino.

---

### Ultrasonic fjarlægðarmælir

Til að ákveða hvenær hreyfingarnar eiga að byrja má nota [HC-SR04 Ultrasonic](https://lastminuteengineers.com/arduino-sr04-ultrasonic-sensor-tutorial/) fjarlægðarskynjarann.

Sýnikóði er [hér](../Kodi/ultrasonic.ino).

---


### TDelay 

Kóðasafnið fyrir TDelay má finna [hér (zip skrá)](https://github.com/VESM1VS/AFANGI/raw/main/Kodi/tdelay.zip). <br>
Sett inn á Arduino IDE með því að fara í *Sketch->Include Library->Add .ZIP Library...*

- [Einn Servo mótor - (0°-90°-180°-90°-0°)](https://wokwi.com/projects/349789993741320787)
- [Einn Servo mótor - 0° til 180° til 0° (sweep)](https://wokwi.com/projects/349792066153218642)
- [Tveir Servo mótorar - sweep á misjöfnum hraða](https://wokwi.com/projects/349794862688633427)
- [Servo, Sonic og LED, Servo og LED stjórnast með Sonic](https://wokwi.com/projects/349337061426201170)

---

### DC mótor og L298N DC Motor Driver

[kóði](../Kodi/einn_dc_l298n.ino) 

---

### Samsett dæmi

Hér er dæmi um hvernig má púsla öllum íhlutunum saman og [forrita](../Kodi/samsett_daemi.ino). Athugið að ef þið þurfið fleiri pinna, að ekki er ráðlegt að nota pinna `0` og `1` á Arduino en það er hægt að nota *Analog* pinnana `AX` þar sem X er 0 til og með 5. Þá er hægt að nota alveg eins og hina pinnana, dæmi: `const int LED3 = A0;` og svo í *setup* fallinu `pinMode(LED3, OUTPUT);`.

:warning: Muna að aftengja RX pinna á MP3 spilara meðan kóða er hlaðið upp (e. upload) á Arduino. 

![Samsett dæmi](./Lokaverkefni_demoverkefni.png)

