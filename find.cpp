/* Это реализация функции find для строк uxstring
 *
 * size_t find(uxstring sub) - возвращает индекс начала подстроки sub
 *
 * Made by valixxx1 in 2024
 */

#include "uxchar.h"

size_t uxstring::find(uxstring sub) {
  size_t res = str.find(sub.str);
  size_t count = 0;

  if (res == std::string::npos) {
    return -1;
  }

  for (size_t i = 0; i < res; i++) {
    if ((str[i] & 0xC0) != 0x80) {
      count++;
    }
  }

  return count;
}
