.PHONY: all clean

OBJ = uxstring.o length.o indexing.o find.o to_const_char_ptr.o equals.o

all: $(OBJ)
	ar rcs uxchar.a $(OBJ)

clean:
	rm $(OBJ) uxchar.a

uxstring.o:          src/uxstring.cpp
	g++ -c -o $@ $<
length.o:            src/length.cpp
	g++ -c -o $@ $<
indexing.o:          src/indexing.cpp
	g++ -c -o $@ $<
find.o:              src/find.cpp
	g++ -c -o $@ $<
to_const_char_ptr.o: src/to_const_char_ptr.cpp
	g++ -c -o $@ $<
equals.o:            src/equals.cpp
	g++ -c -o $@ $<
