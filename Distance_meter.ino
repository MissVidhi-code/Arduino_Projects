void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);  // Trig
  pinMode(10, INPUT);  // Echo
}

void loop() {
  // Trigger pulse
  digitalWrite(9, LOW);
  delayMicroseconds(2);
  digitalWrite(9, HIGH);
  delayMicroseconds(10);
  digitalWrite(9, LOW);

  // Read echo
  long duration = pulseIn(10, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
