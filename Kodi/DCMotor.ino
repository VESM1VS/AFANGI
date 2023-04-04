// DC mótor
const int HRADI = 5;        // Verður að vera PWM pinni þ.e. með tildatákni fyrir framan
const int STEFNA_A = 2;     
const int STEFNA_B = 4;     
void haegri(int hradi);     // sjá útfærsluna á fallinu neðar
void vinstri(int hradi);    // sjá útfærsluna á fallinu neðar
void stoppa();              // sjá útfærsluna á fallinu neðar


void setup() {
  
// DC mótor
  pinMode(HRADI, OUTPUT);
  pinMode(STEFNA_A, OUTPUT);
  pinMode(STEFNA_B, OUTPUT);
  stoppa();   // upphafsstaðan, verður stopp þar til annað er ákveðið 
}

void loop() {
 // fallið keyrt með hraðastillinguna 150
 haegri(150);
}  

void stoppa() {
    digitalWrite(STEFNA_A, LOW);
    digitalWrite(STEFNA_B, LOW);
    analogWrite(HRADI, 0);
}

void haegri(int hradi) {
    digitalWrite(STEFNA_A, HIGH);
    digitalWrite(STEFNA_B, LOW);
    analogWrite(HRADI, hradi);
}

void vinstri(int hradi) {
    digitalWrite(STEFNA_A, LOW);
    digitalWrite(STEFNA_B, HIGH);
    analogWrite(HRADI, hradi);
}

