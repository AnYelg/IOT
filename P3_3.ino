// 1. Configura el monitor serial a 9600 baudios.
// 2. Toma el ejercicio anterior y cambia la estructura de repetición utilizada. Si utilizaste for cámbialo por
// while, y viceversa.


// --------------- utilizar codigos anteriores P3.2 ------------------
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
    //variable++;
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

//-------------------------------------- nuevo - cambio while 
  
  
  
// Creación función ledparpadeante.
void ledparpadeante(int parpadeo){
  Serial.println("El led esta parpadeando");
  
  int variable = 0;

  while (variable < parpadeo){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    variable++;
  }
}

void loop() {
  serialText();
  // Llamado función ledparpadeante Pin 13, 5 repeticiones.
  ledparpadeante(5);
}
