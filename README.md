# 1 | Led Yakma  

<table>
  <tr>
     <td>
       <p align="center"> <img src="https://github.com/ThePherZ/Ardunio/assets/156532472/d48ff357-5daa-4b5b-8496-f415e7aab574" width="100%"></img>
    </td>
    <td width="100"> 
      
```python
    
void setup() {

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {

  digitalWrite(5,HIGH);
  delay(711);
  digitalWrite(5,LOW);
  delay(711);
  digitalWrite(6,HIGH);
  delay(711);
  digitalWrite(6,LOW);
  delay(711);
  digitalWrite(7,HIGH);
  delay(711);
  digitalWrite(7,LOW);
  delay(711);

}
```
    
  </td>
  </tr>
</table>

## 2 | Led Yakma (For Döngüsü)

<table>
  <tr>
     <td>
       <p align="center"> <img src="https://github.com/ThePherZ/Ardunio/assets/156532472/14a69cf6-3a9e-475d-86f5-626bbd0595f4" width="100%"></img>
    </td>
    <td width="100"> 
      
```python


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

```
  </td>
  </tr>
</table>
