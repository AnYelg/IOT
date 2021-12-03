// 1. Configura el monitor serial a 9600 baudios.
// 2. Crea una variable que comience en 0 y que se vaya incrementando hasta llegar al número 20 y muestre
//    por el monitor serial este incremento.
// 3. Al llegar al número 20 el LED del pin 13 debe parpadear 3 veces. 4. Utiliza estructuras de repetición y funciones.

void setup() {
  // Configuración monitor
  Serial.begin(9600);
  // Pin 13 como salida.
  pinMode(13, OUTPUT);
}

// función serialText.
void serialText(){
  int variable = 0; //variable de incremento while.
  
  // Bucle definido <20
  //nt: imprime contador por puerto serial.
  while (variable < 20){
    Serial.println(variable);// Imprimir variable mediante monitor serial.
    delay(500);
    variable++;
  }
}

// Creación función ledparpadeante.
void ledparpadeante(int parpadeo){
  Serial.println("El led esta parpadeando"); // Imprimir texto en monitor serial.
  
  // Bucle encendido y apagado 
  for( int i=0; i<parpadeo; i++ ){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
}

void loop() {
  // Llamado función serialText.
  serialText();
  // Llamado función ledparpadeante Pin 13
  ledparpadeante(5); //5 repeticiones.

}
