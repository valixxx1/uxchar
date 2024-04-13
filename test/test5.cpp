#include "../uxchar.h"
#include <cassert>

int main()
{
  uxstring a = "Привет, мир!";
  assert(a.length() == 12);
  return 0;
}
