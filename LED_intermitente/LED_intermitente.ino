void setup (){
  //pinMode colocando el nro de pin al que queremos configurar y luego si va a ser de entrada o salida
  pinMode(13, OUTPUT);
}

void loop(){
  //digilWrite coloca un valor alto en el pin seleccionado, con HIGH pasa el led a 1 lo que equivale a encendido
  digitalWrite(13, HIGH);
  //ahora debemos agragar una espera para verlo
  //delay se mide en milisegundos, por ende 1 seg va a ser eqivalente a 1000 ms 
  //delay(1000);
  //ahora nuestro led queda encendido por 1 seg, por lo tanto debemos apagarlo utilizando digitalWrite nmuevamente
  //colocando LOW como parametro, esto hace que el led pase a un nivel logico de 0 lo que equivale a apagado
  //digitalWrite(13, LOW);
  //luego con delay diremnos que se demore 1 seg en apagado, y se reinicie el bucle nuevamente
  //delay(1000);
}
