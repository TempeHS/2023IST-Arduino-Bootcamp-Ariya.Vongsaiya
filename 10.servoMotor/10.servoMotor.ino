/*
  Author: Ariya Vongsaiya 
  Learning Intention: The students will learn how to connect and control a servo motor.
  Success Criteria:
    1. I understand how to connect the servo motor
    2. I can manually write different degrees of movement to the servo
    3. I can map a potentiometer to a servo and control its movement
    4. I understand that a 180deg servo angle of movement is set by a frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/10.servoMotor/Bootcamp-servoMotor.png
*/

#include <Servo.h>

//create a servo object
Servo myServo;

//Pin servo is attached to 
unsigned static int myServoPin = 8;

void setup() {
//Setup and debug serial monitor
Serial.begin(9600);
Serial.println("Serial Monitor configured to 9600");
Serial.println("----------------------------");

//Configure myServo to the pin
myServo.attach(myServoPin);
myServo.write(0);
delay(250);
}

// The loop function runs over and over again forever
void loop() {
//slowly sweep the servo 180 degrees
for (int i = 0; i <= 180; i++) {
  myServo.write(i);
  delay(50);
  }
//slowly sweep the servo back to 0 degrees from 180
for (int y = 180; y >= 0; y--) {
  myServo.write(y);
  delay(50);
}
}
