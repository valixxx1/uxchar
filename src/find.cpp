// Copyright (C) 2024 by valixxx1

#include "../uxchar.h"

size_t uxstring::find(uxstring sub) const
{
  size_t res = str.find(sub.str);
  size_t count = 0;

  if (res == std::string::npos) {
    return -1;
  }

  for (size_t i = 0; i < res; i++) {
    if ((str[i] & 0xC0) != 0x80) {
      count++;
    }
  }

  return count;
}
