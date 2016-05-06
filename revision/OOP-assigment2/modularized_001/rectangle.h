#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
class Rectangle{
  std::string shape;
  int height, width;
public:
  Rectangle(std::string shape="Rectangle"): shape(shape),
                                            height(0), width(0){}
 
  Rectangle(std::string shape, int h, int w): height(h), width(w){}

  std::string getName();
  int area();
};
#endif