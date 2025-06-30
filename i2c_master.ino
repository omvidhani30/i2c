#include <Wire.h>

#define slave_add 1

void setup(){
  Serial.begin(9600);
  Wire.begin();
}

void loop()
{

Wire.beginTransmission(slave_add);
Wire.write("1");
Wire.endTransmission();

}


