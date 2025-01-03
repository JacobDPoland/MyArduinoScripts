void setup() {
  Serial.begin(9600);

  // Wait for the user or the host to do something "unpredictable" in time
  // delay(random(10, 200)); // Arbitrary; just to shift timing slightly

  // Use the current time in microseconds as seed
  randomSeed(micros());

  Serial.println("Random seed set using micros()");
}

void loop() {
  long rndValue = random(2); // 0..1
  Serial.println(rndValue);
  delay(500);
}
