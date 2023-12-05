all: checkers

checkers: main.cpp board.cpp 
	g++ -Wall -std=c++11 -o checkers main.cpp board.cpp 

clean:
	rm -f checkers