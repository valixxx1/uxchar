// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"
#include <vector>

size_t uxstring::find(uxstring sub) const
{
  auto res = str.cbegin();
  for (; res + sub.length() != str.cend(); res++) {
    if (sub.str == std::vector<uxchar>(res, res + sub.length())) {
      return res - str.cbegin();
    }
  }
  return -1;
}
