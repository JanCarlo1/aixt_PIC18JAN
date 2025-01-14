// Project Name: Aixt project https://gitlab.com/fermarsan/aixt-project.git
// File Name: Push_Botton.ino
// Author: Fernando Martínez Santa - Stiven Cortazar Cortazar - Yesid Reyes Tique
// Date: 2022-2024
// License: MIT
//
// // Description: Input Push Botton, Ouput Digital functions (Ai-Thinker_Ai-WB2-32S-Kit)
//              (PC port) 

void setup() {
  pinMode(3, INPUT_PULLDOWN);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  static int contador = 0;
  static int pulsadorAnterior = HIGH;

  if (digitalRead(3) == LOW && pulsadorAnterior == HIGH) {
    contador++;
    if (contador > 7) {
      contador = 0;
    }

    digitalWrite(4, contador & 0b001);
    digitalWrite(5, (contador >> 1) & 0b001);
    digitalWrite(12, (contador >> 2) & 0b001);
    delay(200);
  }
  pulsadorAnterior = digitalRead(3);
}