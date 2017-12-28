/********************** Exemplo 3 ***********************/

void setup() {//A função setup é executado uma vez quando você liga 
              //a placa ou preciona o botão reset.
   pinMode(2,INPUT); //Declara o pino 2 como entrada.
   pinMode(3,INPUT); //Declara o pino 3 como entrada. 
   
   pinMode(13, OUTPUT);// Declara o pino 13 como saída.
    

}

void loop() {//A rotina loop executa a função repetidamente.
  if(digitalRead(2) == LOW){// Se o pino 2 receber sinal Baixo(0).
  digitalWrite(13, HIGH);  // Liga o Led conectado ao pino 13.
  }   
  
  if(digitalRead(3)== LOW){// Se o pino 3 receber sinal Baixo(0).
  digitalWrite(13, LOW);  // Desliga o Led conectado ao pino 13.
  }   
}

