#include <Servo.h>

Servo servo;
Servo servo1;

void setup()
{
  servo.attach(6);
  servo1.attach(9);  
}

void loop()
{ servo.write(45);
  delay(100);
  servo1.write(45);
  delay(100);
  servo.write(90);
  delay(100);
  servo1.write(90);
  delay(100);
  servo.write(133);
  delay(100);
  servo1.write(133);
  delay(100);
  servo.write(170);
  delay(100);
  servo1.write(170);
  delay(100);
 servo.write(133);
  delay(100);
  servo1.write(133);
  delay(100);
 servo.write(90);
  delay(100);
  servo1.write(90);
  delay(100);
 servo.write(45);
  delay(100);
  servo1.write(45);
  delay(100);
}
