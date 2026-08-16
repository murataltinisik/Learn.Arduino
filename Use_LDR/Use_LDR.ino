// Variables
int lightPin = 3;
int a0AnalogLdrValue = 0;

void setup() {
  // Serial 
  Serial.begin(9600);

  // Set Pin Modes
  pinMode(lightPin, OUTPUT);
}

void loop() {
  // Get Values
  a0AnalogLdrValue = analogRead(A0);

  if(a0AnalogLdrValue <= 2){
    // Open Light
    digitalWrite(lightPin, HIGH);
  }else{
    // Close Light
    digitalWrite(lightPin, LOW);
  }
  
  // Wait 500 miliseconds program.
  delay(500);
}
