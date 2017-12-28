int brightness = 120;   
int fadeAmount = 10;    
unsigned long currentTime;
unsigned long loopTime;
const int pin_A = 12;  // pin 12
const int pin_B = 11;  // pin 11
unsigned char encoder_A;
unsigned char encoder_B;
unsigned char encoder_A_prev=0;

void setup()  {
  
  pinMode(9, OUTPUT);// Pin 9 Saida
  pinMode(pin_A, INPUT);
  pinMode(pin_B, INPUT);
  currentTime = millis();
  loopTime = currentTime; 
} 

void loop()  {
 
  currentTime = millis();
  if(currentTime >= (loopTime + 5)){
    
    encoder_A = digitalRead(pin_A);    
    encoder_B = digitalRead(pin_B);   
    if((!encoder_A) && (encoder_A_prev)){
      
      if(encoder_B) {
      
        if(brightness + fadeAmount <= 255) brightness += fadeAmount;               
      }   
      else {
              
        
        if(brightness - fadeAmount >= 0) brightness -= fadeAmount;               
      }   

    }   
    encoder_A_prev = encoder_A;     
    
    
    analogWrite(9, brightness);   
   
    loopTime = currentTime;  
  }
  
                           
}
