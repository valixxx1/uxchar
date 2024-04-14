// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"

uxstring::operator const char*() const {
  return str.c_str();
}
