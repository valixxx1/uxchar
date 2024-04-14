// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"

size_t uxchar::size() const
{
  if (ch[3] != 0) {
    return 4;
  }
  if (ch[2] != 0) {
    return 3;
  }
  if (ch[1] != 0) {
    return 2;
  }
  if (ch[0] != 0) {
    return 1;
  }
  return 0;
}
