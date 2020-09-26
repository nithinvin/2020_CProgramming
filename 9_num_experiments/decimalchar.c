#include <stdio.h>
#include <time.h>

int main()
{
  int num = 0;
  struct timespec ts;

  ts.tv_sec = 0;
  ts.tv_nsec = 500000000;

  while (num < 128) {
    printf("Number %d is Ascii character is %c\n", num, num);
    num++;
    nanosleep(&ts, NULL);
  }

  return 0;
}
