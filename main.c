#include "unicode.h"
#include <stdio.h>
#include <string.h>

int main()
{
  uchar uch1;
  char *ch = "𐍈";
  memcpy(&uch1, ch, 4);
  printf("%s\n", uch1.ch);
  return 0;
}
