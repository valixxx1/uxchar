#include "../uxchar.h"
#include <cassert>

int main()
{
  uxchar a("Й");
  uxchar b("Й");
  uxchar c = "а";
  assert(a == b);
  assert(a != c);
  return 0;
}
