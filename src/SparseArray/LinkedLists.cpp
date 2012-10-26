#include<string>
#include <iostream>

#include "LinkedLists.h"

LinkedListRow::LinkedListRow() {
  front = -1;
  s=0;
}

LinkedListRow::~LinkedListRow() {

}

void LinkedListRow::insert(int r) {
  Node** newNode = newNode(value);
  if(front == -1) {
    front = newNode;
  }
  else if(front->get
}

void LinkedListRow::remove(int r) {

}
