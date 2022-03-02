#include <Servo.h> 

int servo_pin=9;
 
Servo servo;  
 
int angle =30;   // first angle
 
void setup() 
{ 
  servo.attach(servo_pin); 
} 
 
 
void loop() 
{ 
  // rotate from 30 to 90 degrees
  for(angle = 30; angle <= 90; angle++)  
  {                                  
    servo.write(angle);               
    delay(5);                   
  } 
} 
