// Copyright (C) 2024 by valixxx1

#include "../uxchar.h"
#include <string>

uxstring::uxstring(std::string str)
{
  this->str = str;
}

uxstring::uxstring(const char *str)
{
  this->str = std::string(str);
}

uxstring::uxstring()
{
  this->str = std::string();
}

uxstring::uxstring(const uxstring & other)
{
  this->str = std::string(other);
}