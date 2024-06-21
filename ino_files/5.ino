#define pot A0
int potstate = 0;

void setup() {
  pinMode(pot, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  potstate = analogRead(pot) + 1;
  Serial.println(potstate);
  delay(100);


  if (potstate > 1) {
    digitalWrite(3, HIGH);
  } else if (potstate < 170) {
    digitalWrite(3, LOW);
  }

  if (potstate > 170) {
    digitalWrite(4, HIGH);
  } else if (potstate < 340) {
    digitalWrite(4, LOW);
  }

  if (potstate > 340) {
    digitalWrite(5, HIGH);
  } else if (potstate < 510) {
    digitalWrite(5, LOW);
  }

  if (potstate > 510) {
    digitalWrite(6, HIGH);
  } else if (potstate < 680) {
    digitalWrite(6, LOW);
  }

  if (potstate > 680) {
    digitalWrite(7, HIGH);
  } else if (potstate < 850) {
    digitalWrite(7, LOW);
  }

  if (potstate > 850) {
    digitalWrite(8, HIGH);
  } else if (potstate < 1024) {
    digitalWrite(8, LOW);
  }
}