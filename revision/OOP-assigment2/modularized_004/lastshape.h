#ifndef LASTSHAPE_H
#define LASTSHAPE_H
class Shape{
protected:
  std::string name;
public:
  Shape(std::string name = "Amorphous Base Shape"): name(name){}
  std::string getName();
};
#endif