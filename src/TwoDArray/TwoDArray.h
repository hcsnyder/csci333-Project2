#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__

template <typename T>
class TwoDArray {
  private:
    T** theArray;
    int numRows;
    int numCols;
    T defSpace;
<<<<<<< HEAD
=======
    int cap;
    T value;
>>>>>>> a7332cf724785c0127ea90f42099cb3c9512439e

  public:
    TwoDArray<T> (int r, int c, T def);
    ~TwoDArray<T>();
    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);
    void print();
    int getNumRows();
    int getNumCols();
<<<<<<< HEAD

};
=======
};

>>>>>>> a7332cf724785c0127ea90f42099cb3c9512439e
#endif
