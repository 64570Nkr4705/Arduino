#include <Servo.h>

Servo servo1; //al escribir Servo y darle un objeto variable obtendremos todas sus funciones relacionadas

int PINSERVO = 2;
//los valores a continuacion son aproximados, se debe buscar el punto exacto donde el servo se encuentre a 0° y 180°
//esto se puede observar tomando el servo con las manos y se persivira una bibracion cuando este en su tope maximo
int PULSOMIN = 1000;  //esta expresado en ms(milesegundos) equivale a 0°
int PULSOMAX = 2000;  //espresado en ms(milisegundos) equivale a 180°
int VALORPOT;
int ANGULO;
int POT;

void setup(){
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX);  //sirve para inicializar al servo,esta funcion requiere que los valores esten en ms
}

void loop(){
  /*servo1.write(0);    //se encarga de posicionar al servo a 0°
  delay(5000);        //luego de 5 seg
  servo1.write(180);  //posiciona el servo a 180°
  delay(5000);        //luego pasan 5 segundos mas*/
  VALORPOT = analogRead(POT);
  //map convierte un valor especifico en un rango que puede tomar la variable, y los dos ultimos parametros son al rango que debe convertirse
  ANGULO = map(VALORPOT, 0, 1023, 0, 180);
  servo1.write(ANGULO);
  delay(20);  //este valor debe incrementarse dependiendo de la fuerza que deba hacer o del giro completo o no
}
