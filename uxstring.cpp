/* Это реализация конструктора строки uxstring
 *
 * Made by valixxx1 in 2024
 */

#include "uxchar.h"
#include <string>

uxstring::uxstring(std::string str)
{
  this->str = str;
}

uxstring::uxstring(const char *str)
{
  this->str = std::string(str);
}
