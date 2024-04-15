.PHONY: all clean

OBJ = uxstring.o length.o indexing.o find.o to_const_char_ptr.o sequals.o clear.o empty.o uxchar.o cequals.o size.o

all: $(OBJ)
	ar rcs uxchar.a $(OBJ)

clean:
	rm $(OBJ) uxchar.a

uxstring.o:          src/uxstring/uxstring.cpp
	g++ -c -o $@ $< -std=c++20
length.o:            src/uxstring/length.cpp
	g++ -c -o $@ $< -std=c++20
indexing.o:          src/uxstring/indexing.cpp
	g++ -c -o $@ $< -std=c++20
find.o:              src/uxstring/find.cpp
	g++ -c -o $@ $< -std=c++20
to_const_char_ptr.o: src/uxstring/to_const_char_ptr.cpp
	g++ -c -o $@ $< -std=c++20
sequals.o:           src/uxstring/equals.cpp
	g++ -c -o $@ $< -std=c++20
clear.o:             src/uxstring/clear.cpp
	g++ -c -o $@ $< -std=c++20
empty.o:             src/uxstring/empty.cpp
	g++ -c -o $@ $< -std=c++20
uxchar.o:            src/uxchar/uxchar.cpp
	g++ -c -o $@ $< -std=c++20
cequals.o:           src/uxchar/equals.cpp
	g++ -c -o $@ $< -std=c++20
size.o:              src/uxchar/size.cpp
	g++ -c -o $@ $< -std=c++20
