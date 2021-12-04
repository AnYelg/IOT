// Programa la funcionalidad de un semáforo, utiliza funciones y estructuras de repetición.

//Utilizando codigos anteriores para hacer los 3 pines de un semaforo 
void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
  // Configuracion Pin 12 como salida.
  pinMode(12, OUTPUT);
  // Configuracion Pin 11 como salida.
  pinMode(11, OUTPUT);
}

// Se agrega para determinar el color 
void loop() {
  // Verde - Pin 13.
  digitalWrite(13, HIGH);
  // Apagado Pin 12.
  digitalWrite(12, LOW);
  // Apagado Pin 11.
  digitalWrite(11, LOW);
  delay(1000);

  // Amarillo
  // Apagado Pin 13.
  digitalWrite(13, LOW);
  // Bucle encendido y apagado Pin 12.
  for (int i = 0; i <= 3; i++) {  
    // Encendedido Pin 12.
    digitalWrite(12, HIGH);
    delay(300);
    // Apagado Pin 12.
    digitalWrite(12, LOW);
    delay(300);
  }
  
  // Rojo
  // Encendedido Pin 11.
  digitalWrite(11, HIGH);
  delay(1000);
}
