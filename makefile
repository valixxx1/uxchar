.PHONY: all clean

all: main.o unicode.o
	gcc unicode.o main.o -o main

clean:
	rm main *.o

unicode.o: unicode.c
	gcc -o unicode.o -c unicode.c

main.o: main.c
	gcc -o main.o -c main.c
