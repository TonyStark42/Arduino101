/*
  this will Blink on board LED
  it is going to blink SOS
  
  you will need:
  Arduino Uno 
 */

void setup() {
  // pin 13 is the on board LED marked as "L" on the board as well as being a pin
  pinMode(13, OUTPUT);
}

void loop() {
// SOS = ---...---
  LongOn();
  LongOn();
  LongOn();
  ShortOn();
  ShortOn();
  ShortOn();
  LongOn();
  LongOn();
  LongOn();
}

void LongOn(){
  digitalWrite(13, HIGH);   // turn the LED on 
  delay(3000);              // wait 3 seconds
  digitalWrite(13, LOW);    // turn the LED off 
  delay(1000);              // wait 1 second
}

void ShortOn(){
  digitalWrite(13, HIGH);   // turn the LED on 
  delay(1000);              // wait for 1 second
  digitalWrite(13, LOW);    // turn the LED off
  delay(1000);              // wait for 1 second
}
