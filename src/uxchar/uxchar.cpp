// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"
#include <cstring>

uxchar::uxchar()
{
  std::memset(ch, 0, 4);
}

uxchar::uxchar(std::string str)
{
  std::memset(ch, 0, 4);

  memcpy(ch, str.c_str(), str.length());
}

uxchar::uxchar(const char* str)
{
  std::memset(ch, 0, 4);

  memcpy(ch, str, strlen(str));
}

uxchar::uxchar(const uxchar& other)
{
  memcpy(ch, other.ch, 4);
}
