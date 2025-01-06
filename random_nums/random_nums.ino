void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(A0));

  Serial.println("Random seed set using micros()");
}

void loop() {
  long rndValue = random(2); // 0..1
  Serial.println(rndValue);
  delay(500);
}
