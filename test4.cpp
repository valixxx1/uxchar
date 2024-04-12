#include "uxchar.h"
#include <cassert>

int main()
{
  uxstring a("Привет, мир!");
  uxstring b("йййййййййййййй");
  uxstring c("Привет, Рим!");
  uxstring d("Привет, мир!");
  assert(!(a == b));
  assert(!(a == c));
  assert(a == d);
  return 0;
}
