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
  for(int i=0; i<r; i++) {
    theArray.push_back(std::vector<T>());
    for(int j=0; j<c; j++) {
      theArray[i].push_back(defSpace);
    }
  }
}

//destructor
template<typename T>
VectorOfVectors<T>::~VectorOfVectors() {
  for(int i=0; i< (int) theArray.size(); i++) {
    theArray[i].clear();
  }
  theArray.clear();
}

//inserts value v at row r and column c
template<typename T>
void VectorOfVectors<T>::insert(int r, int c, T value) {
  assert(r <= (int) theArray.size() && c <= (int) theArray[0].size());
  assert(value != defSpace);
  theArray[r][c] = value;
}

//get value at row r, column c
template<typename T>
T VectorOfVectors<T>::access(int r, int c) {
  assert(r <= (int) theArray.size() && c <= (int) theArray[0].size());
  return theArray[r][c];
}

//set value at row r and column c back to default
template<typename T>
void VectorOfVectors<T>::remove(int r, int c) {
  assert(r <= (int) theArray.size() && c <= (int) theArray[0].size());
  assert(theArray[r][c] != defSpace);
  theArray[r][c] = defSpace;
}

//print the 2D array
template<typename T>
void VectorOfVectors<T>::print() {
  for(int i=0; i< (int) theArray.size(); i++) {
    for(int j=0; j< (int) theArray[0].size(); j++) {
      std::cout << theArray[i][j];
      std::cout << "   ";
    }
    std::cout << std::endl;
  }
}

//get number of rows for test
template<typename T>
int VectorOfVectors<T>::getNumRows() {
  return (int) theArray.size();
}

//get number of columns for test
template<typename T>
int VectorOfVectors<T>::getNumCols() {
  return (int) theArray[0].size();
}

template class VectorOfVectors<int>;
template class VectorOfVectors<double>;
template class VectorOfVectors<std::string>;
