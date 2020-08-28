#include "solidColorPicker.h"

solidColorPicker::solidColorPicker()
{
  
}

HSLAPixel solidColorPicker::operator()(point p)
{
  return p.c.color;
}
