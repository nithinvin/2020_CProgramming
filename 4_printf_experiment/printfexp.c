#include <stdio.h>

int main()
{
  int c = 0;

  while (c <= 20) {
   printf("Decimal: %d, Octal: %o\n", c, c);
   c = c + 1;
  }
}
