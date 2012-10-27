#include "gtest/gtest.h"
#include "../src/TwoDArray/TwoDArray.h"
#include "../src/VectorOfVectors/VectorOfVectors.h"
#include "../src/SparseArray/SparseArray.h"

#include <string>
#include <iostream>

TEST(arrayTest, insert) {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);
  TwoDArray<double>* d = new TwoDArray<int>(5, 5, 0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(7, i->access(2, 2));
  EXPECT_EQ(3.145, d->access(4, 4));
  EXPECT_EQ("Hello", s->access(0, 0));

  delete i;
  delete d;
  delete s;
}

TEST(arrayTest, access) {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);
  TwoDArray<double>* d = new TwoDArray<int>(5, 5, 0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5, 5, "World");
    
  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(7, i->access(2, 2));
  EXPECT_EQ(3.145, d->access(4, 4));
  EXPECT_EQ("World", s->access(2, 2));

  delete i;
  delete d;
  delete s;
}

Test(arrayTest, remove) {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);
  TwoDArray<double>* d = new TwoDArray<int>(5, 5, 0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5, 5, "o");
  
  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");
  i->insert(3, 3, 9);
  
  i->remove(2, 2);
  d->remove(4, 4);
  s->remove(0, 0);

  s->insert(0, 0, "y");

  EXPECT_EQ(0, i->access(2, 2));
  EXPECT_EQ(0, d->access(4, 4));
  EXPECT_EQ("y", s->access(0, 0));
  EXPECT_EQ(9, i->insert(3, 3));

  delete i;
  delete d;
  delete s;
}

TEST(arrayTest, print) {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);
  TwoDArray<double>* d = new TwoDArray<int>(5, 5, 0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  i->print();
  std::cout << std::endl;
  d->print();
  std::cout << std::endl;
  s->print();

  delete i;
  delete d;
  delete s;
}

TEST(arrayTest, getNumRows) {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);
  TwoDArray<double>* d = new TwoDArray<int>(6, 5, 0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(10, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(5, i->getNumRows());
  EXPECT_EQ(6, d->getNumRows());
  EXPECT_EQ(10, s->getNumRows());

  delete i;
  delete d;
  delete s;
}

TEST(arrayTest, getNumCols) {
  TwoDArray<int>* i = new TwoDArray<int>(5, 5, 0);
  TwoDArray<double>* d = new TwoDArray<int>(5, 10, 0);
  TwoDArray<std::string>* s = new TwoDArray<std::string>(5, 19, 0);

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(5, i->getNumCols());
  EXPECT_EQ(10, d->getNumCols());
  EXPECT_EQ(19, s->getNumCols());

  delete i;
  delete d;
  delete s;
}


TEST(vectorTest, insert) {
  VectorOfVectors<int>* i = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<double>* d = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<std::string>* s = new VectorOfVectors<std::string>(5, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(7, i->access(2, 2));
  EXPECT_EQ(3.145, d->access(4, 4));
  EXPECT_EQ("Hello", s->access(0, 0));

  delete i;
  delete d;
  delete s;
}

TEST(vectorTest, access) {
  VectorOfVectors<int>* i = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<double>* d = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<std::string>* s = new VectorOfVectors<std::string>(5, 5, "World");
    
  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(7, i->access(2, 2));
  EXPECT_EQ(3.145, d->access(4, 4));
  EXPECT_EQ("World", s->access(2, 2));

  delete i;
  delete d;
  delete s;
}

Test(vectorTest, remove) {
  VectorOfVectors<int>* i = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<double>* d = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<std::string>* s = new VectorOfVectors<std::string>(5, 5, "o");
  
  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");
  i->insert(3, 3, 9);
  
  i->remove(2, 2);
  d->remove(4, 4);
  s->remove(0, 0);

  s->insert(0, 0, "y");

  EXPECT_EQ(0, i->access(2, 2));
  EXPECT_EQ(0, d->access(4, 4));
  EXPECT_EQ("y", s->access(0, 0));
  EXPECT_EQ(9, i->insert(3, 3));

  delete i;
  delete d;
  delete s;
}

TEST(vectorTest, print) {
  VectorOfVectors<int>* i = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<double>* d = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<std::string>* s = new VectorOfVectors<std::string>(5, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  i->print();
  std::cout << std::endl;
  d->print();
  std::cout << std::endl;
  s->print();

  delete i;
  delete d;
  delete s;
}

TEST(vectorTest, getNumRows) {
  VectorOfVectors<int>* i = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<double>* d = new VectorOfVectors<int>(6, 5, 0);
  VectorOfVectors<std::string>* s = new VectorOfVectors<std::string>(10, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(5, i->getNumRows());
  EXPECT_EQ(6, d->getNumRows());
  EXPECT_EQ(10, s->getNumRows());

  delete i;
  delete d;
  delete s;
}

TEST(vectorTest, getNumCols) {
  VectorOfVectors<int>* i = new VectorOfVectors<int>(5, 5, 0);
  VectorOfVectors<double>* d = new VectorOfVectors<int>(5, 10, 0);
  VectorOfVectors<std::string>* s = new VectorOfVectors<std::string>(5, 19, 0);

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(5, i->getNumCols());
  EXPECT_EQ(10, d->getNumCols());
  EXPECT_EQ(19, s->getNumCols());

  delete i;
  delete d;
  delete s;
}


TEST(sparseTest, insert) {
  SparseArray<int>* i = new SparseArray<int>(5, 5, 0);
  SparseArray<double>* d = new SparseArray<int>(5, 5, 0);
  SparseArray<std::string>* s = new SparseArray<std::string>(5, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(7, i->access(2, 2));
  EXPECT_EQ(3.145, d->access(4, 4));
  EXPECT_EQ("Hello", s->access(0, 0));

  delete i;
  delete d;
  delete s;
}

TEST(sparseTest, access) {
  SparseArray<int>* i = new SparseArray<int>(5, 5, 0);
  SparseArray<double>* d = new SparseArray<int>(5, 5, 0);
  SparseArray<std::string>* s = new SparseArray<std::string>(5, 5, "World");
    
  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(7, i->access(2, 2));
  EXPECT_EQ(3.145, d->access(4, 4));
  EXPECT_EQ("World", s->access(2, 2));

  delete i;
  delete d;
  delete s;
}

Test(sparseTest, remove) {
  SparseArray<int>* i = new SparseArray<int>(5, 5, 0);
  SparseArray<double>* d = new SparseArray<int>(5, 5, 0);
  SparseArray<std::string>* s = new SparseArray<std::string>(5, 5, "o");
  
  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");
  i->insert(3, 3, 9);
  
  i->remove(2, 2);
  d->remove(4, 4);
  s->remove(0, 0);

  s->insert(0, 0, "y");

  EXPECT_EQ(0, i->access(2, 2));
  EXPECT_EQ(0, d->access(4, 4));
  EXPECT_EQ("y", s->access(0, 0));
  EXPECT_EQ(9, i->insert(3, 3));

  delete i;
  delete d;
  delete s;
}

TEST(sparseTest, print) {
  SparseArray<int>* i = new SparseArray<int>(5, 5, 0);
  SparseArray<double>* d = new SparseArray<int>(5, 5, 0);
  SparseArray<std::string>* s = new SparseArray<std::string>(5, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  i->print();
  std::cout << std::endl;
  d->print();
  std::cout << std::endl;
  s->print();

  delete i;
  delete d;
  delete s;
}

TEST(sparseTest, getNumRows) {
  SparseArray<int>* i = new SparseArray<int>(5, 5, 0);
  SparseArray<double>* d = new SparseArray<int>(6, 5, 0);
  SparseArray<std::string>* s = new SparseArray<std::string>(10, 5, "o");

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(5, i->getNumRows());
  EXPECT_EQ(6, d->getNumRows());
  EXPECT_EQ(10, s->getNumRows());

  delete i;
  delete d;
  delete s;
}

TEST(sparseTest, getNumCols) {
  SparseArray<int>* i = new SparseArray<int>(5, 5, 0);
  SparseArray<double>* d = new SparseArray<int>(5, 10, 0);
  SparseArray<std::string>* s = new SparseArray<std::string>(5, 19, 0);

  i->insert(2, 2, 7);
  d->insert(4, 4, 3.145);
  s->insert(0, 0, "Hello");

  EXPECT_EQ(5, i->getNumCols());
  EXPECT_EQ(10, d->getNumCols());
  EXPECT_EQ(19, s->getNumCols());

  delete i;
  delete d;
  delete s;
}
