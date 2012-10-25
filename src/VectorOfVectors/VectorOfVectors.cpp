#include "VectorOfVectors.h"
#include <iostream>
#include <assert.h>
#include <string>
#include <vector>

//initialize the array
template <typename T>
VectorOfVectors<T>::VectorOfVectors(int r, int c, T def) {
  assert(r > 0 && c > 0);
  defSpace = def;
  std::vector<T> col(c, defSpace);
  std::vector<std::vector<T> > theArray(r, col);
}

//destructor
template<typename T>
VectorOfVectors<T>::~VectorOfVectors() {
  for(int i=0; i<theArray.size(); i++) {
    delete theArray.at(i);
  }
  delete theArray;
}

//inserts value v at row r and column c
template<typename T>
void VectorOfVectors<T>::insert(int r, int c, T value) {
  assert(r <= theArray.size() && c <= theArray[0].size());
  assert(value != defSpace);
  theArray[r][c] = value;
}

//get value at row r, column c
template<typename T>
T VectorOfVectors<T>::access(int r, int c) {
  assert(r <= theArray.size() && c <= theArray[0].size());
  return theArray[r][c];
}

//set value at row r and column c back to default
template<typename T>
void VectorOfVectors<T>::remove(int r, int c) {
  assert(r <= theArray.size() && c <= theArray[0].size());
  assert(theArray[r][c] != defSpace);
  theArray[r][c] = defSpace;
}

//print the 2D array
template<typename T>
void VectorOfVectors<T>::print() {
  for(int i=0; i<theArray.size(); i++) {
    for(int j=0; j<theArray[0].size(); j++) {
      std::cout << theArray[i][j];
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}

//get number of rows for test
template<typename T>
int VectorOfVectors<T>::getNumRows() {
  return theArray.size();
}

//get number of columns for test
template<typename T>
int VectorOfVectors<T>::getNumCols() {
  return theArray[0].size();
}

template class VectorOfVectors<int>;
template class VectorOfVectors<double>;
template class VectorOfVectors<std::string>;
