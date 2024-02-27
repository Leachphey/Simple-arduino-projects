int dimled = A4;
void setup()
{

  pinMode(dimled, INPUT);
  Serial.begin(9600);

}

void loop()
{

  Volt5Moni = (5./1023.) * (analogRead(dimled));
  Serial.println(Volt5Moni);
  delay(777);

}
