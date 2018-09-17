// Leonard Lo - Copyright 2018

#include "app.h"

int sw_state = LOW;

void setup() {
  Particle.variable("switch1", sw_state);
  pinMode(SW1, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
}


void loop() {
  sw_state = digitalRead(SW1);
  digitalWrite(LED1, sw_state);
  delay(100);
}
