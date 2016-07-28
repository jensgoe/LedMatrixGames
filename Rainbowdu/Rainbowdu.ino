/* 
 * Matrix demonstration
 * 
 * created by Friedl the fox
 * (c) 2015
 * 
 */

#include <MatrixDriver.h>

rgbValues rgb = {255, 0, 0};

void setup()
{
  Md.init();
  Md.clearDisplay();
}

void loop() 
{
  delay(100);
  Md.setPixel(1, 2, rgb);
  delay(100);
  Md.clearDisplay();
}
