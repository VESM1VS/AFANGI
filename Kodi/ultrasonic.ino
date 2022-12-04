/*
  VCC tengist í 5V
  Trig tengist í digital pinna. Þarf EKKI að vera PWM.
  Echo tegist í digital pinna. Þarf EKKI að vera PWM.
  Gnd tengist í GND.
*/

const int ECHO = 2; 
const int TRIG = 3; 

// fall sem sér um mælinguna, útfært hér fyrir neðan
// fallið skilar fjarlægt í cm.
int fjarlaegd(); 

void setup() {
    Serial.begin(9600); 

    pinMode(TRIG,OUTPUT);
    pinMode(ECHO,INPUT);
}

void loop () {

    if(fjarlaegd() < 50) { // ef fjarlægð í næsta hluta er minna en 50 cm.
        // setja sýninguna af stað
    } 

    Serial.print("Fjarlaegd: ");
    Serial.println(fjarlaegd());
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