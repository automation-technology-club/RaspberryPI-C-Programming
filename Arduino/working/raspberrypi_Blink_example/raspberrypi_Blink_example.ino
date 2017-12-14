#define LED 18

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Console.println("Starting...");
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

// the loop function runs over and over again forever
void loop() {
  Console.println("Blink");
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
