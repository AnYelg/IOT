// 1. Configuren el Pin número 12, 13 en modo digital. 
// 2. Enciéndelos y apágalos.

void setup() {
  //Pin 13 como salida.
  pinMode(13, OUTPUT);
  // Pin 12 como salida.
  pinMode(12, OUTPUT);
}

void loop() {
  // Encendedido Pin 13.
  digitalWrite(13, HIGH);
  // Apagado Pin 12.
  digitalWrite(12, LOW);
  delay(1000);

  // Apagado Pin 13.
  digitalWrite(13, LOW);
  // Encendedido Pin 12.
  digitalWrite(12, HIGH);
  delay(1000);
}
