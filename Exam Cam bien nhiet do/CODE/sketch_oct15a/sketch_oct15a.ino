#include "DHT.h"            
const int DHTPIN = 4;      
const int DHTTYPE = DHT11;  

DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin(); 
  pinMode(8, OUTPUT); //Blue
  pinMode(8, OUTPUT); //Yellow     
}

void loop() {
  float h = dht.readHumidity();    
  float t = dht.readTemperature(); 

                     
}
