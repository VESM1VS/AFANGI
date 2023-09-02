from machine import Pin
from random import randint

led1 = Pin(2, Pin.OUT) # Pinni 1 er tengdur við led peru 
led2 = Pin(16, Pin.OUT) # Pinni 2 er tengdur við led peru 
led3 = Pin(17, Pin.OUT) # Pinni 3 er tengdur við led peru 

pins = [led1, led2, led3]	 # getum notað lista til að halda utan um mörg gildi.

randomLed = randint(0, 2)  # random skilar gildinu 0, 1 eða 3
print(randomLed)

pins[randomLed].value(1)    # Skrifum 3.3V út á pinna 1, 2 eða 3.

while True:
    pass	# gerir ekkert

# ath. þú þarf að útfæra betri lausn þannig að aðeins eitt led logi í einu.
