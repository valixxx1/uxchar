#include "../include/uxchar.h"
#include <stdlib.h>

void ustrfree(struct ustring *ustr) {
  free(ustr->bytes);
  ustr->len = 0;
}
