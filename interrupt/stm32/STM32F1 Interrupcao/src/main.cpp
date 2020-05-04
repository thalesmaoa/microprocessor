#include <Arduino.h>

// #ifndef LED_BUILTIN
//   #define LED_BUILTIN PC13
// #endif
//
// int pin_out = PB6;
//
// void setup()
// {
//   // initialize LED digital pin as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
//   pinMode(pin_out, OUTPUT);
// }
//
// void loop()
// {
//   // turn the LED on (HIGH is the voltage level)
//   digitalWrite(pin_out, HIGH);
//   // wait for a second
//   delay(5);
//   // turn the LED off by making the voltage LOW
//   digitalWrite(pin_out, LOW);
//    // wait for a second
//   delay(5);
// }

uint8_t pin_out = PB6; // Arduino nano
uint8_t pin_Interrup = PB5; // Arduino nano

void isr_Interruption();

void setup() {
  // Adjust pin as output
  pinMode(pin_out, OUTPUT);
  pinMode(pin_Interrup, INPUT_PULLUP);

  // Attach interrupt to the pin
  attachInterrupt(digitalPinToInterrupt(pin_Interrup), isr_Interruption, FALLING);
}

void loop() {

}

// We now configure what happens the external interruption is generated
void isr_Interruption(){
  digitalWrite(pin_out, !digitalRead(pin_out) );
}
