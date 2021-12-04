// 1. Configura PWM (Pin 6 como salida).
// 2. Configura el monitor serial a 9600 baudios.
// 3. Crea una variable que leerá el valor por el monitor serial. 
// 4. Esta variable indicará el porcentaje de ciclo útil del Pin 6.

void setup() {
  pinMode(6, OUTPUT);// 1. 
  Serial.begin(9600);
}

int variable = 0; 

void loop() {
  // Envia información solo cuando es recibida la información.
  if (Serial.available() > 0) {
    // Lectura Dato Puerto serial de dato entero.
    variable = Serial.parseInt();
  }

  // Enciende Pin 6 0%-100% del ciclo.
  analogWrite(6, 2.5 * variable);
}
