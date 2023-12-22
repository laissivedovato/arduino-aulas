//SENSOR DE LUZ, SENSOR LDR, FOTORESISTOR
//LDR - Light dependent resistor
#include <Arduino.h>
#define ldr A0
#define led 2
int vlrd= 0;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vlrd=analogRead(ldr);
  if(vlrd<300) {
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  Serial.println(vlrd);
  delay(200);
}

