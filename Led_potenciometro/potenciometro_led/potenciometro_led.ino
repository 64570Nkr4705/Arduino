void setup(){
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop(){
  int val = analogRead(A0);
  int intensity = map(val, 0,1023, 0, 255);
  analogWrite(11, intensity);
}
