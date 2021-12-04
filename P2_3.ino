// 1. Configuren todos los pines posibles en modo digital.
// 2. Los LEDs pares deben de parpadear, mientras que los impares solo deben permanecer encendidos.

// configuracion de pines como salida 
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// función parpadear.
void parpadear(int pinNumber){
  // Bucle encendido y apagado Pin seleccionado.
  for (int i = 0; i <= 3; i++) {  
    // Encendedido Pin seleccionado.
    digitalWrite(pinNumber, HIGH);
    delay(300);

    // Apagado Pin seleccionado.
    digitalWrite(pinNumber, LOW);
    delay(300);
  }
}
// (encendido y apagado) 
void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  parpadear(12)
  

  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  parpadear(10)


  digitalWrite(9, HIGH);
  delay(1000);
}
