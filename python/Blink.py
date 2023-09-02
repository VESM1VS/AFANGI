# Notum Pin úr machine kóðasafninu til að skilgreina pinnana á ESP. 
from machine import Pin
# Notum svo sleep_ms til að láta forritið bíða
from time import sleep_ms

# Búum til breytuna led og tengjum hana við pinna 2 á ESP. Segjum að pinninn sé úttakspinni
# Pinni 2 er tengdur við led peru sem er innbyggð í ESP
led = Pin(2, Pin.OUT)

# Gerum lykkju sem keyrir að eilífu
while True:
    # Skrifum 3.3V út á pinna 2
    led.value(1)
    # Bíðum í 500 millisekúndur
    sleep_ms(500)
    # Skrifum 0V út á pinna 2
    led.value(0)
    # Bíðum aftur í 500 millisekúndur
    sleep_ms(500)

"""
Fallið value() er notað til að lesa eða skrifa á pinnann. Dæmi:
    led.value(0) 		# slekkur á pinnanum
    led.value(1) 		# kveikir á pinnanum
    led.value(-42) 		# kveikir á pinnanum
    led.value(False) 	# slekkur á pinnanum
    
    stada = led.value() # les hvort ledstaða er 0 eða 1, les þegar sviginn er tómur.
"""
