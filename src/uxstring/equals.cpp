// Copyright (C) 2024 by valixxx1

#include "../../uxchar.h"

bool uxstring::operator==(const uxstring & other) const
{
  return str == other.str;
}

bool uxstring::operator!=(const uxstring & other) const
{
  return str != other.str;
}
