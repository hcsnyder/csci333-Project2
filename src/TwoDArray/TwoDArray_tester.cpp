#include <iostream>
#include <string>
#include "TwoDArray.h"


int main() {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);

  TwoDArray<std::string>* s = new TwoDArray<std::string>(5, 5, "o");

  i->insert(1, 1, 1);
  i->insert(1, 3, 1);
  i->insert(3, 2, 8);
  i->insert(2, 0, 3);
  i->insert(2, 4, 3);
  i->insert(3, 2, 8);

  i->print();

  std::cout << std::endl;

  s->insert(0, 2, "N");
  s->insert(4, 2, "S");
  s->insert(2, 4, "E");
  s->insert(2, 0, "W");

  s->print();

  return 0;
}
