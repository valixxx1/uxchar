#include "uxchar.h"
#include <cstdio>

int main()
{
  uxchar ch1("й");
  //uxputc(ch1);
  FILE *file = fopen("test.txt", "w");
  if (!file) {
    return -1;
  }

  uxfputc(ch1, file);

  fclose(file);
  return 0;
}
