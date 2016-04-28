#include<iostream>
#include "car.h"
#include<string>

using namespace std; 
std::string car::whosDriving(){
    return dere->getName()
      .append(" is driving a ")
      .append( car_type );
  }

