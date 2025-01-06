#include <Keyboard.h>

// link strings
String links[] = {
  "https://www.youtube.com/watch?v=MrabnIbjbTo",
  "https://www.youtube.com/watch?v=dQw4w9WgXcQ",
  "https://www.youtube.com/watch?v=7q7wAABkdaQ",
  "https://www.youtube.com/watch?v=YUZJ3_kO8ok",
  "https://www.youtube.com/watch?v=F-X4SLhorvw",
  "https://www.youtube.com/watch?v=uqsu21a54ww",
  "https://www.youtube.com/watch?v=_6XGXAMgBNw",
  "https://www.youtube.com/watch?v=La44ebRSy-Y",
  "https://www.youtube.com/watch?v=7n812BXT0hs",
  "https://www.youtube.com/watch?v=zp5e4K_Ve3A",
  "https://www.youtube.com/watch?v=f8mL0_4GeV0",
  ""  // need empty string as last item so counting is automatic
};

int get_links_len(){
  int i = 0;
  while (links[i] != ""){
    i++;
  }
  return i;
}

void press_GUI_key() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(500);
}

void type_string(String string){
  Keyboard.print(string);
  Keyboard.releaseAll();
}

void setup() {
  // Serial.begin(9600);
  // while (!Serial) {
  //   ; // Wait for the serial port to be established
  // }

  // randomSeed(micros());  // random wasn't working with this
  randomSeed(analogRead(A0));
  
  Keyboard.begin();
  delay(500);
  
  press_GUI_key();

  int links_len = get_links_len();
  int link_num = random(links_len);

  // Serial.print(links_len);
  // Serial.print(" ");
  // Serial.print(link_num);
  // Serial.print("\n");

  type_string(links[link_num]);
  delay(1000);
  
  Keyboard.press(KEY_KP_ENTER); 
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}


