#include "shape.h"
#include "circle.h"
#include <string>

std::string Circle::getName(){
    return(std::string)(Shape::getName()); 
    
}