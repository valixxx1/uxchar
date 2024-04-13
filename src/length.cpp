// Copyright (C) 2024 by valixxx1

#include "../uxchar.h"

size_t uxstring::length() const
{
  size_t count = 0;

  for (size_t i = 0; i < str.length(); i++) {
    if ((str[i] & 0xC0) != 0x80) {
      count++;
    }
  }

  return count;
}
