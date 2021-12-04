// 1. Configura PWM (Pin 5 como salida).
// 2. Con ayuda de PWM el Pin 5 debe de incrementar el porcentaje de ciclo útil del 0 al 100% en escalones
//    de 10%.

void setup() {
  // 1. 
  pinMode(5, OUTPUT);
}

void loop() {
  // ciclo de <=100
  for(int i=0; i<=100; i=i+10){
    // Enciende Pin de 0%-100% del ciclo
    analogWrite(5, 2.5 * i);
    delay(1000);
  }
  
}
