#include "DigiKeyboard.h"
void setup() {

}

void loop() {

DigiKeyboard.sendKeyStroke(0); // bir tuş vuruşu gönderir
DigiKeyboard.println("ATTiny85"); //yazi yazdirir
DigiKeyboard.delay(1000); // bekleme 

}
