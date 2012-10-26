#include<string>
#include <iostream>
#include <assert.h>

#include "LinkedLists.h"

LinkedListRow::LinkedListRow() {
  front = 0;
  s=0;
}

LinkedListRow::~LinkedListRow() {

}

void LinkedListRow::insert(int r) {
  rowNode* curr = front;
  rowNode* temp = front; 
  while(curr != 0 && curr->getValue() < r) {
    temp = curr;
    curr = curr->getNext();
  }
  if(curr->getValue() != r) {
    rowNode* newNode = new RowNode(r);
    temp->setNext(newNode);
    newNode->setNext(curr);
    s++;
  }
}

void LinkedListRow::remove(int r) {
  if( front == 0) {
    break;
  }
  rowNode* curr = front;
  rowNode* temp = front;
  while(curr->getNext() != 0 && curr->getValue() < r) {
  temp = curr;
  curr = curr->getNext();
  }
  if(curr->getValue() == r) {
    temp->setNext(temp->getNext()->getNext());
    s--;
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
