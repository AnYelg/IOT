// Ejercicio 4
// 1. Pin número 13 en modo digital.
// 2. Función donde la variable, definirá el estado de encendido y apagado del led.

void setup() {
  // 1
  pinMode(13, OUTPUT);
}

// Creación de función estado.
int estado(int variable){
  // Regreso de valor negado.
  return !variable;
}

void loop() {
  int variable = 0; 
  
  // Encendedido 
  digitalWrite(13, variable);
  delay(1000);

  // Llamando funcion estado y asiganandolo a variable.
  variable = estado(variable);

  // Apagado 
  digitalWrite(13, variable);
  delay(1000);
}
