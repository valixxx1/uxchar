#ifndef UXCHAR_H
#define UXCHAR_H

#include <string>
#include <cstring>

class uxchar {
  friend void uxputc(uxchar);
  friend void uxfputc(uxchar, FILE*);

  char buf[4];

public:
  uxchar(std::string ch)
  {
    std::memcpy(buf, ch.c_str(), 4);
  }
};

void
uxputc(uxchar ch)
{
  printf("%s", ch.buf);
}

void
uxfputc(uxchar ch, FILE *file)
{
  fprintf(file, "%s", ch.buf);
}
#endif
