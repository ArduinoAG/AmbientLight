#ifndef _LEDSTREIFEN_H
#define _LEDSTREIFEN_H
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define PIN        10// On Trinket or Gemma, suggest changing this to 1
#define NUMPIXELS 180// Popular NeoPixel ring size
#define DELAYVAL 100 // Time (in milliseconds) to pause between pixels


void Atmender_LED(void);
void blinkender_LED(void);
void dauerleuchtend (void);
void laufender_LED(void);
void Auffuellender_LED(void);
void SetupLedStreifen(void);

#endif
