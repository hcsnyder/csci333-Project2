#include "Node.h"
#include <string>

//initialize the Node
template<typename T>
CellNode<T>::CellNode(int r, int c, T v) {
  value = v;
  row = r;
  col = c;
  colNext = 0;
  rowNext = 0;
}

template<typename T>
T CellNode<T>::getValue() {
  return value;
}

template<typename T>
int CellNode<T>::getRow() {
  return row;
}

template<typename T>
int CellNode<T>::getCol() {
  return col;
}

template<typename T>
CellNode<T>*& CellNode<T>::getColNext() {
  return colNext;
}

template<typename T>
CellNode<T>*& CellNode<T>::getRowNext() {
  return rowNext;
}

template<typename T>
void CellNode<T>::setColNext(CellNode<T>& n) {
  colNext = &n;
}

template<typename T>
void CellNode<T>::setRowNext(CellNode<T>& n) {
  rowNext = &n;
}

rowNode::rowNode(int r) {
  value = r;
  next = 0;
}

int rowNode::getValue() {
  return value;
}

rowNode* rowNode::getNext() {
  return next;
}

void rowNode::setNext(rowNode* &n) {
  next = &n;
}

colNode::colNode(int c) {
  value = c;
  next = 0;
}

int colNode::getValue() {
  return value;
}

colNode* colNode::getNext() {
  return next;
}

void colNode::setNext(colNode* &n) {
  next = &n;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;
