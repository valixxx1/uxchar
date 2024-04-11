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
  std::string operator[](size_t index);
};
