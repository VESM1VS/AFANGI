from machine import Pin

button=Pin(21,Pin.IN,Pin.PULL_UP)  # takki tengist pinna 21
activeBuzzer=Pin(14,Pin.OUT)       # buzzer tengist pinna 14 

activeBuzzer.value(0) # höfum slökkt á buzzer í upphafi

while True:
    if button.value(): # lesum stöðu á takka (0 eða 1), 1 ef ekki er ýtt á takka útaf Pin.PULL_UP stillingu
        activeBuzzer.value(0)  # hljóð af
    else:
        activeBuzzer.value(1)  # hljóð á
