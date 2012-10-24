BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
TDA = ./src/TwoDArray
VOV = ./src/VectorOfVectors
SA = ./src/SparseArray
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
OUT = $(TDA)/TwoDArray.o
IMPLEMENTS = $(TDA)/TwoDArray.cpp
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

TwoDArray.o: $(TDA)/TwoDArray.h $(TDA)/TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c $(TDA)/TwoDArray.cpp

clean:
	rm -rf $(SRC)/*.o
	rm -rf *~
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; make clean
