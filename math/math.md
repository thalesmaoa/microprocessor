
# Math implementation and evaluation

Another important need of a microprocessor is to perform basic math operations like multiply and divide. Using C code, variables must be defined in order to speed-up the processing time. We must keep that in mind during development.

## Arduino code

We mainly define some basic variables and perform some calculations and measure its time as presented bellow. Each math operation is performed 100 times.

```c
#include <Arduino.h>


// Define pin to measure speed
uint8_t pin_out = 27;

// Test math speeds
uint8_t x_i8 = 12;
uint8_t y_i8 = 3;
uint8_t z_i8 = 0;

uint16_t x_i16 = 123;
uint16_t y_i16 = 456;
uint16_t z_i16 = 0;

uint32_t x_i32 = 1234;
uint32_t y_i32 = 5678;
uint32_t z_i32 = 0;

uint64_t x_i64 = 10234;
uint64_t y_i64 = 56789;
uint64_t z_i64 = 0;

float x_f = 1.0234;
float y_f = 5.6789;
float z_f = 0;

int math_ciompute = 100;

void setup() {
  // Adjust pin as output
  pinMode(pin_out, OUTPUT);
}

void loop() {
  delay(1);

  // Int multiply
  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i8 = x_i8 * y_i8;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1);

  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i16 = x_i16 * y_i16;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1);

  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i32 = x_i32 * y_i32;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1);

  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i64 = x_i64 * y_i64;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1.5);

  // Float multiply
  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_f = x_f * y_f;
  digitalWrite(pin_out, LOW);

  delayMicroseconds(1.5);

  // Int division
  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i8 = x_i8 / y_i8;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1);

  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i16 = x_i16 / y_i16;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1);

  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i32 = x_i32 / y_i32;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1);

  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_i64 = x_i64 / y_i64;
  digitalWrite(pin_out, LOW);
  delayMicroseconds(1.5);

  // Float divison
  digitalWrite(pin_out, HIGH);
  for(int i = 0; i < math_ciompute; i++)
    z_f = x_f / y_f;
  digitalWrite(pin_out, LOW);

}
```

## Arduino Nano
Using the ESP32, times are presented bellow:

| Variable | Multiplication | Division |
|---|---|---|
| unsigned int8 | 3.708us | 3.667us |
| unsigned int16 | 3.6678us | 3.667us |
| unsigned int32 | 3.667us | 3.708us |
| unsigned int64 | 3.667us |  3.708us |
| float | 3.452us |  3.708us |




## ESP32

Using the ESP32, times are presented bellow:

| Variable | Multiplication | Division |
|---|---|---|
| unsigned int8 | 3.958us | 5.167us |
| unsigned int16 | 3.958us | 3.958us |
| unsigned int32 | 3.542us | 3.958us |
| unsigned int64 | 4.417us |  36.88us |
| float | 3.452us |  80.62us |
