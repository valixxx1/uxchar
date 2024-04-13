#include <iostream>
#include "../uxchar.h"

int main()
{
  uxstring a("Привет, мир!");
  std::cout << a.length() << std::endl;
  return 0;
}
