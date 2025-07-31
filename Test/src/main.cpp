#include <Arduino.h>
void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from pin A0 (ranges from 0 to 1023)
  int sensorValue = analogRead(A5);

  // Print the value to the Serial Monitor
  Serial.println(sensorValue);

  // Small delay to make the output more readable
  delay(100);  // 100 ms
}
