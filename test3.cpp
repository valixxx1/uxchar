#include "uxchar.h"
#include <cassert>
#include <iostream>

int main()
{
  uxstring a("Привет, мир!");
  uxstring b("мир");
  uxstring c("你好！");
  std::cout << a.find(b) << std::endl;
  assert(a.find(c) == -1);
  return 0;
}
