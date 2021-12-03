// Ejercicio 2
// 1. Pin número 13 en modo digital. 
// 2. Enciéndalo y apágalo.

void setup() {
  // 1. 
  pinMode(13, OUTPUT);
}

void loop() {
  // 2. Encendedido
  digitalWrite(13, HIGH);
  delay(1000);
  
  // 2. Apagado
  digitalWrite(13, LOW);
  delay(1000);
}
