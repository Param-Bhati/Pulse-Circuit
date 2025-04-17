const int buttonPin = 4;
const int hvGatePin = 3;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(hvGatePin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(hvGatePin, HIGH);
    delay(50);
    digitalWrite(hvGatePin, LOW);
    delay(950);
  } else {
    digitalWrite(hvGatePin, LOW);
  }
}
