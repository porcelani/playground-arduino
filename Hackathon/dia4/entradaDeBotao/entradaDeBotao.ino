int pinoledverm = 5; //Pino ligado ao led vermelho
int pinoledazul = 6; //Pino ligado ao led azul
int pinopir = 3;  //Pino ligado ao botão
int acionamento;  //Variavel para guardar valor do sensor

void setup()
{
  Serial.begin(9600);
  pinMode(pinoledverm, OUTPUT); //Define pino como saida
  pinMode(pinoledazul, OUTPUT); //Define pino como saida
  pinMode(pinopir, INPUT);   //Define pino sensor como entrada

}

void loop()
{
 acionamento = digitalRead(pinopir); //Le o valor do sensor PIR
 
   Serial.print("Valor lido: ");  
   Serial.println(acionamento);  //Printa o valor teclado
    
 if (acionamento == LOW)  //Sem movimento, mantem led azul ligado
 {
    digitalWrite(pinoledverm, LOW);
    digitalWrite(pinoledazul, HIGH);
 }
 else  //Caso seja detectado um movimento, aciona o led vermelho
 {
    digitalWrite(pinoledverm, HIGH);
    digitalWrite(pinoledazul, LOW);
 }
}
