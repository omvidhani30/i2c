#include <Wire.h>

#define slave_add 1

void setup(){
  Serial.begin(9600);
  Wire.begin(slave_add);
  Wire.onRequest(send);
}

void loop(){
delay(20);
}

void send(){
  Wire.write("hello");
}


