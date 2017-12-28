#include <Ultrasonic.h>
#define echoPin 13
#define trigPin 12
Ultrasonic ultra(12, 13);

void setup() {
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

}

void loop() {
  

}
