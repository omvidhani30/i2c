#include <Wire.h>

#define slave_add 1

void setup(){
  Serial.begin(9600);
  Wire.begin();
}

void loop(){

 Wire.requestFrom(slave_add,5);
  while(Wire.available()){
  char c = Wire.read();
  Serial.print(c);
  }
  delay(1000);
  Serial.println(" ");
}
