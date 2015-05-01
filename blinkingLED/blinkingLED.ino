int ledPin = 0;
int wait = 100;

// put your setup code here, to run once:
void setup() {
  pinMode(ledPin, OUTPUT);
}

// put your main code here, to run repeatedly:
void loop() {
  digitalWrite(ledPin, HIGH);   // sets the LED on
  delay(wait);                  // waits for a second
  digitalWrite(ledPin, LOW);    // sets the LED off
  delay(wait);                  // waits for a second
}
