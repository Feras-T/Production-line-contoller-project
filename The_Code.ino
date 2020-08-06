// defines pins numbers
#include <Servo.h> // include library

Servo Creativesolution; // identity object
Servo servo1;
const int trigPin = 9;
const int echoPin = 10;

int x;
// defines variables
long duration;
int distance;
void setup() {
Creativesolution.attach(7);  
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input

Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

 
x = distance;
Serial.println(x); 

if (x < 6)
{

Creativesolution.write(90);
delay(1000);

Creativesolution.write(0);
delay(1000);
Creativesolution.write(90);
delay(3000);
                     // wait for a second
}
else if ( x>= 6 && x<11) {
 Creativesolution.write(90);
delay(1000);
Creativesolution.write(180);
delay(1000);   
 Creativesolution.write(90);
delay(3000);  
}
else{
  delay(1000);

}

}
