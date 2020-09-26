#include <stdio.h>

int main()
{
  int spider, super;

  printf("Enter power of spider man: ");
  scanf("%d", &spider);
  printf("Enter power of super man: ");
  scanf("%d", &super);

  if (super >= spider)
    printf("Super man is more powerful or atleast as powerful as spiderman\n");
  else
    printf("Cool. superman is weaker than spiderman\n");

  return 0;
}
