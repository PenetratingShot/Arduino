/*
  * Push button get LED
  * Not Rocket Mortgage
*/

const int buttonPinCom = 3; // wht pin the button is connected to
const int ledPin = 9; // conneted to pin 9

int buttonPowa = 0; // 0 = button isn't pressed

void setup() {
  // set led as OUTPUT
  pinMode(ledPin, OUTPUT);
  // set button as INPUT
  pinMode(buttonPinCom, INPUT);
}

void loop() {
  // detect button push
  digitalRead(buttonPowa);
  
  // what to do if button is pressed
  if (buttonPowa == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
