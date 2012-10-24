#include "TwoDArray.h"
#include <iostream>

using std::cout;
using std::end1;

int main() {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);

  TwoDArray<std::string>* s = new TwoDArray(5, 5, "o");

  i->insert(1, 1, 1);
  i->insert(1, 3, 1);
  i->insert(3, 2, 8);
  i->insert(2, 0, 3);
  i->insert(2, 4, 3);
  i->insert(3, 2, 8);

  i->print();


  s->insert(0, 2, "North");
  s->insert(4, 2, "South");
  s->insert(2, 4, "East");
  s->insert(2, 0, "West");

  s->print();
}
