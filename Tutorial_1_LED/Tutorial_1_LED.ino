int ledpin=11;                 
void setup() {
  pinMode(ledpin, OUTPUT);  
}
void loop() {
  digitalWrite(ledpin, HIGH);
  delay(1000);                 
  digitalWrite(ledpin, LOW);
  delay(1000);
}

// Bring it further 1
// int ledpin=11;                 
// void setup() {
//   pinMode(ledpin, OUTPUT);  
// }
// void loop() {
//   digitalWrite(ledpin, HIGH);
//   delay(100); //faster
//   delay(10000); //slower             
//   digitalWrite(ledpin, LOW);
//   delay(100); //faster
//   delay(10000); //slower 
// }

// Bring it further 2
// int ledpin=11;                 
// void setup() {
//   pinMode(ledpin, OUTPUT);  
// }
// void loop() {
//   digitalWrite(ledpin, HIGH);
//   delay(3000);             
//   digitalWrite(ledpin, LOW);
//   delay(1000);
//   digitalWrite(ledpin, HIGH);
//   delay(2000);             
//   digitalWrite(ledpin, LOW);
//   delay(500);
// }
