int Y = 9;

void setup() {
 
  pinMode(Y,OUTPUT);

}

void loop() {
  analogWrite(Y,255);
  delay(777);
  analogWrite(Y,100);
  delay(777);
  analogWrite(Y,0);
  delay(777);
}