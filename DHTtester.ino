#include "DHT.h"
#define DHTTYPE DHT11
int dhtPin = 14;
DHT dht(dhtPin, DHTTYPE); 

float temp; 
float hum;

void setup() 
{
  Serial.begin(9600); 
  pinMode(dhtPin ,INPUT) ; 
  dht.begin();  
  delay(900) ;
}

void loop() 
{ 
  temp = dht.readTemperature(); 
  hum = dht.readHumidity(); 
  Serial.print("Temperatur : ");
  Serial.print(temp);
  Serial.print(", Kelembaban : ");
  Serial.println(hum); 
  delay(1000);
}
