.PHONY: all clean

SRC = ustrlen.c ustrlenbytes.c ustrfill.c ustrfree.c ustrtobytes.c bytestoustr.c
OBJ = $(SRC:.c=.o)

all: test.c $(OBJ)
	gcc -o test test.c $(OBJ)

clean:
	rm $(OBJ) test

uxchar.o: uxchar.h $(SRC)
	gcc -o ustrlen.o ustrlen.c -c
	gcc -o ustrlenbytes.o ustrlenbytes.c -c
	gcc -o ustrfill.o ustrfill.c -c
	gcc -o ustrfree.o ustrfree.c -c
	gcc -o ustrtobytes.o ustrtobytes.c -c
	gcc -o bytestoustr.o bytestoustr.c -c
