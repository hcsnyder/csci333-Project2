CPP = g++
CFLAGS = -Wall -Wextra -Werror

test.o: TwoDArray_tester.cpp TwoDArray.o
	$(CPP) $(CFLAGS) -o test.o $^

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o;
	rm -f test;
	rm -f *~;
