// Copyright (C) 2024 by valixxx1

#pragma once

#include <string>

class uxstring {
  std::string str;

public:
  uxstring();
  uxstring(std::string);
  uxstring(const char*);
  uxstring(const uxstring&);

  size_t length() const;
  size_t find(uxstring sub) const;
  void clear();

  std::string operator[](size_t index) const;
  bool operator==(const uxstring & other) const;
  bool operator!=(const uxstring & other) const;
  operator const char*() const;
};
