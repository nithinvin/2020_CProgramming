#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num_times = 1;

  if (argc == 2)
    num_times = atoi(argv[1]);

  while (num_times--) {
    printf("%d Just one small step for coders. One giant leap for", num_times);
    printf(" programmers!\n");
  }
  return 0;
}
