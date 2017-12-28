/********************** Exemplo 6 ***********************/

void setup()//A função setup é executado uma vez quando você liga 
            //a placa ou preciona o botão reset. 
{
pinMode(10,OUTPUT); //Define o pino 10 como saida.
}

void loop()//A rotina loop executa a função repetidamente.
{
    delay(2000);      //Aguarda 2 segundos.
    tone(10,262,200); //DO
    delay(200);       //Aguarda 200 milisegundos.
    tone(10,294,300); //RE
    delay(200);
    tone(10,330,300); //MI
    delay(200);
    tone(10,349,300); //FA
    delay(300);
    tone(10,349,300); //FA
    delay(300);
    tone(10,349,300); //FA
    delay(300);
    tone(10,262,100); //DO
    delay(200);
    tone(10,294,300); //RE
    delay(200);   
    tone(10,262,100); //DO
    delay(200);
    tone(10,294,300); //RE
    delay(300);
    tone(10,294,300); //RE
    delay(300);
    tone(10,294,300); //RE
    delay(300);
  }
    
