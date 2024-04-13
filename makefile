.PHONY: all clean

OBJ = uxstring.o length.o indexing.o find.o to_const_char_ptr.o equals.o

all: $(OBJ)
	ar rcs uxchar.a $(OBJ)

clean:
	rm $(OBJ) uxchar.a

uxstring.o: uxstring.cpp
	g++ -c -o $@ $<
length.o: length.cpp
	g++ -c -o $@ $<
indexing.o: indexing.cpp
	g++ -c -o $@ $<
find.o: find.cpp
	g++ -c -o $@ $<
to_const_char_ptr.o: to_const_char_ptr.cpp
	g++ -c -o $@ $<
equals.o: equals.cpp
	g++ -c -o $@ $<
