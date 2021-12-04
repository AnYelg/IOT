// Ejercicio 1:
// 1. Configuren el Pin número 13 en modo digital .
// 2. Enciéndalo.

void setup() {
  // 1. 
  pinMod(13, OUTPUT);
}

void loop() {
  // 2. 
  digitalWrite(13, HIGH);
  //1segundo = 1000msegundo
  delay(1000);
}
