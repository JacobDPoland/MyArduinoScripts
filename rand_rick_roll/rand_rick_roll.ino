#include <Keyboard.h>

// link strings
char* links[] = {
  "https://www.youtube.com/watch?v=MrabnIbjbTo",
  "https://www.youtube.com/watch?v=dQw4w9WgXcQ",
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

void type_string(char* string){
  Keyboard.print(string);
  Keyboard.releaseAll();
}

void setup() {

  randomSeed(micros());
  
  Keyboard.begin();
  delay(500);
  
  press_GUI_key();

  int links_len = get_links_len();
  int link_num = random(links_len);
  Serial.print(links_len);
  Serial.print(" ");
  Serial.print(link_num);
  Serial.print("\n");

  type_string(links[link_num]);
  delay(1000);
  
  Keyboard.press(KEY_KP_ENTER); 
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}


