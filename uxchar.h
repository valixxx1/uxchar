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
  size_t length();
};

uxstring::uxstring(std::string str)
{
  this->str = str;
}

size_t uxstring::length()
{
  size_t count = 0;

  for (size_t i = 0; i < str.length(); i++) {
    if ((str[i] & 0xC0) != 0x80) {
      count++;
    }
  }

  return count;
}
