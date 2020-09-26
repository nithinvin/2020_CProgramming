#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("\nEnter second number: ");
  scanf("%d", &num2);

  printf("%d added to %d is %d\n", num1, num2, num1 + num2);
  printf("%d subtracted from %d is %d\n", num2, num1, num1 - num2);
  printf("%d multiplied to %d is %d\n", num1, num2, num1 * num2);
  printf("%d divided by %d is %d\n", num1, num2, num1 / num2);
  printf("If %d divided by %d, then remainder is %d\n", num1, num2, num1 % num2);

  return 0;
}
