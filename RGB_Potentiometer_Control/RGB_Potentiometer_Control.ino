// Variables
int redPin = 3, bluePin = 5, greenPin = 6;
int a0Analog = 0, a1Analog = 0, a2Analog = 2;

void setup()
{
  // Serial monitor
  Serial.begin(9600);
  
  // Set Pin Modes (Input)
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

  // Set Pin Modes (Output)
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  // Get Value Analog Data
  a0Analog = analogRead(A0);  
  a1Analog = analogRead(A1);
  a2Analog = analogRead(A2);

  // Control value and set
  int redValue   = map(a0Analog, 0, 1023, 0, 255);
  int greenValue = map(a1Analog, 0, 1023, 0, 255);
  int blueValue  = map(a2Analog, 0, 1023, 0, 255);
    
  // Analog Write
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}