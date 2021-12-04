// 1. Configura todos lo pines de PWM (Pin 3, 5, 6, 9, 10 y 11 como salida). 
// 2. Con ayuda de PWM enciende:
//   a.  Pin 3 al 15% 
//   b.  Pin 5 al 30% 
//   c.  Pin 6 al 50% 
//   d.  Pin 9 al 65% 
//   e.  Pin 10 al 80% 
//   f.  Pin 11 al 100%

// 1. 
void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
// 2. 
void loop() {
  analogWrite(3, 2.5 * 15); //a
  analogWrite(5, 2.5 * 30); //b 
  analogWrite(6, 2.5 * 50); //c
  analogWrite(9, 2.5 * 65); //d 
  analogWrite(10, 2.5 * 80); //e 
  analogWrite(11, 2.5 * 100); //f
}
