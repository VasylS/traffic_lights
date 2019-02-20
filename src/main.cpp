#include <Arduino.h>
#include "constants.h"
#include <blinker.h>

Blinker red(RED_PIN);
Blinker green(GREEN_PIN);
Blinker yellow(YELLOW_PIN); 

void setup() {}

void loop()
{
 green.flash(1000);
 green.blink1(13, 150);
 yellow.flash(200);
 red.flash(1000);
 red.blink1(30, 50);
 yellow.flash(1000);
}

