#include <Arduino.h>

// GPIO pins connected to the FSRs
const int fsrPins[] = {D1, D2, D3, D4, D5};
const int numFSRs = 5; // Number of FSRs

void setup() {
  Serial.begin(115200); // Start the serial communication
  for (int i = 0; i < numFSRs; i++) {
    pinMode(fsrPins[i], INPUT); // Set each FSR pin as an input
  }
}

void loop() {
  for (int i = 0; i < numFSRs; i++) {
    int fsrValue = analogRead(fsrPins[i]); // Read the value from each FSR
    Serial.print("FSR ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(fsrValue); // Print the value to the serial monitor
  }
  Serial.println("-----");
  delay(500); // Wait for half a second before reading again
}
