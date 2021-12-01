void setup() {
  pinMode(5, OUTPUT); //LED
  pinMode(3, INPUT); //DIPSWITCH

}
int state = 0;
void loop() {
  int value = digitalRead(3);

  if (value == HIGH){
    delay(100);

    if (value == LOW){
      state = state + 10;
      
      if(state >= 100){
        state = 0; 
      }
      analogWrite(5, 2.5*state);
    }
  }

}
