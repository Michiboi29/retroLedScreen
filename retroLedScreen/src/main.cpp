#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    20
#define NUM_XLEDS   20
#define NUM_YLEDS   14

CRGB leds[NUM_LEDS];
CRGB ledMatrix[NUM_YLEDS][NUM_XLEDS];
void ledUpdate(){
  for(int y = 0; y < NUM_YLEDS; y++){
    for(int x = 0; x < NUM_XLEDS; x++){
      int n = y*NUM_XLEDS + x;
      leds[n] = ledMatrix[y][x];
    }
  }
}

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // leds[0] = CRGB(255, 0, 0);
  // FastLED.show();
  // delay(500);  
  // leds[1] = CRGB(0, 255, 0);
  // FastLED.show();
  // delay(500);
  // leds[2] = CRGB(0, 0, 255);
  // FastLED.show();
  // delay(500);
  // leds[5] = CRGB(150, 0, 255);
  // FastLED.show();
  // delay(500);
  // leds[9] = CRGB(255, 200, 20);
  // FastLED.show();
  // delay(500);
  // leds[14] = CRGB(85, 60, 180);
  // FastLED.show();
  // delay(500);
  // leds[19] = CRGB(50, 255, 20);
  // FastLED.show();
  // delay(500);
  ledUpdate();
  FastLED.show();
}