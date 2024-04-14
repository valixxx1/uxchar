#include "../uxchar.h"
#include <cstdio>

int main()
{
  uxstring a = "Привет, мир!";
  a[0] = "Р";
  puts(a);
  return 0;
}
