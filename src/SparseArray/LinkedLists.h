#ifndef __LINKED_LISTS_H__
#define __LINKEDLISTS_H__

#include "Node.h"

template<typename T>
class LinkedListRow {
  private:
    rowNode* front;
    int s;
  
  public:
    LinkedListRow<T>();
    ~LinkedListRow<T>();
    void insert(CellNode<T>& n);
    void remove(CellNode<T>& n);
    Node<T>*& access(int r, int c);
    int size();
};

template<typename T>
class LinkedListCol {
  private:
    colNode* front;
    int s;

  public:
    LinkedListCol<T>();
    ~LinkedListCol<T>();
    void insert(CellNode<T>& n);
    void remove(CellNode<>T& n);
    int size();
};

#endif
