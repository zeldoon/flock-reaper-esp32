#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED);
  tft.drawString("FLOCK REAPER v1.0", 50, 100, 4);
  tft.drawString("zeldoon / GainSec", 50, 150, 4);
  // Init Marauder Flock sniff here
}

void loop() {
  // Scanning loop
  delay(1000);
}
