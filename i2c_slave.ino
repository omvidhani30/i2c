#include <Wire.h>

#define slave_add 1

void setup(){
  Serial.begin(9600);
  Wire.begin(slave_add);
  Wire.onReceive(task);
}

void loop(){
delay(20);
}
 
void task(int no_byte){

while(Wire.available())
{
char a = Wire.read();
Serial.println(a);
}

}
