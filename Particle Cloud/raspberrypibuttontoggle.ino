#define BLED 14
#define RLED 18
#define SW1 20
#define SW2 4

int button1state = 0;
int button2state = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //Console.println("Starting...");
  pinMode(BLED, OUTPUT);
  pinMode(RLED, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  digitalWrite(BLED, LOW);
  digitalWrite(RLED, LOW);
}

// the loop function runs over and over again forever
void loop() {
  /*
  //Console.println("Blink");
  digitalWrite(BLED, HIGH);
  digitalWrite(RLED, LOW); 
  delay(50);                       // wait for a second
  digitalWrite(BLED, LOW);
  digitalWrite(RLED, HIGH);
  delay(50);                       // wait for a second
  */
  int readsw1 = digitalRead(SW1);
  int readsw2 = digitalRead(SW2);
  
delay(100);
  if (readsw1 == LOW) {
   button1state = !button1state;
  // Console.print("SW1 ");
  // Console.println(button1state);
    }
delay(100);
  if (readsw2 == LOW) {
   button2state = !button2state;
  }
  delay(100);
  digitalWrite(BLED, button1state);
  digitalWrite(RLED, button2state);
}
