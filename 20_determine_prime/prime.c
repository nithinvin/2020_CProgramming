#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int input_num;
  int iter;
  int prime = 1;
  int remainder;
 
  //printf("Enter a number: ");
  //scanf("%d", &input_num);
  if (argc == 2)
    input_num = atoi(argv[1]);

  if (input_num == 1) {
    printf("1 is neither prime nor composite\n");
    goto exit;
  } else if(input_num < 1) {
    printf("Nope. Don't try this with me.\n");
    goto exit;
  }

  for(iter = 2; iter < sqrt(input_num); iter++) {
    remainder = input_num % iter;
    printf("Dividing %d by %d, we get remainder %d\n", input_num, iter, remainder);
    if (remainder == 0) {
      prime = 0;
      break;
    }
  }
  
  if (prime)
    printf("%d is a prime number\n", input_num);
  else
    printf("%d is a composite number\n", input_num);

exit:
  return 0;
}
