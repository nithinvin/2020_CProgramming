#include <stdio.h>

int main()
{
  int table = 0;
  int upto = 1;

  printf("Enter which table: ");
  scanf("%d", &table);
  while (upto <= 6667) {
    printf("%d * %d = %d\n", upto, table, upto * table);
    upto++;
  }
 
  return 0;
}
