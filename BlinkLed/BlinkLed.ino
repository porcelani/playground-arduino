/* 
  Blink Led 
  It turns on an LED for a second, then off for a second, repeatedly.
  This sample code to test the Arduino conection.
*/

void setup () {
    pinMode (13, OUTPUT);
}

void loop () {
  digitalWrite (13, HIGH); // set LED on
  delay (1000);
  digitalWrite (13, LOW); // set LED off
  delay (1000);
}
