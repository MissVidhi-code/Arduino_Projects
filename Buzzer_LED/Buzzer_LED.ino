void setup() {
  pinMode(8, OUTPUT);  // buzzer
  pinMode(7, OUTPUT);  // LED
}

void loop() {
  digitalWrite(8, HIGH);  // buzzer on
  digitalWrite(7, HIGH);  // LED on
  delay(500);
  digitalWrite(8, LOW);   // buzzer off
  digitalWrite(7, LOW);   // LED off
  delay(500);
}
