// Sonic skynjari
int echoPin = 9;
int trigPin = 10;

// Mótor A
int pwmA = 5;
int Ai1 = 3;
int Ai2 = 4;

// Mótor B
int pwmB = 6;
int Bi1 = 7;
int Bi2 = 8;

void setup() {
  // Sonic pinnar
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // Mótor pinnar
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(Ai1, OUTPUT);
  pinMode(Ai2, OUTPUT);
  pinMode(Bi1, OUTPUT);
  pinMode(Bi2, OUTPUT);
}

void loop() {  
  
  afram(200);

}

void afram(int hradi) {
  // Set Motor A forward
  digitalWrite(Ai1, HIGH);
  digitalWrite(Ai2, LOW);

  // Set Motor B forward
  digitalWrite(Bi1, HIGH);
  digitalWrite(Bi2, LOW);

  // Set the motor speeds
  analogWrite(pwmA, hradi);
  analogWrite(pwmB, hradi);
}

int maelaFjarlaegd()  {
  // sendir út púlsar
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // mælt hvað púlsarnir voru lengi að berast til baka
  return pulseIn(echoPin,HIGH)/58.0; // deilt með 58 til að breyta í cm
}
