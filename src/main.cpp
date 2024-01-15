//MOTOR DC - DIODO 3
#include <Arduino.h>
#define pot A0
#define motor 3
#define time 10
int valpot;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(pot,INPUT);
  valpot=0;
}

void loop() {
  valpot=map(analogRead(pot), 0, 1023, 0, 255);
  analogWrite(motor, valpot);
  delay(time);
}
