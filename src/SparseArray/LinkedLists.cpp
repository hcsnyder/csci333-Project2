#include<string>
#include <iostream>
#include <assert.h>

#include "LinkedLists.h"

template<typename T>
LinkedListRow::LinkedListRow() {
  front = 0;
  s=0;
}

template<typename T>
LinkedListRow::~LinkedListRow() {

}

template<typename T>
void LinkedListRow<T>::insert(CellNode<T>& n) {
  rowNode* curr = front;
  rowNode* temp = front; 
  int r = n->getRow();
  while(curr != 0 && curr->getValue() < r) {
    temp = curr;
    curr = curr->getNext();
  }
  if(curr->getValue() != r) {
    rowNode* newNode = new RowNode(r);
    temp->setNext(newNode);
    newNode->setNext(curr);
    newNode->setCellNode(n);
    s++;
  }
  else if(n->getCol < curr->getCellNode()->getCol()){
    n->setRowNext(curr->getCellNode());
  }
  else {
    CellNode* currCell = curr->getCellNode();
    CellNode* tempCell = curr->getCellNode();
    while(curr != 0 && curr->getCol() < n->getCol()) {
      tempCell = currCell;
      currCell = currCell-> getRowNext();
    }
    if(currCell->getCol() != n->getCol()) {
      tempCell->setRowNext(n);
      n->setRowNext(currCell);
    }
  }
}

template<typename T>
void LinkedListRow<T>::remove(CellNode<T>& n) {
  if( front == 0) {
    break;
  }
  rowNode* curr = front;
  rowNode* temp = front;
  else if(front->getCellNode()->getRowNext() == 0) {
    int r = n->getRow();
    while(curr->getNext() != 0 && curr->getValue() < r) {
      temp = curr;
      curr = curr->getNext();
    }
    if(curr->getValue() == r) {
      temp->setNext(temp->getNext()->getNext());
      s--;
    } 
  } 
  else {
    CellNode* currCell = curr->getCellNode();
    CellNode* tempCell = curr->getCellNode();
    while(currCell->getRowNext() != 0 && currCell->getCol() < n->getCol()) {
      tempCell = currCell;
      currCell = currCell->getRowNext();
    }
    if(currCell->getCol() == n->getCol() {
      tempCell->setRowNext(tempCell->getRowNext()->getRowNext());
    }
  }
}

int LinkedListRow::size() {
  return s;
}

LinkedListCol::LinkedListCol() {
  front = 0;
  s = 0;
}

LinkedListCol::~LinkedListCol() {

}

void LinkedListCol::insert(int c) {
  colNode* curr = front;
  colNode* temp = front;
  while(curr != 0 && curr->getValue() < c) {
    temp = curr;
    curr = curr->getNext();
  }
  if(curr->getValue() != c) {
    rowNode* newNode = new RowNode(r);
    temp->setNext(newNode);
    newNode->setNext(curr);
    s++;
  }
}

void LinkedListCol::remove(int c) {
  if(front == 0) {
    break;
  }
  colNode* curr = front;
  colNode* temp = front;
  while(curr->getNext() != 0 && curr->getValue() < c) {
    temp = curr;
    curr = curr->getNext();
  }
  if(curr->getValue() == c) {
    temp->setNext(temp->getNext()->getNext();
    s--;
  }
}

int LinkedListCol::size() {
  return s;
}
