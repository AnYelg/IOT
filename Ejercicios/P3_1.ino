// 1. Configura el monitor serial a 9600 baudios.
// 2. Mediante el monitor serial envía el texto Hola Mundo.

void setup() {
  // Configuración monitor
  Serial.begin(9600);
}

void loop() {
  // Imprimir texto 
  Serial.println("Hola Mundo");
  delay(1000);
}
