#include <iostream>
#include "rectangle.h"
#include "square.h"
#include "triangle.h"
#include <string>
using namespace std;


int main(int argc, char** argv){
  Square sq(10);
  cout << "Square area: " << sq.area() << endl;
  Triangle t1(3,6) , t2(3,6);
  cout << "Triangle 1 area: " << t1.area()<< endl;
  cout << "Triangle 2 area: " << t2.area()<< endl;
       
  return 0;
}
