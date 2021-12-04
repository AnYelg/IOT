void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  int value = digitalRead(2);
  digitalWrite(13, value);

}
