#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class CellNode {
  private:
    T value;
    int row;
    int col;
    CellNode<T>* newNode;
    CellNode<T>* colNext;
    CellNode<T>* rowNext;

  public:
    CellNode<T>(int r, int c, T v);
    T getValue();
    int getRow();
    int getCol();
    CellNode<T>*& getColNext();
    CellNode<T>*& getRowNext();
    void setColNext(CellNode<T>& n);
    void setRowNext(CellNode<T>& n);
};

class rowNode {
  private:
    int value;
    rowNode* next;

  public:
    rowNode(int v);
    int getValue();
    rowNode* getNext();
    void setNext(rowNode* &n);
};

class colNode {
  private:
    int value;
    colNode* next;

  public:
    colNode(int v);
    int getValue();
    colNode* getNext();
    void setNext(colNode* &n);
};

#endif
