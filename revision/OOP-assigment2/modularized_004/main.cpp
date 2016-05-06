#include <iostream>
#include <string>



class Triangle : public Shape{
public:
  Triangle(std::string name = "Nice Triangle!") : Shape(name){}
};

using namespace std;
int main(){
  Triangle tria;
  cout << tria.getName() << endl;
  return 0;
}
