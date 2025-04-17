#include "DHT.h"

// DHT sensor type: DHT11 or DHT22
#define DHTPIN 2      
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

const int hvGatePin = 3;     // PWM output to MOSFET Gate
const int humidityThreshold = 85; 

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(hvGatePin, OUTPUT);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\tTemperature: ");
  Serial.print(t);
  Serial.println(" °C");

  // If humidity is above threshold → activate HV pulsing
  if (h >= humidityThreshold) {
    digitalWrite(hvGatePin, HIGH);  // HV ON BITCHH
    delay(50);                      // Pulse width
    digitalWrite(hvGatePin, LOW);
    delay(950);                     // off time (1000ms cycle, hopefully works)
  } else {
    digitalWrite(hvGatePin, LOW);   //stay off when no fog
    delay(1000);
  }
}
