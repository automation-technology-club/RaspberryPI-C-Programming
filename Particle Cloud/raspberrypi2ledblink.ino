#define LED 14
#define RLED 18

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //Console.println("Starting...");
  pinMode(LED, OUTPUT);
  pinMode(RLED, OUTPUT);
  digitalWrite(LED, LOW);
  digitalWrite(RLED, LOW);
}

// the loop function runs over and over again forever
void loop() {
 // Particle.publish("LED","Blink");
  digitalWrite(LED, HIGH);
  digitalWrite(RLED, LOW); 
  delay(500);                       // wait for a second
  digitalWrite(LED, LOW);
  digitalWrite(RLED, HIGH);
  delay(500);                       // wait for a second
}
