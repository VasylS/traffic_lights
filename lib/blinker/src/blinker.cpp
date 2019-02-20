#include <Arduino.h>
#include "blinker.h"

 Blinker::Blinker(int pin)
{
  pin_ = pin;
    pinMode(pin_, OUTPUT);
    digitalWrite(pin_, LOW);
}


void Blinker::blink1(int times, int period_ms)
{
  for(int i = 0; i < times; ++i)
  {
    digitalWrite(pin_, HIGH);
    delay(period_ms);
    digitalWrite(pin_, LOW);
    delay(period_ms);   
  }
}

void Blinker::flash(int timems)
{
  digitalWrite(pin_, HIGH);
  delay(timems);
  digitalWrite(pin_, LOW);
}