#include <DHT11.h>
#include <NewPing.h>

#define led1_pin 6
#define led2_pin 5
#define led3_pin 3

#define Pot_Button_pin 7
#define Sonnar_Button_pin 8
#define DHT11_Button_pin 9

#define ECHO_PIN 10
#define TRIGGER_PIN 11
#define DHT11_pin 4
#define Pot_pin A0

#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
DHT11 sensor(DHT11_pin);


void PotCode(int potvalue) {
  ledreset();
  if (potvalue > 0) digitalWrite(led1_pin, 1);
  if (potvalue < 340) digitalWrite(led1_pin, 0);

  if (potvalue > 340) digitalWrite(led2_pin, 1);
  if (potvalue < 680) digitalWrite(led2_pin, 0);

  if (potvalue > 680) digitalWrite(led3_pin, 1);
  if (potvalue < 1020) digitalWrite(led3_pin, 0);
}

void DHT11Code(int temperature) {
  ledreset();
  if (temperature > 20) digitalWrite(led1_pin, 1);
  else if (temperature > 32) digitalWrite(led1_pin, 0);

  if (temperature > 32) digitalWrite(led2_pin, 1);
  else if (temperature > 40) digitalWrite(led2_pin, 0);

  if (temperature > 40) digitalWrite(led3_pin, 1);
  else if (temperature > 60) digitalWrite(led3_pin, 0);
}

void SonarCode(int sonarvalue) {
  ledreset();
  if (sonarvalue >= 0) digitalWrite(led3_pin, 0);
  if (sonarvalue <= 5) digitalWrite(led3_pin, 1);

  if (sonarvalue > 5) digitalWrite(led2_pin, 0);
  if (sonarvalue <= 10) digitalWrite(led2_pin, 1);

  if (sonarvalue > 10) digitalWrite(led1_pin, 0);
  if (sonarvalue < 20) digitalWrite(led1_pin, 1);
}

void ledreset() {

  digitalWrite(led1_pin, 0);
  digitalWrite(led2_pin, 0);
  digitalWrite(led3_pin, 0);
}

void setup() {

  pinMode(DHT11_pin, INPUT);

  pinMode(Pot_Button_pin, INPUT_PULLUP);
  pinMode(Sonnar_Button_pin, INPUT_PULLUP);
  pinMode(DHT11_Button_pin, INPUT_PULLUP);

  pinMode(led1_pin, OUTPUT);
  pinMode(led2_pin, OUTPUT);
  pinMode(led3_pin, OUTPUT);
}



void loop() {

  int potvalue = analogRead(Pot_pin);
  int temperature = sensor.readTemperature();
  int sonarvalue = sonar.ping_cm();

  if (digitalRead(Pot_Button_pin) == 0) {
    PotCode(potvalue);
  }

  if (digitalRead(DHT11_Button_pin) == 0) {
    DHT11Code(temperature);
  }

  if (digitalRead(Sonnar_Button_pin) == 0) {
    SonarCode(sonarvalue);
  }
}
