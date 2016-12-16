/* Authors: Ninja Turles E149/249A
 *  Date: 11/15/2016
 *  Purpose: The purpose of this code is to establish a Bluetooth connection between the
 *            Kobuki robots and the iOS mobile application. This code moves the robot i
 *            various letter formations depending on what is read in from Bluetooth.
 */
 
#include <Servo.h>

Servo myservo; //create servo object to control a servo

int pos = 30; //initial servo position

int leftWheel = DAC0; //connected to left wheel of Kobuki
int rightWheel = DAC1; //connected to right wheel of Kobuki 
char c; //int read in from Bluetooth

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600); //begin Serial communication with Bluetooth

  myservo.attach(9); //attach servo to digital pin 9
  myservo.write(30); //initialize servo position to 0 degrees

  analogWriteResolution(8); //8 bit resolution on the DAC pins
  
  pinMode(leftWheel, OUTPUT); //set wheels of the Kobukis to outputs
  pinMode(rightWheel, OUTPUT);
  analogWrite(leftWheel, 55); //initial state of robots is STOP
  analogWrite(rightWheel, 55);

}

void loop() {
  //Reads in data from the Bluetooth module
  if (Serial1.available()) {
    c = Serial1.read();  
    Serial.println("Got input:");
    
    //Make specific motions depending on data read in

    if (c == 'L'){
      Serial.println(c);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 30 degrees if not already
        delay(15);
      }
      analogWrite(leftWheel, 75);
      analogWrite(rightWheel, 75);
      delay(8500);
      analogWrite(leftWheel, 55);
      analogWrite(rightWheel, 55);
      delay(200);
      analogWrite(leftWheel, 75);
      analogWrite(rightWheel, 33);
      delay(2400);
      analogWrite(leftWheel, 55);
      analogWrite(rightWheel, 55);
      delay(200);
      analogWrite(leftWheel, 75);
      analogWrite(rightWheel, 75);
      delay(4500);
      analogWrite(leftWheel, 55);
      analogWrite(rightWheel, 55);
      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 0 degrees
        delay(15);
      }
    }

    else if (c == 'E')
    {

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
  
      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1250);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
      
      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 33); //180 degrees right
      analogWrite(rightWheel, 76);
      delay(4200);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1250);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(2125);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2350);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);
      
      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1200);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1100);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2150);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(725);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(2100);

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(1950); //was 1950

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(600);

    }

    else if (c == 'C')
    {

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
  
      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1250);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
      
      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 33); //180 degrees right
      analogWrite(rightWheel, 76);
      delay(4200);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1250);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(2125);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2200);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);
      
      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(2125);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2150);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(700);

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(1950);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
    }

    else if (c == 'S')
    {

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
  
      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1250);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
      
      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 33); //180 degrees right
      analogWrite(rightWheel, 76);
      delay(4200);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1250);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1062);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //90 degrees left
      analogWrite(rightWheel, 33);
      delay(2200);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 0 degrees if not already
        delay(15);
      }

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2400);
      
      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1062);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2150);

      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 30 degrees
        delay(15);
      }

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2150);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(2125);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);

      analogWrite(leftWheel, 33); //90 degrees right
      analogWrite(rightWheel, 76);
      delay(2150);

      analogWrite(leftWheel, 75); //straight
      analogWrite(rightWheel, 75);
      delay(1400);

      analogWrite(leftWheel, 55); //stop
      analogWrite(rightWheel, 55);
      delay(500);
    }

    
    if (c == '0') //Move Forward
    {
      Serial.println(c);
      analogWrite(leftWheel, 75);
      analogWrite(rightWheel, 75);
    }
    else if (c == '1') //Turn in Place Left
    {
      Serial.println(c);
      analogWrite(leftWheel, 75);
      analogWrite(rightWheel, 33);
      delay(2400);
      analogWrite(leftWheel, 55);
      analogWrite(rightWheel, 55);
      
    }  
    else if (c == '2') //Turn in Place Right
    {
      Serial.println(c);
      analogWrite(leftWheel, 33);
      analogWrite(rightWheel, 76);
    }
    else if (c == '3') //Small Turn Left
    {
      Serial.println(c);
      analogWrite(leftWheel, 95);
      analogWrite(rightWheel, 72);
    }
    else if (c == '4') //Small Turn Right
    {
      Serial.println(c);
      analogWrite(leftWheel, 72);
      analogWrite(rightWheel, 95);
  
    }else if (c == '5') //Large Turn Left
    {
      Serial.println(c);
      analogWrite(leftWheel, 105);
      analogWrite(rightWheel, 74);
    }
    else if (c == '6') //Large Turn Right
    {
      Serial.println(c);
      analogWrite(leftWheel, 74);
      analogWrite(rightWheel, 105);
    }
      else if (c == '7') //Stop
    {
      Serial.println(c);
      analogWrite(leftWheel, 55);
      analogWrite(rightWheel, 55);
    }
      else if (c == '8') //Drop Pen
    {
      Serial.println(c);
      if (pos != 0){
        pos = 0;
        myservo.write(pos); //write servo to 30 degrees if not already
        delay(15);
      }
    }
      else if (c == '9') //Pick Pen Up
    {
      Serial.println(c);
      if (pos != 30){
        pos = 30;
        myservo.write(pos); //write servo to 0 degrees
        delay(15);
      }  
    }
  }
}
