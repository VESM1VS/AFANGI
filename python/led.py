# Blátt LED blikkar með 2 sek. millibili 
# Tengingar og kóði: https://wokwi.com/projects/452532316363250689

from machine import Pin    # Notum Pin úr machine kóðasafninu til að skilgreina pinnana á ESP. 
from time import sleep_ms  # Notum svo sleep_ms til að láta forritið bíða

# Búum til breytuna led og tengjum hana við pinna 4 á ESP sem er úttakspinni. 
led = Pin(4, Pin.OUT)   

led_state = False  # boolean True eða False

while True:
    # Stillum Led kveikja/slökkva eftir því hvað boolean breytan segir (False=0, True=1)
    led.value(led_state) 
    
    # Snúum boolean gildinu við (True verður False, eða False verður True)
    led_state = not led_state
    
    # Bíðum 500 milliseconds
    sleep_ms(500)
