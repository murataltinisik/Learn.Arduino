// Variables
int btnPin = 7;
int ledPins[] = {2, 3, 4, 5}; 

void setup()
{
  // Serial 
  Serial.begin(9600);

  // Set pin mode for btn
  pinMode(btnPin, INPUT);

  // Set Pins
  for(int i=0; i<4; i++){
    pinMode(ledPins[i], OUTPUT);
  }

  // Clear random
  randomSeed(analogRead(A0));
}

void loop()
{
  // Read Value of btn
  int btnValue = digitalRead(btnPin);

  if(btnValue == 1){
    // Random Number
    int randomLed = random(2, 6);

    // Close all led
    for(int i=0; i<4; i++){
      // Get Pin
      int pin = ledPins[i];

      digitalWrite(pin, LOW);
      
      if(randomLed == pin){
        digitalWrite(pin, HIGH);
      }
    }

    // Wait app
    delay(200);
  }
}
