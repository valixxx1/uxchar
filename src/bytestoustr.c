#include "../include/uxchar.h"
#include <string.h>

struct ustring bytestoustr(char *bytes) {
  struct ustring ustr;
  ustr.bytes = bytes;
  ustr.len = strlen(bytes);
  return ustr;
}
