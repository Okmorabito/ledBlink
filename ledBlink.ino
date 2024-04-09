int ledPin = 13;
int ledPin2= 14;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin, LOW);
  delay(250);
  digitalWrite(ledPin2, LOW);
}
