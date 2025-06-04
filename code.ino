#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();
int coi = 3;
void setup() {
  Serial.begin(115200);
  pinMode(coi,OUTPUT);
  digitalWrite(coi,LOW);
  while (! Serial) {
    delay(1);
  }
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  Serial.println(F("VL53L0X API Simple Ranging example\n\n")); 
}


void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!
  int a = measure.RangeMilliMeter;
  Serial.println(a);
  delay(100);
  if(a < 500)
  {
    digitalWrite(coi,HIGH);
  }
  else
  {
    digitalWrite(coi,LOW);
  }
}