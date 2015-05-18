
/* 
 Stepper Motor Control - one revolution
 
 This program drives a unipolar or bipolar stepper motor. 
 The motor is attached to digital pins 8 - 11 of the Arduino.
 
 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.  
 
  
 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe
 
 */

#include <Stepper.h>

const int stepsPerRevolution = 300;  // change this to fit the number of steps per revolution
                                     // for your motor

// initialize the stepper library on pins 8 through 11:
//Stepper myStepper(stepsPerRevolution, 9,11,8,10);

// Stepper myStepper(stepsPerRevolution,8,9,11,10);
// Stepper myStepper(stepsPerRevolution,8,10,9,11);
// Stepper myStepper(stepsPerRevolution,8,10,11,9);
// Stepper myStepper(stepsPerRevolution,8,11,9,10);
// Stepper myStepper(stepsPerRevolution,8,11,10,9);
// Stepper myStepper(stepsPerRevolution,9,8,10,11);
// Stepper myStepper(stepsPerRevolution,9,8,11,10);
// Stepper myStepper(stepsPerRevolution,9,10,8,11);
// Stepper myStepper(stepsPerRevolution,9,10,11,8);
// Stepper myStepper(stepsPerRevolution,9,11,8,10);
// Stepper myStepper(stepsPerRevolution,9,11,10,8);
// Stepper myStepper(stepsPerRevolution,10,8,9,11);
// Stepper myStepper(stepsPerRevolution,10,8,11,9);
// Stepper myStepper(stepsPerRevolution,10,9,8,11);
// Stepper myStepper(stepsPerRevolution,10,9,11,8);
// Stepper myStepper(stepsPerRevolution,10,11,8,9);
// Stepper myStepper(stepsPerRevolution,10,11,9,8);
// Stepper myStepper(stepsPerRevolution,11,8,9,10);
// Stepper myStepper(stepsPerRevolution,11,8,10,9);
// Stepper myStepper(stepsPerRevolution,11,9,8,10);
// Stepper myStepper(stepsPerRevolution,11,9,10,8);
// Stepper myStepper(stepsPerRevolution,11,10,8,9);
 Stepper myStepper(stepsPerRevolution,11,10,9,8);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
   Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  
   // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500); 
}

