// Ejercicio 1
// Con ayuda de tu profesor:


void setup() {
  
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);    

  Serial.println(val, DEC);

  delay(500);
