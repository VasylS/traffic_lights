#include <Arduino.h>

#define GREEN_PIN 7
#define YELLOW_PIN 6
#define RED_PIN 5

void setup() 
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);

}

void blink1(int times, int period_ms, int pin)
{
  for(int i = 0; i < times; ++i)
  {
    digitalWrite(pin, HIGH);
    delay(period_ms);
    digitalWrite(pin, LOW);
    delay(period_ms);   
  }
}

void flash(int timems, int pin)
{
  digitalWrite(pin, HIGH);
  delay(timems);
  digitalWrite(pin, LOW);
}

void loop()
{
 flash(10000, GREEN_PIN);
 blink1(3, 500, GREEN_PIN);
 flash(2000, YELLOW_PIN);
 flash(10000, RED_PIN);
 blink1(3, 500, RED_PIN);
 flash(1000, YELLOW_PIN);
}

