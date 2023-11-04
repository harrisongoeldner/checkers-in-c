all: main

test1: main.c board.c 
	gcc -Wall -std=c99 -o program main.c board.c

clean:
	rm -f main

