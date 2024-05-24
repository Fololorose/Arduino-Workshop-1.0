int SA = 9;
int DA = 2;
int SB = 5;
int DB = 4;

void setup() {
  pinMode(SA, OUTPUT);
  pinMode(SB, OUTPUT);
  pinMode(DA, OUTPUT);
  pinMode(DB, OUTPUT);
}

void loop() {
  moveForward();
  delay(1000);
  moveBackward();
  delay(1000);
  // stop();
  // delay(2000);
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

// Bring it further 1
void stop() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 0);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 0);
}

// Bring it further 2
void turnLeft1() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 0);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 150);
}

void turnLeft2() {
  digitalWrite(DA, LOW);
  analogWrite(SA, 150);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 150);
}

void turnLeft3() {
  digitalWrite(DA, LOW);
  analogWrite(SA, 150);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 255);
}

void turnRight1() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 150);
  digitalWrite(DB, HIGH);
  analogWrite(SB, 0);
}

void turnRight2() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 150);
  digitalWrite(DB, LOW);
  analogWrite(SB, 150);
}

void turnRight3() {
  digitalWrite(DA, HIGH);
  analogWrite(SA, 255);
  digitalWrite(DB, LOW);
  analogWrite(SB, 150);
}

