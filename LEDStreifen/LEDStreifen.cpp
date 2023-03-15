#include "LEDStreifen.h"
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void laufender_LED(void)
{
pixels.clear();
for(int i=0; i<NUMPIXELS; i++) 
  {
  pixels.setPixelColor(i, pixels.Color(255,10, 240));
  pixels.show(); 
  delay(50);
  pixels.clear(); 
  }
}

 void dauerleuchtend (void)
{
pixels.clear(); 
for(int i=0; i<NUMPIXELS; i++) 
  {
  pixels.setPixelColor(i, pixels.Color(30, 0, 25));
  }  {
pixels.clear(); 
for(int i=0; i<NUMPIXELS; i++) 
  {
  pixels.setPixelColor(i, pixels.Color(30, 0, 25));
  }  
pixels.show();   
}
}

 void blinkender_LED(void)
{
pixels.clear(); 
for(int i=0; i<NUMPIXELS; i++) 
  {
  pixels.setPixelColor(i, pixels.Color(50, 0, 25));
  }
pixels.show();   
delay(1000); 
pixels.clear();
delay(1000);
pixels.show();   
delay(1000);
pixels.clear();

}
void Atmender_LED(void)
{

uint8_t b=0;
  
  for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(50, 0, 25,b));
 // Serial.println(b);
  
  
  }
pixels.show();
delay(1000);
  pixels.clear(); 
b=50;
   for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(50, 0, 25,b));
 // Serial.println(b);
  
  
  }
pixels.show();
delay(500);
b=250;
  pixels.clear(); 
   for(int i=0; i<NUMPIXELS; i++){
    pixels.setPixelColor(i, pixels.Color(50, 0, 25,b));
 // Serial.println(b);
  
  
  }

pixels.show();
delay(500);
  pixels.clear(); 
}

void Auffuellender_LED(void)
{

pixels.clear(); 
 for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(30, 0, 25));

    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(DELAYVAL); // Pause before next pass through loop
  }
delay (1000);
 
    for(int i=180; i > 0; i--) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));

    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(DELAYVAL); // Pause before next pass through loop
  }
  }

void SetupLedStreifen(void) {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
 // Serial.begin(9600);
}
 
  
 
