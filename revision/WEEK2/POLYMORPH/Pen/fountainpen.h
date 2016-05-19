#ifndef FOUNTAINPEN_H
#define FOUNTAINPEN_H
#include <string>

#include "pen.h"

class FountainPen : public Pen{
public:
    //////////////////////////////////////////////////////////////
    // //!TODO: what would happen if you used this version of   //
    // //       Constructor in the comment box below            //
    //////////////////////////////////////////////////////////////
    // // FountainPen(std::string pen_name = "FountainPen") //  //
    // //   : Pen(pen_name) {}                              //  //
    //////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////
    
    FountainPen(std::string pen_name) : Pen(pen_name) {};
    
    FountainPen() : Pen("FountainPen"){};
    std::string drawLine();
    std::string drawCircle();
};

#endif