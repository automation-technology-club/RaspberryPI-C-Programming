#define LED 14
#define RLED 18

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Console.println("Starting...");
  pinMode(LED, OUTPUT);
  pinMode(RLED, OUTPUT);
  digitalWrite(LED, LOW);
  digitalWrite(RLED, LOW);
}

// the loop function runs over and over again forever
void loop() {
  Console.println("Blue");
  digitalWrite(LED, HIGH);
  digitalWrite(RLED, LOW); 
  delay(1000);  // wait for a second
  Console.println("Red");
  digitalWrite(LED, LOW);
  digitalWrite(RLED, HIGH);
  delay(1000);  // wait for a second
  }
