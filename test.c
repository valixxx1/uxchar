#include "include/uxchar.h"
#include <stdio.h>

int main()
{
  struct ustring a;
  ustrfill(&a, "Привет, мир!");
  printf("%lld\n", ustrlen(&a));
  //printf("%lld\n", ustrlenbytes(&a));
  ustrfree(&a);
  return 0;
}
