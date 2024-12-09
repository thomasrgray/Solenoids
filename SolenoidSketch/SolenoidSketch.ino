// Define pin for MOSFET gate control
const int solenoidPin = 8; // Pin connected to MOSFET gate

void setup() {
  pinMode(solenoidPin, OUTPUT); // Set the pin as an output
  digitalWrite(solenoidPin, LOW); // Ensure the solenoid starts OFF
}

void loop() {
  // Turn on the solenoid 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(solenoidPin, HIGH); // Turn the solenoid ON
    delay(1000); // Keep it ON for 1 second
    digitalWrite(solenoidPin, LOW); // Turn the solenoid OFF
    delay(1000); // Wait 1 second before the next activation
  }

  // Wait for 10 seconds before the next set of activations
  delay(10000);
}
