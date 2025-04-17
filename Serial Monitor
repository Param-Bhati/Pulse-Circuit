#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Time (ms): ");
  Serial.print(millis());
  Serial.print("\tHumidity: ");
  Serial.print(h);
  Serial.print("%\tTemp: ");
  Serial.println(t);

  delay(10000);  // Log every 10 seconds
}
