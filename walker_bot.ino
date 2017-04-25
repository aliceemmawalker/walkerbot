// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 8; 
int servoPin2 = 9;

// Create a servo object 
Servo Servo1; 
Servo Servo2;
void setup() { 
// We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   Servo2.attach(servoPin2);
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(0); 
   Servo2.write(0); 
   delay(500); 
   // Make servo go to 40 degrees 
//   Servo1.write(0); 
//   Servo2.write(0); 
//   delay(500); 
   //delay half of one second or 500 miliseconds
}
