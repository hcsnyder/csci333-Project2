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

template<typename T>
class rowNode {
  private:
    int value;
    rowNode* next;
    CellNode* nextCell;

  public:
    rowNode(int v);
    int getValue();
    rowNode*& getNext();
    void setNext(rowNode& n);
    CellNode<T>*& getCellNode();
    void setCellNode(CellNode<T>& n);
};

template<typename T>
class colNode {
  private:
    int value;
    colNode* next;
    CellNode* nextCell;

  public:
    colNode(int v);
    int getValue();
    colNode*& getNext();
    void setNext(colNode& n);
    CellNode<T>*& getCellNode();
    void setCellNode(CellNode<T>& n);
};

#endif
