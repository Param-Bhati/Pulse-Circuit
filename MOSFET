// Pulse control for electrostatic fog harvester
// Outputs PWM signal to MOSFET Gate (connected to HV module GND)

const int outputPin = 3; 
const int frequency = 1000; 
const int dutyCycle = 20;  

void setup() {
  pinMode(outputPin, OUTPUT);
}

void loop() {
  // Calculate ON and OFF times in microseconds
  int period = 1000000 / frequency;
  int onTime = (period * dutyCycle) / 100;
  int offTime = period - onTime;

  // Generate square wave
  digitalWrite(outputPin, HIGH);
  delayMicroseconds(onTime);
  digitalWrite(outputPin, LOW);
  delayMicroseconds(offTime);
}
