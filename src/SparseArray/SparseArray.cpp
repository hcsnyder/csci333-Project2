#include <iostream>
#include <string>
#include <assert.h>

#include "SparseArray.h"

template<typename T>
SparseArray<T>::SparseArray (int r, int c, T def) {
  theArrayRow = new LinkedListRow();
  theArrayCol = new LinkedListCol;
  defSpace = def;
  row = r;
  col = c;
}

template<typename T>
SparseArray<T>::~SparseArray() {

}

template<typename T>
void SparseArray<T>::insert(int r, int c, T def) {
  CellNode* newNode = new Node(r, c, def);
  theArrayRow->insert(newNode);
  theArrayCol->insert(newNode);
}

template<typename T>
T SparseArray<T>::access(int r, int c) {
  CellNode* cNode = theArrayRow->access(r, c);
  return cNode->getValue();
}

template<typename T>
void SparseArray<T>::remove(int r, int c) {
  CellNode* cNode = theArrayRow->access(r, c);
  theArrayRow->remove(cNode);
  theArrayCol->remove(r, c);
}

template<typename T>
void SparseArray<T>::print() {
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      CellNode* cNode = theArrayRow->access(i, j);
      if(cNode == 0) {
        std::cout << defSpace;
      }
      else {
        std::cout << cNode->getValue();
      }
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}

template<typename T>
int SparseArray<T>::getNumRows() {
  return row;
}

template<typename T>
int SparseArray<T>::getNumCols() {
  return col;
}
