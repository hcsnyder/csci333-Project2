BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
TDA = ./src/TwoDArray
VOV = ./src/VectorOfVectors
SA = ./src/SparseArray
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
OUT = $(TDA)/TwoDArray.o $(VOV)/VectorOfVectors.o $(SA)/SparseArray.0 $(SA)/LinkedLists.o $(SA)/Node.o
IMPLEMENTS = $(TDA)/TwoDArray.cpp $(VOV)/VectorOfVectors.cpp $(SA)/SparseArray.cpp $(SA)/LinkedLists.cpp $(SA)/Node.cpp
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

all:$(BUILD)/main $(TEST)/arrayTest

$(BUILD)/main: $(OUT) $(IMPLEMENTS)
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main $(OUT)

$(TEST)/arrayTest: $(TEST)/Array_test.cpp $(OUT) $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o $(TEST)/arrayTest $(TEST)/Array_test.cpp $(OUT) $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

TwoDArray.o: $(TDA)/TwoDArray.h $(TDA)/TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c $(TDA)/TwoDArray.cpp

VectorOfVectors.o: $(VOV)/VectorOfVectors.h $(VOV)/VectorOfVectors.cpp
	$(CPP) $(CPPFLAGS) -c $(VOV)/VectorOfVectors.cpp

SparseArray.o: $(SA)/SparseArray.h $(SA)/SparseArray.cpp
	$(CPP) $(CPPFLAGS) -c $(SA)/SparseArray.cpp

LinkedLists.o: $(SA)/LinkedLists.h $(SA)/LinkedLists.cpp
	$(CPP) $(CPPFLAGS) -c $(SA)/LinkedLists.cpp

Node.o: $(SA)/Node.h $(SA)/Node.cpp
	$(CPP) $(CPPFLAGS) -c $(SA)/Node.cpp

clean:
	rm -rf $(SRC)/*.o
	rm -rf *~
	rm -f $(BUILD)/main
	rm -f $(TEST)/arrayTest
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; make clean
