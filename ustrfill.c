#include "uxchar.h"
#include <stdlib.h>
#include <string.h>

void ustrfill(struct ustring *ustr, char *cstr) {
  ustr->bytes = (char*) malloc(strlen(cstr));
  strcpy(ustr->bytes, cstr);
  ustr->len = strlen(cstr);
}
