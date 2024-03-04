# Stafræn gildi

## Skilgreiningar og lestur/skrift

Stafrænt (e. digital) gildi getur annaðhvort verið 0 eða 1 (eða á/af, kveikt/slökkt). Í ESP þýðir það að 1 er 3.3V en 0 0V.

Til að skilagreina pinna sem stafrænan er notað eftirfarandi `Pin(NR_PINNA, ÚTTAKS_EÐA_INNTAKSPINNI)`, dæmi: 

```python
from machine import Pin
led = Pin(9, Pin.OUT) # úttakspinni
takki = Pin(10, Pin.IN) # inntakspinni
```

Fallið `value()` er svo notað til að lesa eða skrifa á pinnann, dæmi:

```python
led.value(0) # slekkur á pinanum
led.value(1) # kveikir á pinnanum
led.value(-42) # kveikir á pinnanum
led.value(False) # slekkur á pinanum

takki_stada = takki.value() # les hvort takkinn er 0 eða 1
```

## Takkar - Pull up og Pull down

Almennt þegar unnið er með takka þá viljum við að pinnarnir séu með fyrirfram skilgreind gildi þegar ekki er verið að ýta á takkann. Við skilgreinum þá pinnana sem annaðhvort sem `PULL_DOWN` eða `PULL_UP` og tengjum þá eins og á myndinni hér fyrir neðan:

![pullup_pulldown](../myndir/pullup_pulldown.png)

Takki A er tengdur fyrir `PULL_DOWN` en takki B fyrir `PULL_UP`. Í kóðanum er þetta svo skilgreint svona:

```python
from machine import Pin

takki_A = Pin(13, Pin.IN, Pin.PULL_DOWN)
takki_B = Pin(14, Pin.IN, Pin.PULL_UP)
```

Þetta virkar þá þannig þegar ekki er ýtt á takkana:

```python
print(takki_A.value()) # Skrifar út 0
print(takki_B.value()) # Skrifar út 1
```

Síðan þegar ýtt er á takkana:

```python
print(takki_A.value()) # Skrifar út 1
print(takki_B.value()) # Skrifar út 0
```

### Æfingaverkefni

1. Settu upp á brauðbretti eina LED peru (muna eftir viðnáminu) og einn takka (takkinn á að vera tengdur sem `PULL_DOWN`). Forritaðu svo rásina þannig að þegar ýtt er á takkan á að kveikna á LED perunni. 
2. Þegar liður 1 virkar hjá þér skaltu bæta við annarri LED peru og öðrum takka (`PULL_UP` tenging). Forritaðu svo þannig að það er alltaf kveikt á LED perunni nema þegar ýtt er á takkan en þá á að slökkna á perunni.

## Rofar

Í dæmunum hér að ofan þurfti að halda inni takkanum til að fá fram virknina en stundum viljum við geta t.d. ýtt á takka til að kveikja og kveikt sé þar til við ýtum aftur á takkann.

Til að gera þetta þarf að halda utan hvort ljósið á að vera kveikt eða ekki. Þegar svo ýtt er á takkann þá breytum við innihaldi breytunnar sem heldur utan um hvort kveikt er á ljósinu eða ekki. Dæmi:

```python
from machine import Pin

takki = Pin(14, Pin.IN, Pin.PULL_UP)
led = Pin(2, Pin.OUT)

ljos_kveikt = False # Ákveð að ljósið byrji slökkt

while True:
    takki_stada = takki.value() # les takkann
    if takki_stada == 0: # athuga hvort ýtt var (0 útaf PULL_UP)
        ljos_kveikt = not ljos_kveikt # víxla gildinu á bool breytunni
    led.value(ljos_kveikt) # skrifa út á ljósið
```

Settu dæmið hér að ofan upp og prófaðu, hvernig virkar þetta?

### Debounce

Takkinn í dæminu hér að ofan mætti alveg virka betur. Ástæðan fyrir því hversu illa hann virkar er svokallað snertuhopp (e. bounce sjá nánar [hér](https://en.wikipedia.org/wiki/Switch#Contact_bounce)) en það verður þegar tveir málmhlutir snertast.

![bounce](https://upload.wikimedia.org/wikipedia/commons/a/ac/Bouncy_Switch.png)

Einnig á þeim stutta tíma sem líður frá því við ýtum á takkann og þar til við sleppum honum þá keyrir `while True:` lykkjan okkar í nokkur hundruð skipti.

Til að laga þetta þurfum við að bæta kóða við hjá okkur sem útfærir það sem kallast debounce. Einfaldasta útgáfan af því er að vera með breytu sem heldur utan um hver staðan var á takkanum í síðasta skipti sem `while True:` lykkjan okkar keyrði. Dæmi:

```python
from machine import Pin

takki = Pin(14, Pin.IN, Pin.PULL_UP)
led = Pin(2, Pin.OUT)

ljos_kveikt = False
takki_stada_adur = 1 # breytan geymir stöðuna á takkanum í síðustu umferð

while True:
    takki_stada = takki.value()
    # Bætum við að skoða líka stöðuna í síðustu umferð 
    if takki_stada_adur == 1 and takki_stada == 0:
        ljos_kveikt = not ljos_kveikt
    led.value(ljos_kveikt)
    takki_stada_adur = takki_stada # uppfærum stöðuna fyrir næstu umferð
```

Breyttu kóðanum hjá þér og athugað hvort þetta virkar ekki aðeins betur núna. Þetta er samt ekki fullkomin lausn.
