/*
  VCC tengist í 5V
  Trig tengist í digital pinna. Þarf EKKI að vera PWM.
  Echo tegist í digital pinna. Þarf EKKI að vera PWM.
  Gnd tengist í GND.
*/

const int ECHO = 2; 
const int TRIG = 3; 
int distance = 0;  
int fjarlaegd();  // fall sem sér um fjarlægðamælinguna, skilar fjarlægð í cm. 

void setup() {
  
    Serial.begin(9600); 
    pinMode(TRIG,OUTPUT);
    pinMode(ECHO,INPUT);
  
}

void loop () {
    
    distance = fjarlaegd()           // fáum fjarlægðamælingu í cm.
    Serial.print("Fjarlaegd: ");     // til að sjá mælingu í skjánum
    Serial.println(fjarlaegd());     // til að sjá mælingu í skjánum
  
    // fjarlægð getur ekki verið mínustala
    if(distance < 0) { 
      distance = 0;
    } 
  
    // ef fjarlægð í hlut er minna en 50 cm, má ekki vera neikvæð tala.
    if(distance < 50 && distance != 0) {  
      // setja sýninguna af stað
    } 
   
}

int fjarlaegd() {
  
    // sendir út púlsa
    digitalWrite(TRIG,LOW);
    delayMicroseconds(2); // of stutt delay til að skipta máli
    digitalWrite(TRIG,HIGH);
    delayMicroseconds(10); // of stutt delay til að skipta máli
    digitalWrite(TRIG,LOW);

    // mælt hvað púlsarnir voru lengi að berast til baka
    return (int)pulseIn(ECHO,HIGH)/58.0; // deilt með 58 til að breyta í cm
  
}

