#include <Keyboard.h>

// link strings
char* fork_knife = "https://www.youtube.com/watch?v=MrabnIbjbTo";
char* rick_roll = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

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
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(500);
  
  press_GUI_key();

  type_string(rick_roll);
  delay(1000);
  
  Keyboard.press(KEY_KP_ENTER); 
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}


