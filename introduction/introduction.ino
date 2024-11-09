const int pin2 = 2;
const int pin3 = 3;
const int pin4 = 4;
const int delayTime = 1000;  

void setup() {
  // Set pins as output
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  // Turn on and off each pin in sequence with delay
  togglePin(pin4);
  togglePin(pin3);
  togglePin(pin2);
}

// Function to toggle a pin on and off with delay
void togglePin(int pin) {
  digitalWrite(pin, HIGH);
  delay(delayTime);
  digitalWrite(pin, LOW);
  delay(delayTime);
}
