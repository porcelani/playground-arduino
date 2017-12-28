#include <SoftwareSerial.h>//
 SoftwareSerial mySerial(2, 3); // 2-RX, 3-TX 
 //  Modulo bluethoot  HC-06
 // Ligue a saida RX do modulo na entrada TX definida no arduino
 // Ligue a saida TX do modulo na entrada RX definida no arduino
 //
int ch2 = 13;
int ch1 = 12;

 void setup()
 {
 mySerial.begin(9600);
 pinMode(ch1, OUTPUT);
 }

 void loop() 
{
 digitalWrite(ch2,HIGH);
 delay(500);
 digitalWrite(ch2,LOW);
 delay(500);
  
 char caracter = mySerial.read();

 //--------------------------------ch1---------------------
 if(caracter == 'A')
{
 digitalWrite(ch1,HIGH);
}
 if(caracter == 'a')
{
 digitalWrite(ch1,LOW);
}


 delay(10);
}

//----------------------------------------------------------
