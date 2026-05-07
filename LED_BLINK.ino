void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH);  // LED on
  delay(1000);             // wait 1 second
  digitalWrite(7, LOW);   // LED off
  delay(1000);             // wait 1 second
}
