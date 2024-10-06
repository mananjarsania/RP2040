// Define the pin for the passive buzzer
const int buzzerPin = 15; // Use any PWM-capable GPIO pin on the RP2040

// Function to play a tone on the passive buzzer
void playTone(int frequency, int duration) {
  // Convert frequency to a PWM period
  int period = 1000000L / frequency; // Period in microseconds (frequency in Hz)
  int halfPeriod = period / 2;       // Half of the period

  // Play the tone for the specified duration
  for (long time = 0; time < duration * 1000L; time += period) {
    digitalWrite(buzzerPin, HIGH);  // Set buzzerPin to HIGH
    delayMicroseconds(halfPeriod);  // Wait for half the period
    digitalWrite(buzzerPin, LOW);   // Set buzzerPin to LOW
    delayMicroseconds(halfPeriod);  // Wait for the other half of the period
  }
}

void setup() {
  // Set buzzerPin as OUTPUT
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Play a simple melody
  playTone(262, 500); // C4 - 262 Hz
  delay(500);
  playTone(294, 500); // D4 - 294 Hz
  delay(500);
  playTone(330, 500); // E4 - 330 Hz
  delay(500);
  playTone(349, 500); // F4 - 349 Hz
  delay(500);
  playTone(392, 500); // G4 - 392 Hz
  delay(500);
  playTone(440, 500); // A4 - 440 Hz
  delay(500);
  playTone(494, 500); // B4 - 494 Hz
  delay(500);
  playTone(523, 500); // C5 - 523 Hz
  delay(500);
}

// // Define pin for the passive buzzer
// const int buzzerPin = 15; // GPIO pin connected to the buzzer

// void setup() {
//   // Setup pin mode for buzzerPin
//   pinMode(buzzerPin, OUTPUT);
// }

// void loop() {
//   // Make the buzzer pin HIGH and LOW in quick succession to produce sound

//   // Turn the pin HIGH
//   digitalWrite(buzzerPin, HIGH);
//   delay(500); // Small delay to create a pulse

//   // Turn the pin LOW
//   digitalWrite(buzzerPin, LOW);
//   delay(500); // Small delay to create a pulse

//   // This loop will continue, producing a simple tone
// }
