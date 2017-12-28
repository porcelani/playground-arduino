
//Bluethoot
#include <SoftwareSerial.h>//
SoftwareSerial mySerial(3, 4); // 2-RX, 3-TX 

//Sensor Ultrasonic
#include <Ultrasonic.h>
#define TRIGGER_PIN  7
#define ECHO_PIN     6
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

//Sensor de Humidade e temperatura
#include <dht.h>
#define dht_dpin A5 //Pino DATA do Sensor ligado na porta Analogica A1
dht DHT; //Inicializa o sensor

int sirene = 14;
int ledAzul = 15;
int ledVerde = 17;
int sensorDeContato=16;
int ledVermelho = 5;
int sensorDeMovimento = 9;
int statusSensorContato;

char podeLiberarBike;


 void setup(){
     
   pinMode(ledVermelho, OUTPUT);
   mySerial.begin(9600);
   pinMode(ledAzul, OUTPUT);
   pinMode(ledVerde, OUTPUT);
   pinMode(sirene, OUTPUT);
   pinMode(sensorDeContato, INPUT);
   pinMode(sensorDeMovimento, INPUT);
   podeLiberarBike ='N';
 }

 void loop() {
  bluethoot();
  sensorContato();
  sensorMovimento();
  sensorVelocidade();
  sensorHumidadeTemperatura();
}

void sensorHumidadeTemperatura(){
   DHT.read11(dht_dpin); //Lê as informações do sensor
  //Serial.print("Umidade = ");
  //Serial.print(DHT.humidity);
  //Serial.print(" %  ");
  //Serial.print("Temperatura = ");
  //Serial.print(DHT.temperature); 
  //Serial.println(" Celsius  ");
  digitalWrite(ledVerde, HIGH);
  delay(100);
  digitalWrite(ledVerde, LOW); 
}

void sensorVelocidade(){
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing(); //tempo gasto do som (max:5000 min:300)
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);//centimetros (max:90 min: 5)
  Serial.print(cmMsec);
  if(cmMsec < 10){
    digitalWrite(ledVermelho, HIGH);
  }else{
   digitalWrite(ledVermelho, LOW);
  }  
}
  

 void sensorMovimento(){
   int acionamento = digitalRead(sensorDeMovimento); 
   if (acionamento == HIGH and podeLiberarBike == 'S'){
     for(int i; i<=10;i++){
      digitalWrite(ledAzul, LOW);
      delay(10);
      digitalWrite(ledAzul, HIGH);
     }
   }
}
 
 
 void sensorContato(){
     statusSensorContato = digitalRead(sensorDeContato);
     if (statusSensorContato == LOW and podeLiberarBike == 'N'){
        digitalWrite(sirene, HIGH);//COLOCAR SOM DE SIRENE
     }else{
        digitalWrite(sirene, LOW);
     }
 }

void bluethoot(){
    char caracter = mySerial.read();
    
    if(caracter == 'A'){
       digitalWrite(ledAzul,HIGH);
       podeLiberarBike = 'S';
    }
    if(caracter == 'a'){
      digitalWrite(ledAzul,LOW);
      podeLiberarBike = 'N';
    }
    delay(10);
}
