#include <Arduino.h>


uint8_t pin_out = 27; // Arduino nano
uint8_t pin_Interrup = 26; // Arduino nano

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
