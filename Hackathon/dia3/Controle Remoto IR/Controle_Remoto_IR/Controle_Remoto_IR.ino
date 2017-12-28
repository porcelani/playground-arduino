
#include <IRremote.h>  
//Teclas
float teclaCima     =0xFF629D;  
float teclaEsquerda =0xFF22DD;
float teclaDireita  =0xFFC23D;
float teclaBaixo    =0xFFA857;
float teclaOK       =0xFF02FD;
float tecla1        =0xFF6897;
float tecla2        =0xFF9867;
float tecla3        =0xFFB04F;
float tecla4        =0xFF30CF;      
float tecla5        =0xFF18E7;
float tecla6        =0xFF7A85;
float tecla7        =0xFF10EF;
float tecla8        =0xFF38C7;
float tecla9        =0xFF5AA5;
float tecla0        =0xFF4AB5;
float teclaEstrela  =0xFF42BD;
float teclaTralha   =0xFF52AD;

int RECV_PIN = 11;  
float armazenavalor;
int pinoledvermelho = 5;  
int pinoledverde = 7;  
  
IRrecv irrecv(RECV_PIN);  
decode_results results;  
  
void setup()  
{  
  pinMode(pinoledvermelho, OUTPUT);   
  pinMode(pinoledverde, OUTPUT);  
  Serial.begin(9600);  
  irrecv.enableIRIn(); // Inicializa o receptor IR  
}  
/*
*0xFF629D  tecla cima
*0xFF22DD  tecla esquerda
*0xFFC23D  tecla direita
*0xFFA857  tecla baixo
*0xFF02FD tecla OK
*0xFF6897 tecla 1
*0xFF9867 tecla 2
*0xFFB04F tecla 3
*0xFF30CF tecla 4
*0xFF18E7 tecla 5
*0xFF7A85 tecla 6
*0xFF10EF tecla 7
*0xFF38C7 tecla 8
*0xFF5AA5 tecla 9
*0xFF4AB5 tecla 0
*0xFF42BD tecla *
*0xFF52AD tecla #
*/
void loop()  
{  
  if (irrecv.decode(&results))  
  {  
    Serial.print("Valor lido : ");  
    Serial.println(results.value, HEX);  
    armazenavalor = (results.value);  
    if (armazenavalor == 0xFF6897) //Verifica se a tecla 1 foi acionada  
    {  
      digitalWrite(pinoledvermelho, HIGH);  //Acende o led vermelho  
    }  
    if (armazenavalor == 0xFF30CF) //Verifica se a tecla 4 foi acionada  
    {  
      digitalWrite(pinoledvermelho, LOW); //Apaga o led vermelho  
    }  
    if (armazenavalor == 0xFF9867) //Verifica se a tecla 2 foi acionada  
    {  
      digitalWrite(pinoledverde, HIGH); //Acende o led verde  
    }  
    if (armazenavalor == 0xFF18E7) //Verifica se a tecla 5 foi acionada  
    {  
      digitalWrite(pinoledverde, LOW); //Apaga o led verde  
    }  
    
  irrecv.resume(); //Le o próximo valor  
  }  
}  
