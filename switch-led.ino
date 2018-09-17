// Leonard Lo - Copyright 2018

#include "app.h"

int sw_state = LOW;
int last_sw_state = LOW;

void setup() {
  Particle.variable("switch1", sw_state);
  
  pinMode(SW1, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
}


void loop() {
  sw_state = digitalRead(SW1);    // monitor switch1
  digitalWrite(LED1, sw_state);   // reflect switch1 state to LED1

  if(sw_state != last_sw_state) {   // if we detect state change
    last_sw_state = sw_state;       // update stored state

    String str_state;
    if(sw_state) str_state = "ON";  // gen string value for state
    else str_state = "OFF";

    Particle.publish("switch1-state", str_state, PRIVATE);
  }
  delay(250);   // limite max state changes to 4/sec
}
