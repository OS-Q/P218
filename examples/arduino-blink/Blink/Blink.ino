#include <Arduino.h>
#include <SFE_BMP180.h>
#include <Wire.h>

int pos = 0;    // variable to store the servo position

SFE_BMP180 pressure;
double baseline; // baseline pressure

#ifndef LED_BUILTIN
#define LED_BUILTIN PA3
#endif

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);   // initialize LED digital pin as an output.
}

void loop()
{
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);
    // wait for a second
    delay(1000);
    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);
    // wait for a second
    delay(1000);
}


