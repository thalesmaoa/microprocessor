#include <Arduino.h>

void setup() {
  // We must first desable all interruption to pass through configuration correctly
  cli(); // disable global interrupts:

  // We define INT0 as input - Pin:D2 Arduino - PD2
  DDRD &= ~(1 << DDD2); // Low

  // We put the pin as pull up
  PORTD |= (1 << PORTD2); // High

  // Enable interruption
	EIMSK |= (1 << INT0); // Pino 19
  // Ajustamos o pino para ativar na descida já que existe um pull-up em hardware
  EICRA |= (1 << ISC01); // High
  EICRA &= ~(1 << ISC00); // Low

  // We define pin D5 (Arduino as output) PD5
  DDRD |= (1 << DDD5); // High

  sei(); // enable global interrupts:
}

void loop() {

}

// We now configure what happens the external interruption is generated
ISR(INT0_vect, ISR_BLOCK){ // Block means that no other interruption is allowed while inside the loop.
   // We just change a pin state. Lets just use pin 20 (SDA/INT1) PD1
   PORTD ^= (1 <<PORTD5);
}
