#include "utility.h"

void PrintTheFruits(CitrusFruit &fruit){

    std::cout << "The fruit is a " << fruit.getName()
              << " and has a pH " << fruit.getPh() << std::endl;

}
