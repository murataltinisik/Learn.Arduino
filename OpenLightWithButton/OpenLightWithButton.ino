// Variables
byte btnPin = 5, greenPin = 6;

void setup() {
  // Set Serial Begin
  Serial.begin(9600);

  // Set Pin Modes
  pinMode(btnPin, INPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Read value of btn
  if (digitalRead(btnPin) == HIGH) {
    // Open Light
    digitalWrite(greenPin, HIGH);
  } else {
    // Close Light
    digitalWrite(greenPin, LOW);
  }
  // Wait 10 miliseconds
  delay(10);
}
