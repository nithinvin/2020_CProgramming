#include <stdio.h>

int main()
{
  int mynum;
  
  printf("Enter a number: ");
  scanf("%d", &mynum);
  if (mynum > 0)
    printf("The given number is positive\n");
  else if (mynum < 0) 
    printf("The given number is negative\n");
  else if (mynum == 0)
    printf("The given number is 0\n");
  else
    printf("You junkie. Give me a valid integer\n");

  return 0;
}
