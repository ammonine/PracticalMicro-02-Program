#include <Arduino.h>

int length = 100;
int width = 3;
int area;

void blinkLed(int times);

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  blinkLed(10);
  delay(3000);
}

void blinkLed(int times){
  int count = 0;
  while(count < times){
    digitalWrite(LED_BUILTIN,HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN,LOW);
    delay(500);
    count++;
  }
}