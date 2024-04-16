cmake_minimum_required(VERSION 3.22.1)
project(uxchar)

add_library(uxchar STATIC
  src/uxstring/uxstring.cpp
  src/uxstring/length.cpp
  src/uxstring/indexing.cpp
  src/uxstring/find.cpp
  src/uxstring/to_const_char_ptr.cpp
  src/uxstring/equals.cpp
  src/uxstring/clear.cpp
  src/uxstring/empty.cpp
  src/uxchar/uxchar.cpp
  src/uxchar/equals.cpp
  src/uxchar/size.cpp
)
