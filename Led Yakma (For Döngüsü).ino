#include <Arduino.h>
void setup() {

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  digitalWrite(5,HIGH);
  delay(711);
  digitalWrite(5,LOW);
}
void loop() {
  
  for(int A = 6 ; A < 9; A++){

  digitalWrite(A,HIGH);
  delay(711);
  digitalWrite(A,LOW);

  }

  for(int B = 9; B > 4; B--){
  
  digitalWrite(B,HIGH);
  delay(711);
  digitalWrite(B,LOW);
    
  }
}