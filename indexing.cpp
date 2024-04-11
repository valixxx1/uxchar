/* Это реализация оператора индексирования (квадратные скобки) для строк uxstring
 *
 * Made by valixxx1 in 2024
 */

#include "uxchar.h"

std::string uxstring::operator[](size_t index)
{
  size_t count = 0;
  std::string::iterator it = str.begin();

  for (; it != str.end(); it++) {
    if ((*it & 0xC0) != 0x80) {
      if (count == index) {
        break;
      }
      count++;
    }
  }

  if        ((*it & 0b10000000) == 0b00000000) {
    return std::string(it, it+1);
  } else if ((*it & 0b11100000) == 0b11000000) {
    return std::string(it, it+2);
  } else if ((*it & 0b11110000) == 0b11100000) {
    return std::string(it, it+3);
  } else {
    return std::string(it, it+4);
  }
}
