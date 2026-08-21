// Variables
int a0DigitalValue = 0;
int yellowPin = 3, bluePin = 4, greenPin = 5;

void setup() {
  // Set Pin Modes
  pinMode(A0, INPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);

  // Serial Begin
  Serial.begin(9600);
}

void loop() {
  // Read Digital Value
  a0DigitalValue = analogRead(A0);

  if(a0DigitalValue > 0 && a0DigitalValue <= 240){
    // Close Light
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);

    // Open Light
    digitalWrite(yellowPin, HIGH);
  }
  else if (a0DigitalValue > 240 && a0DigitalValue <= 330){
    // Close Light
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);

    // Open Light
    digitalWrite(bluePin, HIGH);
  }else{
    // Close Light
    digitalWrite(bluePin, LOW);
    digitalWrite(yellowPin, LOW);

    // Open Light
    digitalWrite(greenPin, HIGH);
  }
}
