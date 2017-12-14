
// constants won't change. They're used here to set pin numbers:
const int blueButtonPin = 20;// the number of the pushbutton pin
const int redButtonPin = 4;
const int blueLedPin =  14;      // the number of the LED pin
const int redLedPin = 18;

// variables will change:
int blueButtonState = 0;         // variable for reading the pushbutton status
int redButtonState = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(blueLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(blueButtonPin, INPUT);
  pinMode(redLedPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  blueButtonState = digitalRead(blueButtonPin);
  redButtonState = digitalRead(redButtonPin);
  // check if the pushbutton is pressed. If it is, the blueButtonState is HIGH:
  if (blueButtonState == LOW) {
    // turn LED on:
    digitalWrite(blueLedPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(blueLedPin, LOW);
  }
  if (redButtonState == LOW) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(redLedPin,LOW);
  }
  
}
