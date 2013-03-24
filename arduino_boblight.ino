#include <SoftPWM.h>

// FADING SETTINGS
#define FADE_IN_TIME    50
#define FADE_OUT_TIME   50

// Channel 1
#define RED1    2
#define GREEN1  3
#define BLUE1   4

// Channel 2
#define RED2    5
#define GREEN2  6
#define BLUE2   7

// Channel 3
#define RED3    8
#define GREEN3  9
#define BLUE3   10

// Channel 4
#define RED4    11
#define GREEN4  12
#define BLUE4   13

/*
 * --------------------------------
 *  THIS IS WHAT YOU HAVE TO EDIT !
 * --------------------------------
 */
#define ACTIVE_CHANNELS 3
/*
 * --------------------------------
 * HERE ENDS WHAT YOU HAVE TO EDIT!
 * --------------------------------
 */

// each channel exists of 3 colors
#define COLORS_USED (ACTIVE_CHANNELS * 3)

uint8_t values[COLORS_USED];
uint8_t outputs[] = {RED1, GREEN1, BLUE1, RED2, GREEN2, BLUE2, RED3, GREEN3, BLUE3, RED4, GREEN4, BLUE4};

void setup()
{
  // Initialize
  SoftPWMBegin();
  Serial.begin(38400);

  // Create and set pin 13 to 0 (off)
  for(uint8_t i = 0; i < sizeof(outputs); i++)
  {
    // Turn off all outputs
    SoftPWMSet(outputs[i], 0);

    // set fade time
    SoftPWMSetFadeTime(outputs[i], FADE_IN_TIME, FADE_OUT_TIME);
  }
}

//boblightd needs to send 0x55 0xAA before sending the channel bytes
void WaitForPrefix()
{
  uint8_t first = 0, second = 0;
  while (second != 0x55 || first != 0xAA)
  {
    while (!Serial.available());
    second = first;
    first = Serial.read();
  }
}

void loop()
{
  WaitForPrefix();

  for (uint8_t i = 0; i < COLORS_USED; i++)
  {
    while(!Serial.available());
    values[i] = Serial.read();
  }

  for (uint8_t i = 0; i < COLORS_USED; i++)
  {
    SoftPWMSet(outputs[i], values[i]);
  }
}