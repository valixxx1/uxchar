.PHONY: all clean

SRC = src/ustrlen.c src/ustrlenbytes.c src/ustrfill.c src/ustrfree.c src/ustrtobytes.c src/bytestoustr.c src/unew.c
OBJ = $(SRC:.c=.o)

all: test.c $(OBJ)
	gcc -o test test.c $(OBJ)

clean:
	rm $(OBJ) test

uxchar.o: uxchar.h $(SRC)
	gcc -o ustrlen.o src/ustrlen.c -c
	gcc -o ustrlenbytes.o src/ustrlenbytes.c -c
	gcc -o ustrfill.o src/ustrfill.c -c
	gcc -o ustrfree.o src/ustrfree.c -c
	gcc -o ustrtobytes.o src/ustrtobytes.c -c
	gcc -o bytestoustr.o src/bytestoustr.c -c
	gcc -o unew.o src/unew.c -c
