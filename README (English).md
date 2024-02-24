# 1 | Led Lighting

<table>
  <tr>
     <td width="60%">
       <p align="center"> <img src="README/1.png" ></img>
    </td>
    <td width="50%"> 
      
```c++
    
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

# 2 | Led Lighting (For Loop)

<table>
  <tr>
     <td width="60%">
       <p align="center"> <img src="README/2.png"></img>
    </td>
    <td width="50%"> 
      
```c++


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


Translation from DeepL