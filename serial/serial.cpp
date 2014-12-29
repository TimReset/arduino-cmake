#if ARDUINO >= 100

#include "Arduino.h"

#else
    #include "WProgram.h"
#endif

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Hello from CLion!");
    delay(5000);
}