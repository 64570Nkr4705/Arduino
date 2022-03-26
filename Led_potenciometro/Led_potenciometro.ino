int LED = 3;
int BRILLO;
int POT = 0;

void setup(){
  pinMode(LED, OUTPUT); 
  //las entradas analogicas no requieren inicializacion
}

void loop(){
  /*analogWrite(LED, 0-255) //255 equivale a 5 volt
  for(BRILLO = 0; BRILLO < 256; BRILLO++){  //1ra cond variable inicializada; 2da cond mientras sea verdadera seguira ejecutando; 3ra incrmento
    analogWrite(LED, BRILLO);
    delay(15);
  }

  for(BRILLO = 255; BRILLO >= 0; BRILLO--){  //1ra cond variable inicializada; 2da cond mientras sea verdadera seguira ejecutando; 3ra incrmento
    analogWrite(LED, BRILLO);
    delay(15);
  }*/
  //el rango de valores para la entrada analogica es de 0 a 1023
  //la salida PWM es de 0 a 255
  BRILLO = analogRead(POT) / 4; //Se divide 1023 entre 4 para obtener el valor de 0-255
  analogWrite(LED, BRILLO);
}
