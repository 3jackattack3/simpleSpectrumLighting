#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>


Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, 2, NEO_RGBW + NEO_KHZ800);

void setup() {
  // pinMode(2, OUTPUT);

  clock_prescale_set(clock_div_1);


  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {

  // strip.setPixelColor(0, strip.Color(0, 250, 0));
  // strip.show();
  // delay(500);
  //
  // strip.setPixelColor(0, strip.Color(0, 0, 0));
  // strip.show();
  // delay(500);


  for(int i = 0; i<=255; i++){
    strip.setPixelColor(0, strip.Color(0, i, 255-i));
    strip.show();
    delay(10);
  }
  for(int i = 255; i>=0; i--){
    strip.setPixelColor(0, strip.Color(0, i, 255-i));
    strip.show();
    delay(10);
  }
}
