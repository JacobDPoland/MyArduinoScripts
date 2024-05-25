#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("cmd");
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(500);
  
  Keyboard.println("curl -L -o ScreamingGoat.mp3 https://github.com/JacobDPoland/MyArduinoScripts/raw/master/goat_scream/GoatScream.mp3");
  delay(1000 * 3);

  Keyboard.println("start ScreamingGoat.mp3\nexit");
  delay(1000 * 7);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {

}
