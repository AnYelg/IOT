void setup() {
  pinMode(13, OUTPUT); //LED
  pinMode(12, OUTPUT); //LED
  pinMode(11, OUTPUT); //LED
  pinMode(3, INPUT); //DIPSWITCH
  pinMode(2, INPUT); //DIPSWITCH

}

void loop() {
  int value1 = digitalRead(2);
  int value2 = digitalRead(3);

  //NOT
  digitalWrite(13, !value1); // ! ayuda a negar

  //AND
  if (value1 == HIGH && value2 == HIGH){
    digitalWrite (12, HIGH);
  }
  else{
    digitalWrite (12, LOW);
  }

  //OR
  if (value1 == LOW && value2 == LOW){
    digitalWrite (11, LOW);
  }
  else{
    digitalWrite (11, HIGH);
  }

}
