from machine import Pin
from random import randint  # til að geta unnið með random

led1 = Pin(2, Pin.OUT)
led2 = Pin(16, Pin.OUT) 
led3 = Pin(17, Pin.OUT) 

pins = [led1, led2, led3]	# notum lista til að halda utan um mörg gildi.

randomLed = randint(0, 2)   # random skilar gildinu 0, 1 eða 2.
print(randomLed)            # skrifum random gildið í Shell.
pins[randomLed].value(1)    # Skrifum 3.3V út á pinna 2, 16 eða 17.

while True:
    pass	# gerir ekkert

# ath. þú þarf að útfæra betri lausn þannig að aðeins eitt led logi í einu.
