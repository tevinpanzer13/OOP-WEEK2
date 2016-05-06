#ifndef SHAPE_H
#define SHAPE_H
#include<string>
class Shape{
  std::string sname;
  std::string colour;
public:
  Shape(std::string sname,std::string colour="red"): colour(colour)
  {
    sname = sname;
  }
  void draw();
  std::string getName();
};

#endif