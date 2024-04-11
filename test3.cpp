#include "uxchar.h"
#include <iostream>

int main()
{
  uxstring a("Привет, мир!");
  uxstring b("мир");
  std::cout << a.find(b) << std::endl;
  return 0;
}
