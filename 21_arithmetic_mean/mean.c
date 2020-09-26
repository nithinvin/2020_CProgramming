#include<stdio.h>

int main()
{
  int total = 0;
  int input_num = 1;
  int iter;

  for (iter = 1; input_num != 0; iter++) {
    printf("Enter a number: ");
    scanf("%d", &input_num);

    if(input_num == 0) {
      break;
    } 

    total = total + input_num;
    printf("Got input num = %d, Number of numbers = %d. Current total = %d. Current mean = %d\n", input_num, iter, total, total/iter);
  }
   
  return 0;
}
