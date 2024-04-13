/* Это реализация оператора == для строк uxstring
 *
 * Made by valixxx1 in 2024
 */

#include "uxchar.h"

bool uxstring::operator==(const uxstring & other)
{
  if (this->length() != other.length()) {
    return 0;
  }

  for (size_t i = 0; i < str.length(); i++) {
    if (str[i] != other.str[i]) {
      return 0;
    }
  }

  return 1;
}

bool uxstring::operator!=(const uxstring & other)
{
  if (this->length() != other.length()) {
    return 1;
  }

  for (size_t i = 0; i < str.length(); i++) {
    if (str[i] != other.str[i]) {
      return 1;
    }
  }

  return 0;
}
