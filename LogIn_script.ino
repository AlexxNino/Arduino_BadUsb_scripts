
#include "Keyboard.h"
void setup() {
  // put your setup code here, to run once:
  
Keyboard.begin();
  delay(4000); //increased delay? sometimes usb skips first print? on first time use on particular pc?
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
