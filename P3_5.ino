// 1. Configura el monitor serial a 9600 baudios.
// 2. Crea una variable que registre un valor introducido por el puerto serial.
// 3. Crea un contador que vaya de 0 al valor ingresado y que se muestre por pantalla en el monitor serial. 
// 4. Al llegar al número introducido el LED del pin 13 debe parpadear el valor ingresado.
// 5. Utiliza estructuras de repetición y funciones.


//Reutilizar codigo de practicas pasadas 
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

// Creación función serialText.
void serialText(int contador){
  for( int i=0; i<contador; i++ ){
    Serial.println(i);
    delay(500);
  }
}

void ledparpadeante(int parpadeo){
  Serial.println("El led esta parpadeando");
  
  for( int i=0; i<parpadeo; i++ ){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
}

// CODIGO NUEVO, PUNTO 5 
void loop() {
  // Envia información solo cuando es recibida la información.
  if (Serial.available() > 0) {
    // Lectura Dato Puerto serial de dato entero.
    int data = Serial.parseInt();
    
    // Llamado función serialText.
    serialText(data)
    // Llamado función ledparpadeante Pin 13, 5 repeticiones.
    ledparpadeante(5);
    }
  }
}
