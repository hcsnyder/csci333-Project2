#include<string>
#include <iostream>

#include "LinkedLists.h"

template<typename T>
LinkedListRow<T>::LinkedListRow() {
  front = 0;
  s=0;
}

template<typename T>
LinkedListRow<T>::~LinkedListRow() {

}

template<typename T>
void LinkedListRow<T>::insert(int r) {
  Node<T>** curr = &front;
  
  
}
