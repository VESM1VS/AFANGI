from machine import Pin

takki_A = Pin(13, Pin.IN, Pin.PULL_DOWN) 	# Segjum að pinninn sé inntakspinni, vír tengdur í 3.3V. 
takki_B = Pin(14, Pin.IN, Pin.PULL_UP)   	# Segjum að pinninn sé inntakspinni, vír tengdur í GND. 

# Upphafsstaða, þegar ekki er ýtt á takkana:
# print(takki_A.value()) 		# value aðferð les stöðu af takka A og print skrifar út 0 í Shell.
# print(takki_B.value()) 		# valeu aðferð les stöðu af takka B og print skrifar út 1 í Shell.

while True:
    
    if takki_A.value():            # ef ýtt er á takka A, (ef 1)
        print(takki_A.value())     # skrifar út 1 í Shell
    
    if not takki_B.value():        # ef ýtt er á takka B, (ef ekki 1)
        print(takki_B.value())     # skrifar út 0 í Shell
    
# ath. value fallið les mörgum sinnum á meðan haldið er takka inni.
