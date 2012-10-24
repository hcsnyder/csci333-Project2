#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__

template <typename T>
class TwoDArray {
  private:
    int** theArray;
    int numRows;
    int numCols;
    T default;
    int cap;
    T value;

  public:
    TwoDArray<T> (int r, int c, T def);
    ~TwoDArray();
    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);
    void print();
    int getNumRows();
    int getNumCols();
