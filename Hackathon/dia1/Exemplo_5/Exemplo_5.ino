/********************** Exemplo 5 ***********************/

void setup()//A função setup é executado uma vez quando você liga 
            //a placa ou preciona o botão reset. 
{
pinMode(12,OUTPUT);// Define pino 12 como saida. 
}

void loop()//A rotina loop executa a função repetidamente.
{
    tone(12,2800,200);// Pino, Frequencia, Tempo. 
    delay(500);       // Aguarda 500 milisegundos. 
    tone(12,2800,200);// Pino, Frequencia, Tempo.
    delay(500);       // Aguarda 500 milisegundos.
    
}
