#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a>b && a>c)
    printf("%d is greater than %d and %d\n", a, b, c);
  else if(b>a && b>c)
    printf("%d is greater than %d and %d\n", b, a, c);
  else if(c>a && c>b)
    printf("%d is greater than %d and %d\n", c, a, b);
  else
    printf("Either any two or all three numbers are equal\n");

  return 0;
}
