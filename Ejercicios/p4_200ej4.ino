void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  analogWrite(3, 2.5*15);
  analogWrite(5, 2.5*30);
  analogWrite(6, 2.5*50);
  analogWrite(9, 2.5*65);
  analogWrite(10, 2.5*80);
  analogWrite(11, 2.5*100);
}
