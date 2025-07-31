void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn LED ON
  delay(500);              // Wait for 1 second (1000 milliseconds)
  digitalWrite(13, LOW);   // Turn LED OFF
  delay(500);              // Wait for 1 second
}
