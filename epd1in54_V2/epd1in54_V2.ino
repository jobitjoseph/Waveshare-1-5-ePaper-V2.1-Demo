#include <SPI.h>
#include "epd1in54_V2.h"
#include "imagedata.h"
#include "epdpaint.h"
#include <stdio.h>

Epd epd;
unsigned char image[1024];
Paint paint(image, 0, 0);

unsigned long time_start_ms;
unsigned long time_now_s;
#define COLORED     0
#define UNCOLORED   1

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("e-Paper init and clear");
  epd.LDirInit();
  epd.Clear();

 
  epd.HDirInit();
}

void loop()
{
  

  epd.DisplayPartBaseImage(IMG1);
  paint.SetWidth(200);
  paint.SetHeight(200);
  epd.DisplayPartFrame();
  delay(2000);
  
  epd.DisplayPartBaseImage(IMG2);
  paint.SetWidth(200);
  paint.SetHeight(200);
  epd.DisplayPartFrame();
  delay(2000);

  
  epd.DisplayPartBaseImage(IMG3);
  paint.SetWidth(200);
  paint.SetHeight(200);
  epd.DisplayPartFrame();
  delay(2000);

  
  epd.DisplayPartBaseImage(IMG4);
  paint.SetWidth(200);
  paint.SetHeight(200);
  epd.DisplayPartFrame();
  delay(2000);
  
  epd.DisplayPartBaseImage(IMG5);
  paint.SetWidth(200);
  paint.SetHeight(200);
  epd.DisplayPartFrame();
  delay(2000);

}
