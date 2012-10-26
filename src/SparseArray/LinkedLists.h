#ifndef __LINKED_LISTS_H__
#define __LINKEDLISTS_H__

#include "Node.h"

template<typename T>
class LinkedListRow {
  private:
    Node<T>* front;
  
  public:
    LinkedListRow<T>();
    ~LinkedListRow<T>();
    void insert(int r);
    void remove(int r);
    int size();
};

template<typename T>
class LinkedListCol {
  private:
    Node<T>* front;

  public:
    LinkedListCol<T>();
    ~LinkedListCol<T>();
    void insert(int c);
    void remove(int c);
    int size();
};

#endif
