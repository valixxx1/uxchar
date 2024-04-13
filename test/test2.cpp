#include "../uxchar.h"
#include <cassert>

int main()
{
  uxstring a("Привет, мир! 你好");
  assert(a[0] == "П");
  assert(a[3] == "в");
  assert(a[11] == "!");
  assert(a[13] == "你");
  return 0;
}
