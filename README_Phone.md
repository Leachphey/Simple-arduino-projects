<h1 align="center">Arduino Sample code</h1>
<div align="center">

  
[Turkish](README.tr.md) | [PC Version](README.md) 

</div>

<br>
<br>
<br>

# 1 | Led operation (Simple)


  <tr> 
    <p align="center"> <img src="README/1.png" ></img> 
    
```ino
void setup() {

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {

  digitalWrite(5, HIGH);
  delay(711);
  digitalWrite(5, LOW);
  delay(711);
  digitalWrite(6, HIGH);
  delay(711);
  digitalWrite(6, LOW);
  delay(711);
  digitalWrite(7, HIGH);
  delay(711);
  digitalWrite(7, LOW);
  delay(711);
}
```
  </tr>

# 2 | Led operation (For loop)


  <tr>
       <p align="center"> <img src="README/2.png"></img>
      
```ino
void setup() {

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  digitalWrite(5, HIGH);
  delay(711);
  digitalWrite(5, LOW);
}
void loop() {

  for (int A = 6; A < 9; A++) {

    digitalWrite(A, HIGH);
    delay(711);
    digitalWrite(A, LOW);
  }

  for (int B = 9; B > 4; B--) {

    digitalWrite(B, HIGH);
    delay(711);
    digitalWrite(B, LOW);
  }
}
```
  </tr>


# 3 | Changing the intensity of the led with analog input

  <tr>
   <p align="center"> <img src="README/3.png" ></img>
      
```ino
int Y = 9;

void setup() {

  pinMode(Y, OUTPUT);
}

void loop() {
  analogWrite(Y, 255);
  delay(777);
  analogWrite(Y, 100);
  delay(777);
  analogWrite(Y, 0);
  delay(777);
}
}
```
  </tr>


# 4 | LED operation with button  


  <tr>
       <p align="center"> <img src="README/4.png" ></img>
      
```ino
const int button = 9;
int buttonState = 0;

void setup() {
  pinMode(button, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  buttonState = digitalRead(button);
  Serial.println(buttonState);
  delay(100);


  if (buttonState == HIGH) {
    for (int x = 8; x >= 3; x--) {
      digitalWrite(x, HIGH);
      delay(77);
    }

    for (int y = 8; y >= 3; y--) {

      digitalWrite(y, LOW);
      delay(77);
    }

    for (int z = 3; z <= 8; z++) {
      digitalWrite(z, HIGH);
      delay(77);
    }

    for (int f = 3; f <= 8; f++) {

      digitalWrite(f, LOW);
      delay(77);
    }
  }
}

```
  </tr>


# 5 | Led control with potentiometer  


  <tr>
       <p align="center"> <img src="README/5.png" ></img>
      
```ino
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

  potstate = analogRead(pot);
  potstate = map(potstate, 0, 1023, 0, 6);
  Serial.println(potstate);
  delay(100);



  if (potstate > 0) {
    digitalWrite(3, HIGH);
  } else if (potstate < 1) {
    digitalWrite(3, LOW);
  }

  if (potstate > 1) {
    digitalWrite(4, HIGH);
  } else if (potstate < 2) {
    digitalWrite(4, LOW);
  }

  if (potstate > 2) {
    digitalWrite(5, HIGH);
  } else if (potstate < 3) {
    digitalWrite(5, LOW);
  }

  if (potstate > 3) {
    digitalWrite(6, HIGH);
  } else if (potstate < 4) {
    digitalWrite(6, LOW);
  }

  if (potstate > 4) {
    digitalWrite(7, HIGH);
  } else if (potstate < 5) {
    digitalWrite(7, LOW);
  }

  if (potstate > 5) {
    digitalWrite(8, HIGH);
  } else if (potstate < 6) {
    digitalWrite(8, LOW);
  }
}
  
```
  </tr>






