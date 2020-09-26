#include <stdio.h>

void print_hello()
{
  printf("Hello Nikitha\n");
  return;
}

int main()
{
  int num_times = 2000000;

  while (num_times--) {
    print_hello();
  }
  return 0;
}
