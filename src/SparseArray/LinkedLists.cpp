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
  else if(n->getCol() < curr->getCellNode()->getCol()){
    n->setRowNext(curr->getCellNode());
  }
  else {
    CellNode* currCell = curr->getCellNode();
    CellNode* tempCell = curr->getCellNode();
    while(currCell != 0 && currCell->getCol() < n->getCol()) {
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

template<typename T>
Node<T>*& LinkedListRow::access(int r, int c) {
  if(front != 0) {
    rowNode* curr = front;
    while(curr != 0 && curr->getValue() < r) {
      curr = curr->getNext();
    }
    if(curr->getValue() == r) {
      CellNode* currCell = curr->getCellNode();
      while(currCell != 0 && curr->getCol < c) {
        currCell = currCell->getRowNext();
      }
      if(currCell->getCol == c) {
        return currCell;
      }
    }
  }
}

template<typename T>
int LinkedListRow::size() {
  return s;
}

template<typename T>
LinkedListCol::LinkedListCol() {
  front = 0;
  s = 0;
}

template<typename T>
LinkedListCol::~LinkedListCol() {

}

template<typename T>
void LinkedListCol::insert(CellNode<T>& n) {
  colNode* curr = front;
  colNode* temp = front;
  int c = n->getCol();
  while(curr != 0 && curr->getValue() < c) {
    temp = curr;
    curr = curr->getNext();
  }
  if(curr->getValue() != c) {
    rowNode* newNode = new RowNode(r);
    temp->setNext(newNode);
    newNode->setNext(curr);
    newNode->setCellNode(n);
    s++;
  }
  else if(n->getRow() < curr->getCellNode->getRow()) {
    n->setColNext(curr->getCellNode());
  }
  else {
    CellNode* currCell = curr->getCellNode();
    cellNode* tempCell = curr->getCellNode();
    while(currCell != 0 && currCell->getRow() < n->getRow()) {
      tempCell = currCell;
      currCell = currCell->getColNext();
    }
    if(currCell->getRow() != n->getRow()) {
      tempCell->setColNext(n);
      n->setColNext(currCell);
    } 
  }
}
template<typename T>
void LinkedListCol::remove(CellNode<T>& n) {
  if(front == 0) {
    break;
  }
  colNode* curr = front;
  colNode* temp = front;
  else if(front->getCellNode()->getColNext() == 0) {
    int c = n->getCol();
    while(curr->getNext() != 0 && curr->getValue() < c) {
      temp = curr;
      curr = curr->getNext();
    }
    if(curr->getValue() == c) {
      temp->setNext(temp->getNext()->getNext();
      s--;
    }
  }
  else {
    CellNode* currCell = curr->getCellNode();
    CellNode* tempCell = curr->getCellNode();
    while(currCell->getColNext() != 0 && currCell->getCol() < n->getCol()) {
      tempCell = curr Cell;
      currCell = currCell->getColNext();
    }
    if(currCell->getRow() == n->getRow() {
      tempCell->setColNext(tempCell->getRowNext()->getRowNext());
    }
  }
}

template<typename T>
int LinkedListCol::size() {
  return s;
}
