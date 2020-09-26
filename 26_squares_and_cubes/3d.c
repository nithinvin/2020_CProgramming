#include <stdio.h>

int main()
{
  int shape;

  printf("Enter a number: ");
  scanf("%d", &shape);

  printf("Square of %d is %d\n", shape, shape * shape);
  printf("Cube of %d is %d\n", shape, shape * shape * shape);
 
  return 0;
}
  
