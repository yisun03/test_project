#include <iostream>

#include "derived.h"

int main()
{
  base* b = new derived();
  std::cout << b->func()->a << ":" << b->func()->b << std::endl;
}