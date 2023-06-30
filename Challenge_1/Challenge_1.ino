int SA = 9;
int DA = 2;
int SB = 5;
int DB = 4;

int pinTrip = 12;
int pinEcho = 13;
float distance = 0;

void setup() {
  pinMode(SA, OUTPUT);
  pinMode(SB, OUTPUT);
  pinMode(DA, OUTPUT);
  pinMode(DB, OUTPUT);

  pinMode(pinTrip, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);
}

void loop() {
  // detect distance
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

  int stop_distance = 10; //set a distance limit for stopping

  if (distance > stop_distance) {
    stop();
  }
  else {
    moveForward();
  }
}

void moveForward() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 150);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 150);
}

void moveBackward() {
  digitalWrite(DA, LOW);
  analogWrite(SA, 150);
  digitalWrite(DB, LOW);
  analogWrite(SB, 150);
}

void stop() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 0);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 0);
}