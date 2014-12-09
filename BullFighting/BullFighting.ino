//モーター制御
const int run_motorA = 12;
const int run_motorB = 13;
const int run_PWM_mot = 10;

const int value;

void setup() {
  pinMode(run_motorA, OUTPUT);
  pinMode(run_motorB, OUTPUT);
}

void run(int value) {
  switch (value) {
  case 0:
    //forward
    digitalWrite(run_motorA, HIGH);
    digitalWrite(run_motorB, LOW);
    break;
  case 1:
    //back
    digitalWrite(run_motorA, LOW);
    digitalWrite(run_motorB, HIGH);
    break;
  }
}

void loop() {
  value = Serial.read();
  run(value);
}


