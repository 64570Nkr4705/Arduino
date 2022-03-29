int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;


void setup (){
  //se debe establecer los pines de entrada o salida
  pinMode(PULSADOR, INPUT); //pin 2 como entrada
  pinMode(LED, OUTPUT); //pin 3 como salida
}


void loop(){
  while(digitalRead(PULSADOR) == LOW){  //espero a que el pulsador se presione
    
  }
  digitalWrite(LED, HIGH);
  delay(5000);
  digitalWrite(LED, LOW);
  while(digitalRead(PULSADOR) == HIGH){ //antirebote
    
  }
}
