#include <iostream>

#include "utility.h"
#include "lemon.h"
#include "orange.h"

using namespace std;

int main(){
    Lemon lemon1(0.5);
    Lemon lemon2(1.0);
    Lemon lemon3(1.5);
    Orange orange1(2.0);
    Orange orange2(2.5);
    Orange orange3(3.0);
    
    CitrusFruit *fruit[] = {&lemon1, &lemon2, &lemon3, &orange1, &orange2, &orange3};
    
    for(int i =0; i<6; i++){
        PrintTheFruits(*fruit[i]);
    }
    
  }
  
  
  
 
