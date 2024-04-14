.PHONY: all clean

OBJ = uxstring.o length.o indexing.o find.o to_const_char_ptr.o sequals.o clear.o empty.o uxchar.o cequals.o

all: $(OBJ)
	ar rcs uxchar.a $(OBJ)

clean:
	rm $(OBJ) uxchar.a

uxstring.o:          src/uxstring/uxstring.cpp
	g++ -c -o $@ $<
length.o:            src/uxstring/length.cpp
	g++ -c -o $@ $<
indexing.o:          src/uxstring/indexing.cpp
	g++ -c -o $@ $<
find.o:              src/uxstring/find.cpp
	g++ -c -o $@ $<
to_const_char_ptr.o: src/uxstring/to_const_char_ptr.cpp
	g++ -c -o $@ $<
sequals.o:           src/uxstring/equals.cpp
	g++ -c -o $@ $<
clear.o:             src/uxstring/clear.cpp
	g++ -c -o $@ $<
empty.o:             src/uxstring/empty.cpp
	g++ -c -o $@ $<
uxchar.o:            src/uxchar/uxchar.cpp
	g++ -c -o $@ $<
cequals.o:           src/uxchar/equals.cpp
	g++ -c -o $@ $<
