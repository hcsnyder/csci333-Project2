#ifndef __VECTOROFVECTORS_H__
#define __VECTOROFVECTORS_H__
#include <vector>

template <typename T>
class VectorOfVectors {
  private:
    if(T = int) {
      vector<int>** theArray;
    }
    else if(T = std::string) {
      vector<std::string>** theArray;
    }
    T defSpace;

  public:
    VectorOfVectors<T> (int r, int c, T def);
    ~VectorOfVectors<T>();
    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);
    void print();
    int getNumRows();
    int getNumCols();
};
#endif
