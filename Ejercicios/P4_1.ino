// 1. Configura PWM (Pin 3 como salida).
// 2. Enciende el Pin 3 al 50% con ayuda de PWM.

void setup() {
  // 1. 
  pinMode(3, OUTPUT);
}

void loop() {
  // 2. 
  analogWrite(3, 25);
}
