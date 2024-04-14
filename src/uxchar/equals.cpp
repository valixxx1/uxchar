// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"

bool uxchar::operator==(const uxchar & other) const
{
  for (int i = 0; i < 4; i++) {
    if (ch[i] != other.ch[i]) {
      return 0;
    }
  }
  return 1;
}

bool uxchar::operator!=(const uxchar & other) const
{
  for (int i = 0; i < 4; i++) {
    if (ch[i] != other.ch[i]) {
      return 1;
    }
  }
  return 0;
}
