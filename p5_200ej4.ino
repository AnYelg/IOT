// 1. Configura el pin 3 y 4 como entrada y el pin 13, 12, 11, 10 y 9 como salida.
// 2. Al activar el switch deslizable 1 los leds deben de encender de derecha a izquierda, al activar el switch
//    deslizable 2 los leds deben de prender de izquierda a derecha. Si ambos son activados los leds deben de parpadear.
  


// 1. 
void setup() {

  pinMode(13, OUTPUT);  
  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);    
}

void loop() {
  // Condicional
  if(digitalRead(2)==HIGH && digitalRead(3)==LOW){
   // Bucle encendido y apagado Pines --> i. 
   for(int i = 13; i>=9; i--){
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(50);
    }
  }

  if(digitalRead(2)==LOW && digitalRead(3)==HIGH){
    // Bucle encendido y apagado
    for(int i = 9; i<=13; i++){
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(50);
    }
  }

  if(digitalRead(2)==HIGH && digitalRead(3)==HIGH){
    for(int i = 9; i<=13; i++){
    digitalWrite(i, HIGH);
    }
    delay(100);
    for(int i = 9; i<=13; i++){
    digitalWrite(i, LOW);
    }
    delay(100);
  }
}
