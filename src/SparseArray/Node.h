#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
  private:
    T value;
    int row;
    int col;
    Node<T>* nextRow;
    Node<T>* nextCol;

  public:
    Node<T>(int r, int c, T v);
    T getValue();
    Node<T>*& getNextRow();
    void setNext(Node<T>& n);
};
#endif
