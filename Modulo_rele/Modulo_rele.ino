int RELE = 2;
/*Recomendacion: no usar el rele en un continuo apagado y encendido ya que llevara a un desgaste del mecanismo,
 * fijarse cuantos ampers aguanta el rele, no trabajar con mayor tension de la indicada
 */

void setup(){
  pinMode(RELE, OUTPUT);
}

void loop(){
  digitalWrite(RELE, LOW);
  delay(5000);
  digitalWrite(RELE, HIGH);
  delay(5000);
}
