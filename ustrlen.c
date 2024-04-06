#include "unicode.h"

len_t ustrlen(struct ustring *ustr) {
  len_t i = 0, count = 0;

  for (; i < ustr->len; i++) {
    if ((ustr->bytes[i] & 0xC0) != 0x80) {
      count++;
    }
  }

  return count;
}
