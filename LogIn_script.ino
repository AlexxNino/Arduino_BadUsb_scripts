
#include "Keyboard.h"
void setup() {
  // put your setup code here, to run once:
  
  
  delay(4000); //added delay here to avoid skipped lines on first time use machines
Keyboard.begin();
  delay(2000);
  Keyboard.print("Username"); //put username here
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
