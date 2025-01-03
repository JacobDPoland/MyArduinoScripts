void setup(){
  // Initialize the serial communication at 9600 bits per second:
  Serial.begin(9600);

  while (!Serial) {
    ; // Wait for the serial port to be established
  }

  // Print "Hello, world!" once at startup:
  Serial.println("Hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:

}