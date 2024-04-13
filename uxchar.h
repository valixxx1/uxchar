/* Это заголовочный файл библиотеки uxchar для работы с UTF-8 строками
 *
 * Made by valixxx1 in 2024
 */

#pragma once

#include <string>

class uxstring {
  std::string str;

public:
  uxstring(std::string);
  uxstring(const char*);
  size_t length() const;
  size_t find(uxstring sub);
  std::string operator[](size_t index);
  bool operator==(const uxstring & other);
  bool operator!=(const uxstring & other);
};
