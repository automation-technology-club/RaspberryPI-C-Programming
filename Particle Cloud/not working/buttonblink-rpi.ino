// constants won't change. They're used here to set pin numbers:
const int blueButtonPin = D15; //20;// the number of the pushbutton pin
const int redButtonPin = 4;
const int blueLedPin =  TX; //14;      // the number of the LED pin
const int redLedPin = D11; //18;

// variables will change:
//int blueButtonState = 0;         // variable for reading the pushbutton status
//int redButtonState = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(blueLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(blueButtonPin, INPUT);
  pinMode(redButtonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
 int blueButtonState = digitalRead(blueButtonPin);
  int redButtonState = digitalRead(redButtonPin);
   delay(100);
  // check if the pushbutton is pressed. If it is, the blueButtonState is HIGH:
  if (blueButtonState == LOW) {
    digitalWrite(blueLedPin, HIGH);
  } else {
    digitalWrite(blueLedPin, LOW);
  }
  
 delay(100);
  
  if (redButtonState == LOW) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(redLedPin,LOW);
  }
  
}
