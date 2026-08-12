// Variables
int initialPin = 4, maxPin = 6;
int greenPin = 4, yellowPin = 5, bluePin = 6;

void setup(){
  // Set Pin Modes
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  while(true){
    // On Initial Pin
    digitalWrite(initialPin, HIGH);

    // Wait 1000 miliseconds
    delay(1000);

    // Close Initial Pin
    digitalWrite(initialPin, LOW);

    // Increase initial pin for open next light.
    initialPin++;

    // Control initialPin > maxPin
    if(initialPin > maxPin){
      // Open All Lights
        digitalWrite(greenPin, HIGH);
        digitalWrite(yellowPin, HIGH);
        digitalWrite(bluePin, HIGH);
       
       // Close Program
       return;
    }
  }
}

void loop(){

}