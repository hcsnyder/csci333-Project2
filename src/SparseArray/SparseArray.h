#include __SPARSEARRAY_H__
#include __SPARSEARRAY_H__

#include "LinkedLists.h"

template<typename T>
class SparseArray {
  private:
    T defSpace;
  public:
    SparseArray<T> (int r, int c, T def);
    ~SparseArray<T>();
    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);
    void print();
    int getNumRows();
    int getNumCols();
};
#endif
