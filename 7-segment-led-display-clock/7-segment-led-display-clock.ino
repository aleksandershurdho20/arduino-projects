// Pin definitions for segments and digits
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;

int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

// Segment patterns for numbers 0-9 (for common anode)
const int numbers[10][7] = {
  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW},  // 0
  {LOW,  HIGH, HIGH, LOW,  LOW,  LOW,  LOW}, // 1
  {HIGH, HIGH, LOW,  HIGH, HIGH, LOW,  HIGH},// 2
  {HIGH, HIGH, HIGH, HIGH, LOW,  LOW,  HIGH},// 3
  {LOW,  HIGH, HIGH, LOW,  LOW,  HIGH, HIGH},// 4
  {HIGH, LOW,  HIGH, HIGH, LOW,  HIGH, HIGH},// 5
  {HIGH, LOW,  HIGH, HIGH, HIGH, HIGH, HIGH},// 6
  {HIGH, HIGH, HIGH, LOW,  LOW,  LOW,  LOW}, // 7
  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH},// 8
  {HIGH, HIGH, HIGH, HIGH, LOW,  HIGH, HIGH} // 9
};

// Initialize pins as outputs
void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);

  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

// Function to display a number on a specific digit
void showNumber(int number, int digitPin) {
  // Set all THE digits off
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);

  // Activate the specific digit
  digitalWrite(digitPin, LOW);

  // Light up the segments for the specified number
  digitalWrite(pinA, numbers[number][0]);
  digitalWrite(pinB, numbers[number][1]);
  digitalWrite(pinC, numbers[number][2]);
  digitalWrite(pinD, numbers[number][3]);
  digitalWrite(pinE, numbers[number][4]);
  digitalWrite(pinF, numbers[number][5]);
  digitalWrite(pinG, numbers[number][6]);

//TO SHOW ALL NUMBERS at the same time
  delay(1);

  // Turn off the digit after display
  digitalWrite(digitPin, HIGH);
}

// Main loop to display numbers
void loop() {
  showNumber(0, D1); // Display 0 on digit 1
  showNumber(3, D2); // Display 3 on digit 2
  showNumber(2, D3); // Display 2 on digit 3
  showNumber(4, D4); // Display 4 on digit 4
}
