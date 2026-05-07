void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);   // Trig
  pinMode(10, INPUT);   // Echo
  pinMode(8, OUTPUT);   // Buzzer
}

void loop() {
  // Trigger pulse
  digitalWrite(9, LOW);
  delayMicroseconds(2);
  digitalWrite(9, HIGH);
  delayMicroseconds(10);
  digitalWrite(9, LOW);

  long duration = pulseIn(10, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Buzzer speed based on distance
  if (distance < 5) {
    // Very close — continuous beep
    digitalWrite(8, HIGH);
  } 
  else if (distance < 15) {
    // Close — fast beep
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    delay(100);
  } 
  else if (distance < 30) {
    // Medium — slow beep
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(8, LOW);
    delay(300);
  } 
  else {
    // Far — no beep
    digitalWrite(8, LOW);
    delay(500);
  }
}
