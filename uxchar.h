// Copyright (C) 2024 by valixxx1

#pragma once

#include <string>
#include <vector>

class uxchar {
  friend class uxstring;

  char ch[4];

public:
  uxchar();
  uxchar(std::string);
  uxchar(const char*);
  uxchar(const uxchar&);

  bool operator==(const uxchar & other) const;
  bool operator!=(const uxchar & other) const;

  size_t size() const;
};

class uxstring {
  std::vector<uxchar> str;
  std::string magic;

public:
  uxstring();
  uxstring(std::string);
  uxstring(const char*);
  uxstring(const uxstring&);

  size_t length() const;
  size_t find(uxstring sub) const;
  void clear();
  bool empty() const;

  uxchar operator[](size_t index) const;
  bool operator==(const uxstring & other) const;
  bool operator!=(const uxstring & other) const;
  operator const char*();
};
