int pinoledverm = 12; //Pino ligado ao led vermelho
int pinopir = 11;  //Pino ligado ao botão
int acionamento;  //Variavel para guardar valor do sensor

void setup()
{
  Serial.begin(9600);
  pinMode(pinoledverm, OUTPUT); //Define pino como saida
  pinMode(pinopir, INPUT);   //Define pino sensor como entrada

}

void loop()
{
 acionamento = digitalRead(pinopir); //Le o valor do sensor PIR
 delay(500);
   Serial.print("Valor lido: ");  
   Serial.println(acionamento);  //Printa o valor teclado
    
 if (acionamento == LOW)  //Se a bikw
 {
    digitalWrite(pinoledverm, LOW);
 }
 else  //Caso seja removido a bike
 {
    digitalWrite(pinoledverm, HIGH);
 }
}
