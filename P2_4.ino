// 1. Configuren todos los pines posibles en modo digital .
// 2. Resuelve el ejercicio 2 y ejercicio 3 usando funciones y la estructura de repetición while.


// configuracion de pines como salida 
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// Creación función parpadear.
void parpadearFor(int NumeroPin1, int NumeroPin2){
  // Bucle encendido y apagado Pin seleccionado 1 - 2                                                            
  for(int i=0; i<3; i++){
    digitalWrite(NumeroPin1, HIGH);
    digitalWrite(NumeroPin2, HIGH);
    delay(300);

    // Apagado Pin 1 - 2
    digitalWrite(NumeroPin1, LOW);
    digitalWrite(NumeroPin2, LOW);
    delay(300);
  }
}

void loop() {
  // Encendedido Pinnes 
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  // función parpadear Pin 12, Pin 10.
  parpadearFor(12, 10);

  // Apagado de pines 
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  // Llamado función parpadear Pin 12, Pin 10.
  parpadearWhile(12, 10);
}
