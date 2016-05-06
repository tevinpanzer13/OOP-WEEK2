#ifndef SQUARE_H
#define SQUARE_H
#include <string>
class Square : public Rectangle{
public:
Square (int side):Rectangle("Square",side,side){}
Square():Rectangle("Square"){}
int area();
};
#endif 

