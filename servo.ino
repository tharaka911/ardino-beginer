#include <Servo.h>

Servo s = Servo();



void setup()
{
  s.attach(9);
  s.write(0);
  delay(1000);
  
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT); 
 
}

void loop()
{
 s.write(180);
 delay(300);
 digitalWrite(13,HIGH);
 digitalWrite(12,LOW);
 delay(2000);
  
 s.write(0);
 delay(300);
 digitalWrite(12,HIGH);
 digitalWrite(13,LOW);
 delay(2000);
}