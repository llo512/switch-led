#include "app.h"

// int sw1 = D1;
// int led1 = D7;
int sw_state = LOW;

void setup() {

  pinMode(SW1, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);

}


void loop() {

  sw_state = digitalRead(SW1);
  digitalWrite(LED1, sw_state);

  delay(100);

}
