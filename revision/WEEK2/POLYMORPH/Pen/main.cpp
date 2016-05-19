#include <iostream>
#include <string>

#include "pen.h"
#include "fountainpen.h"
#include "rollerballpen.h"
#include "utility.h"

using namespace std;

int main(){
    FountainPen fp;
    WriteWithPen(fp);
    
    RollerBallPen rbp("A Pen that uses a Roller Ball");
    WriteWithPen(rbp);
    
    Pen pen;
    WriteWithPen(pen);
}