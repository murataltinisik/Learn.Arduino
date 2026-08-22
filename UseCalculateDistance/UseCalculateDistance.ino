// Variables
int ledPins[] = {3, 4, 5};
int trigPin = 10, ecoPin = 11;

void setup() {
  // Serial Begin
  Serial.begin(9600);

  // Set pin modes
  pinMode(ecoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  for(int i=0;i<3; i++){ pinMode(ledPins[i], OUTPUT); }
}

void loop() {
  // Clear TRIGPIN
  digitalWrite(trigPin, LOW);

  // Wait "2" microseconds
  delayMicroseconds(2);

  // Send Signal
  digitalWrite(trigPin, HIGH);

  // Wait "10" microseconds
  delayMicroseconds(10);

  // Clear Trig Pin
  digitalWrite(trigPin, LOW);

  // Calculate duration
  long duration = pulseIn(ecoPin, HIGH);

  // Calculate "cm"
  float cm = duration / 2 / 29.154;

  // Serial Println
if(cm <= 20)
  {
    openLight(0);
    openLight(1);
    openLight(2);
  }
  else if(cm <= 40)
  {
    openLight(0);
    openLight(1);
  }
  else if(cm <= 60)
  {
    openLight(0);
  }
  else
  {
    closeAllLed();
  }

  Serial.println(cm);

  // Delay 
  delay(500);
}

void openLight(int index){
  digitalWrite(ledPins[index], HIGH);
}

void closeAllLed(){
  for(int i=0;i<3; i++){ digitalWrite(ledPins[i], LOW); }
}



