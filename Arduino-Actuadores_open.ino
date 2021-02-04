#include <Servo.h>

Servo myservo; 
Servo myservo1;
 
void setup() 
{
  myservo.attach(11); 
  myservo1.attach(3); 
}

void loop()
{
    myservo.write(45);
    myservo1.write(45);
    delay(15);
  
}
