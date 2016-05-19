#include "utility.h"

void WriteWithPen(Pen pen){
    std::cout << pen.drawLine() << std::endl;
    std::cout << pen.drawCircle() << std::endl;
}