#include <SoftPWM.h>

void setup()
{
  // Initialize
  SoftPWMBegin();

  // Create and set pin 13 to 0 (off)
  SoftPWMSet(2, 0);
  SoftPWMSet(3, 0);
  SoftPWMSet(4, 0);

  SoftPWMSet(5, 0);
  SoftPWMSet(6, 0);
  SoftPWMSet(7, 0);

  SoftPWMSet(11, 0);
  SoftPWMSet(12, 0);
  SoftPWMSet(13, 0);

  // Set fade time for pin 13 to 100 ms fade-up time, and 500 ms fade-down time
  SoftPWMSetFadeTime(2, 1500, 2000);
  SoftPWMSetFadeTime(3, 1500, 2000);
  SoftPWMSetFadeTime(4, 1500, 2000);

  SoftPWMSetFadeTime(5, 1500, 2000);
  SoftPWMSetFadeTime(6, 1500, 2000);
  SoftPWMSetFadeTime(7, 1500, 2000);

  SoftPWMSetFadeTime(11, 1500, 2000);
  SoftPWMSetFadeTime(12, 1500, 2000);
  SoftPWMSetFadeTime(13, 1500, 2000);
}

void loop()
{
  // Turn on - set to 100%
  SoftPWMSetPercent(2, 100);
  SoftPWMSetPercent(5, 100);
  SoftPWMSetPercent(11, 100);

  // Wait for LED to turn on - you could do other tasks here
  delay(2000);

  // Turn off - set to 0%
  SoftPWMSetPercent(2, 0);
  SoftPWMSetPercent(5, 0);
  SoftPWMSetPercent(11, 0);

  SoftPWMSetPercent(3, 100);
  SoftPWMSetPercent(6, 100);
  SoftPWMSetPercent(12, 100);

  // Wait for LED to turn on - you could do other tasks here
  delay(2000);

  // Turn off - set to 0%
  SoftPWMSetPercent(3, 0);
  SoftPWMSetPercent(6, 0);
  SoftPWMSetPercent(12, 0);

  SoftPWMSetPercent(4, 100);
  SoftPWMSetPercent(7, 100);
  SoftPWMSetPercent(13, 100);

  // Wait for LED to turn off
  delay(2000);

  SoftPWMSetPercent(4, 0);
  SoftPWMSetPercent(7, 0);
  SoftPWMSetPercent(13, 0);

  delay(2000);
}