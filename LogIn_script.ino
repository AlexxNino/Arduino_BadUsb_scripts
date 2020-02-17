
#include "Keyboard.h"
void setup() {
  // put your setup code here, to run once:
  
Keyboard.begin();
  delay(1000);
  Keyboard.print("Username"); //put username here or put nothing if just for pass
  delay(1000);
  Keyboard.write(KEY_TAB); 
  delay(1000);
  Keyboard.print("Password"); //put pass here
  delay(1000);
  Keyboard.write(KEY_RETURN);   
  Keyboard.end();

}

void loop() {
  // put your main code here, to run repeatedly:

}
