#include "rectangle.h"
#include "triangle.h"
#include <string>
int Triangle::area(){
  // return (int)(0.5 * height * width);
  return (int)(0.5 * Rectangle::area());
}