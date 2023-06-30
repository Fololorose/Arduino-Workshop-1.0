int pinTrip = 12;
int pinEcho = 13;
float distance = 0;

void setup() {
  pinMode(pinTrip, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pinTrip,LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrip,HIGH);
  delayMicroseconds(12);
  digitalWrite(pinTrip,LOW);
  distance=pulseIn(pinEcho,HIGH);
  delay(10);
  distance=distance/58;
  Serial.print("distance=");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
