// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"
#include <cstring>
#include <string>

uxstring::uxstring(std::string other)
{
  uxchar a;
  str.clear();
  for (size_t i = 0; i < other.length(); i++) {
    memset(a.ch, 0, 4);
    if        ((other[i] & 0b10000000) == 0b00000000) {
      a.ch[0] = other[i];
    } else if ((other[i] & 0b11100000) == 0b11000000) {
      a.ch[0] = other[i];
      a.ch[1] = other[i+1];
      i += 1;
    } else if ((other[i] & 0b11110000) == 0b11100000) {
      a.ch[0] = other[i];
      a.ch[1] = other[i+1];
      a.ch[2] = other[i+2];
      i += 2;
    } else {
      a.ch[0] = other[i];
      a.ch[1] = other[i+1];
      a.ch[2] = other[i+2];
      a.ch[3] = other[i+3];
      i += 3;
    }
    str.push_back(a);
  }
}

uxstring::uxstring(const char *other)
{
  uxchar a;
  str.clear();
  for (size_t i = 0; i < strlen(other); i++) {
    memset(a.ch, 0, 4);
    if        ((other[i] & 0b10000000) == 0b00000000) {
      a.ch[0] = other[i];
    } else if ((other[i] & 0b11100000) == 0b11000000) {
      a.ch[0] = other[i];
      a.ch[1] = other[i+1];
      i += 1;
    } else if ((other[i] & 0b11110000) == 0b11100000) {
      a.ch[0] = other[i];
      a.ch[1] = other[i+1];
      a.ch[2] = other[i+2];
      i += 2;
    } else {
      a.ch[0] = other[i];
      a.ch[1] = other[i+1];
      a.ch[2] = other[i+2];
      a.ch[3] = other[i+3];
      i += 3;
    }
    str.push_back(a);
  }
}

uxstring::uxstring()
{
  str.clear();
}

uxstring::uxstring(const uxstring & other)
{
  uxchar a;
  str.clear();
  for (size_t i = 0; i < other.str.size(); i++) {
    memset(a.ch, 0, 4);
    memcpy(a.ch, other.str[i].ch, 4);
    str.push_back(a);
  }
}
