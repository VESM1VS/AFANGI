from machine import Pin      # Notum Pin úr machine kóðasafninu til að skilgreina pinnana á ESP. 
from time import sleep_ms    # Notum svo sleep_ms til að láta forritið bíða

# Stafrænt (e. digital) gildi getur annaðhvort verið 0 eða 1 (eða á/af, kveikt/slökkt). Í ESP þýðir það að 1 er 3.3V en 0 0V.
# Til að skilagreina pinna sem stafrænan er notað eftirfarandi Pin(NR_PINNA, ÚTTAKS_EÐA_INNTAKSPINNI)

# Búum til breytuna led og tengjum hana við pinna 2 á ESP. Segjum að pinninn sé úttakspinni
led = Pin(2, Pin.OUT)     # Pinni 2 er tengdur við led peru sem er innbyggð í ESP

# Gerum lykkju sem keyrir að eilífu
while True:
    led.value(1)        # Skrifum 3.3V út á pinna 2
    sleep_ms(500)       # Bíðum í 500 millisekúndur
    led.value(0)        # Skrifum 0V út á pinna 2
    sleep_ms(500)       # Bíðum aftur í 500 millisekúndur

"""
Fallið value() er notað til að lesa eða skrifa á pinnann. Dæmi:
    led.value(0) 		# slekkur á pinnanum
    led.value(1) 		# kveikir á pinnanum
    led.value(-42) 		# kveikir á pinnanum
    led.value(False) 	# slekkur á pinnanum
    
    stada = led.value() # les hvort ledstaða er 0 eða 1, les þegar sviginn er tómur.
"""
