CPP = g++
CFLAGS = -Wall -Wextra -Werror

test.o: VectorOfVectors_tester.cpp VectorOfVectors.o
	$(CPP) $(CFLAGS) -o test.o $^

VectorOfVectors.o: VectorOfVectors.h VectorOfVectors.cpp
	$(CPP) $(CFLAGS) -c VectorOfVectors.cpp

clean:
	rm -f *.o;
	rm -f test.o;
	rm -f *~;
