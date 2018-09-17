

int sw1 = D1;
int led1 = D7;
int sw_state = LOW;

void setup() {

  pinMode(sw1, INPUT_PULLUP);
  pinMode(led1, OUTPUT);

}


void loop() {
  
  sw_state = digitalRead(sw1);
  digitalWrite(led1, sw_state);

  delay(100);

}
