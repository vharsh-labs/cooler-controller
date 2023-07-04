// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor

#include "DHT.h"

#define DHTPIN 2 // Digital pin connected to the DHT sensor
// Pin 15 can work but DHT must be disconnected during program upload.

#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void login() {
    // 1. Start a BLE peripheral or a WiFi page where anyone can login and set the desired temperature.
    // 2. Find a cooler or a device which can be controlled wirelessly or via a wire
      delay(2000);
    
}


void measure() {
  
}