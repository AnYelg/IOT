// Ejercicio 2
// Con ayuda de tu profesor:


void setup() {
  // Configuracion Pin 3 como salid
  pinMode(3, OUTPUT);

void loop() {

  int val = analogRead(A0); 
  
  analogWrite(3, (val*.0989*2.5));

  delay(500);
