//FUNÇÃO CONSTRAIN -> determinar uma faixa de valor
//constrain(valor_lido, min_saida, max-saida);
//constrain(valor_lido_pot, 500, 800)
#include <Arduino.h>
#define pot A0

void setup( ){
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(constrain(analogRead(pot),500, 800));
  delay(250);
}
