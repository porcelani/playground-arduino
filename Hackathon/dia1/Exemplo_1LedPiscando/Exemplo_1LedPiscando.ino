/*
 Pisca LED
Faz o led acender e apagar em intervalos de 1 segundo
*/// O pino 53 tem um led conectado (é usado um resistor de 200 Ohms para limitar a corrente)
int led= 51;
void setup() {
  // put your setup code here, to run once:
 pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH); // Coloca o pino 53 em nível lógico alto e acende o led
 delay(1000); // Pausa a excução do programa em 1 segundo ( 1000 ms )
 digitalWrite(led, LOW); // Coloca o pino 53 em nível lógico baixo e apaga o led
 delay(1000); // Pausa a excução do programa em 1 segundo ( 1000 ms )
  
}
