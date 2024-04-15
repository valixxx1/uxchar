// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"
#include <cstring>
#include <string>

uxstring::operator const char*() {
  magic.clear();
  for (size_t i = 0; i < str.size(); i++) {
    for (size_t j = 0; j < 4; j++) {
      if (str[i].ch[j] != 0) {
        magic += str[i].ch[j];
      }
    }
  }
  return magic.c_str();
}
