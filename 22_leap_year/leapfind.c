#include<stdio.h>

int main ()
{
  int year;

  printf("Enter the year: ");
  scanf("%d", &year);
  
  if(year%4 == 0) {
    if(year%100 == 0) {
      if(year%400 == 0)
        printf("Divisible by 4, as well as 100, as well as 400. It is a leap year\n");
      else 
        printf("Divisible by 4, Divisible by 100, Not divisible by 400. It is not a leap year\n");
    }
    else {
      printf("Divisible by 4, Not divisible by 100. It is a leap year\n");
    }
  }
  else {
    printf("Not divisible by 4. It is not a leap year\n");
  }
  
  return 0;
}
