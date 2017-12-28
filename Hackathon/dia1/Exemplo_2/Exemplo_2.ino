/********************** Exemplo 2 ***********************/

void setup() {//A função setup é executado uma vez quando você liga 
              //a placa ou preciona o botão reset.
              
   pinMode(7, OUTPUT);// Declara o pino 7 como saída.
    pinMode(6, OUTPUT);// Declara o pino 6 como saída.
     pinMode(5, OUTPUT);// Declara o pino 5 como saída.
      pinMode(4, OUTPUT);// Declara o pino 4 como saída.
       pinMode(3, OUTPUT);// Declara o pino 3 como saída.
        pinMode(2, OUTPUT);// Declara o pino 2 como saída.

}

void loop() {//A rotina loop executa a função repetidamente.
  digitalWrite(7, HIGH);  // Liga o Led conectado ao pino 7.
  delay(1000);            // Aguarda po 1 segundo.
  digitalWrite(7, LOW);   // Desliga o Led Conectado ao pino 7.
  delay(1000);            // Aguarda po 1 segundo.  
  digitalWrite(6, HIGH);  // Liga o Led conectado ao pino 6.
  delay(1000);            // Aguarda po 1 segundo.
  digitalWrite(6, LOW);   // Desliga o Led Conectado ao pino 6.
  delay(1000);            // Aguarda po 1 segundo.  
  digitalWrite(5, HIGH);  // Liga o Led conectado ao pino 5.
  delay(1000);            // Aguarda po 1 segundo.
  digitalWrite(5, LOW);   // Desliga o Led Conectado ao pino 5.
  delay(1000);            // Aguarda po 1 segundo.  
  digitalWrite(4, HIGH);  // Liga o Led conectado ao pino 4.
  delay(1000);            // Aguarda po 1 segundo.
  digitalWrite(4, LOW);   // Desliga o Led Conectado ao pino 4.
  delay(1000);            // Aguarda po 1 segundo.  
  digitalWrite(3, HIGH);  // Liga o Led conectado ao pino 3.
  delay(1000);            // Aguarda po 1 segundo.
  digitalWrite(3, LOW);   // Desliga o Led Conectado ao pino 3.
  delay(1000); 
  digitalWrite(2, HIGH);  // Liga o Led conectado ao pino 2.
  delay(1000);            // Aguarda po 1 segundo.
  digitalWrite(2, LOW);   // Desliga o Led Conectado ao pino 2.
  delay(1000);            // Aguarda po 1 segundo. 

}
