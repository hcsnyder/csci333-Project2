#include "TwoDArray.h"
#include <iostream>
#include <assert.h>
#include <string>

//initializes the 2D Array
template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
  assert(r > 0 && c > 0);
  numRows = r;
  numCols = c;
  defSpace = def;
  theArray = new T*[r];
  for(int i=0; i<r; i++) {
    theArray[i] = new T[c];
  }
  //sets all values to the default
  for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
    theArray[i][j] = defSpace;
    }
  } 
}

//deletes the 2D Array
template<typename T>
TwoDArray<T>::~TwoDArray() {
for(int i=0; i<numRows; i++) {
    delete[] theArray[i];
  }
  delete[] theArray;
}

//inserts value v at row r and column c
template<typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
  assert(r < numRows && c < numCols);
  assert(value != defSpace);
  theArray[r][c] = value;
}

//get value at row r, column c
template<typename T>
T TwoDArray<T>::access(int r, int c) {
  assert(r < numRows && c < numCols);
  T result = theArray[r][c];
  return result;
}

//set value at row r and column c back to default
template<typename T>
void TwoDArray<T>::remove(int r, int c) {
  assert(r < numRows && c < numCols);
  assert(theArray[r][c] != defSpace);
  theArray[r][c] = defSpace;
}

//print the 2D Array
template<typename T>
void TwoDArray<T>::print() {
  for(int i=0; i<numRows; i++) {
    for(int j=0;j<numCols; i++) {
      std::cout << theArray[i][j];
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}

//gets number of rows for test
template<typename T>
int TwoDArray<T>::getNumRows() {
  return numRows;
}

//gets number of columns for test
template<typename T>
int TwoDArray<T>::getNumCols() {
  return numCols;
}

template class TwoDArray<int>;
template class TwoDArray<std::string>;
