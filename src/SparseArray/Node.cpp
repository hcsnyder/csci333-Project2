#include "Node.h"
#include <string>

//initialize the Node
template<typename T>
Node<T>::Node(int r, int c, T v) {
  value = v;
  row = r;
  col = c;
  nextCol = 0;
}

template<typename T>
T Node<T>::getValue() {
  return value;
}

template<typename T>
int Node<T>::getRow() {
  return row;
}

template<typename T>
int Node<T>::getCol() {
  return col;
}

template<typename T>
Node<T>*& Node<T>::getNextCol() {
  return nextCol;
}

template<typename T>
void Node<T>::setNextCol(Node<T>& n) {
  nextCol = &n;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;
