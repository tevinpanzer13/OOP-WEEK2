#ifndef LEMON_H
#define LEMON_H
#include"citrus_fruits.h"
class Lemon : public CitrusFruit {
public:
  Lemon(float ph) : CitrusFruit(ph){}
  const char * getName();
  float getPh();
};

#endif
