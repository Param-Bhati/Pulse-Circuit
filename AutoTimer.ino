const int hvGatePin = 3;

void setup() {
  pinMode(hvGatePin, OUTPUT);
}

void loop() {
  digitalWrite(hvGatePin, HIGH);
  delay(10000); // 10 sec ON
  digitalWrite(hvGatePin, LOW);
  delay(30000); // 30 sec OFF
}
