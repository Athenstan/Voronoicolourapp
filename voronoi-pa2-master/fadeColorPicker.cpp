#include "fadeColorPicker.h"

fadeColorPicker::fadeColorPicker(double fade)
{
  fadeFactor = fade;
}

HSLAPixel fadeColorPicker::operator()(point p)
{
  int x = p.x - p.c.x;
  int y = p.y - p.c.y;
  HSLAPixel ret;
  ret.h = p.c.color.h; ret.s = p.c.color.s; 
  ret.l = p.c.color.l * pow(this->fadeFactor, sqrt(x*x + y*y));

  return ret;
}
