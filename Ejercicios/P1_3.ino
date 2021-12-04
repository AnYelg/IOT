// Ejercicio 3
// 1. Pin número 13 en modo digital.
// 2. Configura una variable, la cual será la que defina el estado de encendido y apagado del led.
// 3. Enciéndalo y apágalo.


void setup() {
  //1. 
  pinMode(13, OUTPUT);
}
// 2 - 3.
void loop() {
  int variableEncendido = 0; 
  int variableApagado = 1; 
  
  // Encendedido.
  digitalWrite(13, variableEncendido);
  delay(1000);
  
  // Apagado 
  digitalWrite(13, variableApagado);
  delay(1000);
}
