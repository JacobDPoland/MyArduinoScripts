#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("https://www.youtube.com/shorts/KKlT6kReCZs");
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.press(KEY_KP_ENTER);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}
