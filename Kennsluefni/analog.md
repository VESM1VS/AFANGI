# Hliðræn gildi

Stafrænt merki bera upplýsingar eða gögn á tvíundarformi í formi bita (0 og 1). Stafrænt merki hefur endanlegt gildissvið og er ónæmara fyrir truflunum (noise). 

Hliðrænt merki (analog signal) er eins konar samfellt bylgjuform sem breytist með tímanum. Hliðrænu merki er lýst með; sveifluhæð, tíðni og bylgjulengd. Dæmi um einfalt hliðrænt merki er sinusbylgjan. Hliðrænt merki er næmara fyrir truflunum og getur haft óendanlegt gildissvið. 

Hér er [myndband](https://youtu.be/WxJKXGugfh8?t=29) sem skýrir muninn á analog og digital merki.


![AnalogSignal](https://github.com/VESM2VT/Efni/blob/main/Myndir/AnalogSignal.png)  ![DigitalSignal](https://github.com/VESM2VT/Efni/blob/main/Myndir/DigitalSignal.png)

---

## Skynjarar

Hliðræn vinnsla merkja byggist á eðlisfræðilegum eiginleikum íhlutanna í tækinu, sér í lagi samhengi spennu og straums. Með þeim hætti þróuðust tækjaeiningar eins og; síur, magnarar, skynjarar og mótarar.

Hliðrænt merki er fólgið í breytilegri spennu og straumi, er sveiflast sem eftirmynd þess sem kemur frá uppsprettunni. Spennusveifla frá hljóðnema hermir eftir loftsveiflum hljóðsins, svo dæmi sé tekið. <br>

Hér er grein sem fjallar nánar um [analog og digital skynjara](https://iot4beginners.com/analog-sensors-vs-digital-sensors/)

---

## Stafræn- og hliðræn merkjavinnsla (ADC og DAC)

Hliðrænt merki sem tekur samfelldum breytingum rennir sér í gegn um óendanlega mörg mæligildi. Augljóslega er ekki vinnandi vegur að skrá þau öll. Því hraðari sem breytingarnar á hliðræna merkinu eru, því styttra þarf að líða á milli þess að sýni séu tekin. Sýnataka et gerð með jöfnu millibili, öllum gildum merkisins þar á milli er fleygt. <br>

![Merkjavinnsla](https://github.com/VESM2VT/Efni/blob/main/Myndir/DSPmerkjavinnsla.png)

**ADC** (analog digital converter) breytir hliðrænu merki í stafrænt. Stafræna merkið
er talnaruna, skrá yfir hæfilega þétt tekin gildi hliðræna merkisins. 

**DAC** (digital analog converter) breytir stafrænu merki í hliðrænt. Merkið verður þá
aftur hliðrun í spennu og straumi. 

## Unnið með hliðræn gildi í ESP32

### Skrifað á pinna

ESP32 notar það sem heitir púlsbreiddarmótun (e. pulse width modulation (PWM), sjá nánar [hér](https://en.wikipedia.org/wiki/Pulse-width_modulation)) til að búa til hliðræn merki. 

Merkið sem PWM getur gefið út er með styrkinn frá 0V og til 3.3V, **0V er 0 og 3.3V er 1023**. Og er það stillt í kóðanum með því að breyta því sem heitir [duty cycle](https://en.wikipedia.org/wiki/Pulse-width_modulation#Duty_cycle) sem er á bilinu 0 til og með 1023. Pinni sem á að skrifa út hliðrænt merki er skilgreindur með `PWM(Pin(PINNINN_SEM_A_AD_NOTA), TIDNIN_A_PWM)`. Dæmi:

```python
from machine import Pin, PWM

pwm = PWM(Pin(47), 10000) # Í þessum áfanga getum við alltaf haft tíðnina 10000

# fallið duty notað til að stilla styrkinn á merkinu
pwm.duty(0) # skrifar út 0V
pwm.duty(511) # skrifar út 1.65V
pwm.duty(1023) # skrifar út 3.3V
```

#### Verkefni - Andandi LED

Tengdu eina LED peru við ESP (muna eftir viðnáminu) og forritaðu hana svo þannig að birtan smá aukist þar til fullum styrk (1023) er náð og þá á birtan að minnka þar ljósið slokknar (0). Þetta á svo að endurtaka sig í sífellu. ATH. leystu þetta með því að nota aðeins eina lykkju (`while True:` lykkjuna). Hafðu smá `sleep` í lykkjunni (1 eða 2 millisekúndur).

Til umhugsunar: Hvað gerist ef meira en 1023 eða minna en 0 er skrifað á PWM pinna?

### Lesið frá pinna

ESP32-S3 er með 18 pinna sem getið **lesið** hliðræn (e. analog) gildi inn. Þessum pinnum er skipt í tvo hópa ADC1 og ADC2. ADC stendur fyrir **A**nalog-**D**igital-**C**onverter. Sjálfgefið eru pinnarnir stilltir á 12 bita nákvæmni þannig að gildin sem lesin eru geta verið **frá 0 til og með 4095**, þar sem 0 er 0V og 4095 er 3,3V miðað við 11dB mögnun en þegar ADC pinni er skilgreindur þarf alltaf að taka fram hvaða mögnun á að nota.

Pinnarnir í ADC1 eru pinnar **1** til og með **10** en pinnarnir í ADC2 eru pinnar **11** til og með **18**.

:warning: **Pinnana í ADC2 er ekki hægt að nota þegar WIFI er virkt á ESP32-S3.** :warning:

Til að skilgreina pinna sem hliðrænan inngang og lesa frá honum má gera eftirfarandi:

```python
from machine import Pin, ADC

# pinni 1 skilgreindur sem hliðrænn inntakspinni með 11dB mögnun.
pinni = ADC(Pin(1), atten=ADC.ATTN_11DB)

# sjálfgefið eru ADC 12 bita og gefa því gildi á bilinu 0 til og með 4095
gildi = pinni.read()
```

#### Verkefni I - Ljósmagni stjórnað með stilliviðnámi

Settu upp þessa [rás](../myndir/pwm_adc_stillivinam_led.png) og  forritaðu þannig að stilliviðnámið stjórni birtumagninu á LED perunni. 

:exclamation: Gildið sem þú lest frá stilliviðnáminu er frá 0 til og með 4095 en gildin sem þú skrifar á LED peruna verða að vera frá 0 til og með 1023.  
