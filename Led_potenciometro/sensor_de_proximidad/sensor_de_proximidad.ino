int trig = 10;
int eco = 9;
int led  = 3;
int duracion;
int distancia;

void setup(){
  pinMode(trig, OUTPUT);  //Pin de salida, emitira el sonido
  pinMode(eco, INPUT);    //Pin de entrada, recibira el sonido
  pinMode(led, OUTPUT);   //Pin de salida, encedera el led
  Serial.begin(9600);     //9600 es la taza de de velocidad de la comunicacios, cant de bits por seg que estaremos recibiendo
}

void loop(){
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  duracion = pulseIn(eco, HIGH);  //Lo que hace es devolver un valor de tiempo en microsegundos, que lo asignamos a la var duracion
  distancia = duracion / 58.2;    //valor constante especificado por el fabricante (no debe variar)
  Serial.println(distancia);
  delay(200);
  if(distancia <= 20 && distancia >= 0){
    digitalWrite(led, HIGH);
    delay(distancia * 10);        //esto hara que dependiendo de la distancia, el led parapadee mas lento o mas rapido si el objeto este serca
    digitalWrite(led, LOW);
  }
}
