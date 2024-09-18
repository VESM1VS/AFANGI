# Blátt LED blikkar með 2 sek. millibili og skrifar út 0 og 1 á víxl í Shell í Thonny

from machine import Pin    # Notum Pin úr machine kóðasafninu til að skilgreina pinnana á ESP. 
from time import sleep_ms  # Notum svo sleep_ms til að láta forritið bíða

# Búum til breytuna led og tengjum hana við pinna 3 á ESP. 
led = Pin(3, Pin.OUT)   # Segjum að pinni 3 sé úttakspinni.

# Gerum lykkju sem keyrir að eilífu
while True:
    
    led.value(1)     	# Skrifum 3.3V út á pinna 3
    print(led.value())	# Lesum stöðu á led með value aðferð (les þegar sviginn er tómur) og skrifum svo út í Shell með print.

    sleep_ms(2000)    	# Bíðum í 2 sekúndur

    led.value(0)    	# Skrifum 0V út á pinna 3
    print(led.value())	# Lesum stöðu á led með value aðferð og skrifum út í Shell með print
    sleep_ms(500)     	# Bíðum í 500 millisekúndur

