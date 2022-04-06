// MIXI Test
// Zane Cochran
// Set Up Arduino IDE for Arduino Pro Mini: https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide
// Install MIDIUSB Library
//Modified by Jake R. Kaywell 
//April 2022

// Buttons
#include <Bounce2.h>
int numButtons = 8;
int buttonPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};
Bounce * buttons = new Bounce[8];
boolean buttonStates[8] = {false, false, false, false, false, false, false, false};
boolean buttonState = false;
boolean prevButtonState = false;


// Potentiometers
int numPots = 4;
int potPins[4] = {0, 1, 2, 3};
int potStates[4] = {0, 0, 0, 0};

// LEDs
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(8, 10, NEO_GRB + NEO_KHZ800);
int numLED = 8;
boolean drumStates;

// MIDI
#include "MIDIUSB.h"

void setup() {
  Serial.begin(9600);
  initButtons();
  initLED();
}

void loop() {
  checkButtons();
  checkPots();
  testAll();
}
