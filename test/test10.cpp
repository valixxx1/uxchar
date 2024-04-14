#include "../uxchar.h"
#include <iostream>

int main()
{
  uxchar a = "П", b = "€", c = "𐍈";
  std::cout << a.size() << ' ' << b.size() << ' ' << c.size() << '\n';
  return 0;
}
