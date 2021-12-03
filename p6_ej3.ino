// Ejercicio 3


void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {

  int val = analogRead(A0);
  if(val < 190 ){
    digitalWrite(13, HIGH);
    for(int i=8; i<13; i++){
      digitalWrite(i, LOW);
    }
  }

  
  if(val >190 && val < 190*2 ){
   
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    for(int i=8; i<12; i++){
      
      digitalWrite(i, LOW);
    }
  }
  
  
  if(val >190*2 && val < 190*3){
   
    digitalWrite(13, HIGH);
    
    digitalWrite(12, HIGH);
    
    digitalWrite(11, HIGH);
    
    for(int i=8; i<11; i++){
     
      digitalWrite(i, LOW);
    }  
  }

  if(val > 190*3 && val < 190*4){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);

    for(int i=8; i<10; i++){
 
      digitalWrite(i, LOW);
    }
  }

  if(val > 190*4 && val < 190*5){

    for(int i=9; i<=13; i++){
 
      digitalWrite(i, HIGH);
    }

    digitalWrite(8, LOW);
  }
  
  if(val > 190*5 && val < 190*6){
    for(int i=8; i<=13;i++){
      digitalWrite(i, HIGH);
    }
  }
}
