#include <stdio.h>

int main()
{
  int char_index = 0;
  char person_name[16];

  puts("Enter your name");
  scanf("%20s", person_name);
  for (char_index = 0; person_name[char_index]; char_index++)
    printf("index: %d, character: %c\n", char_index, person_name[char_index]);

  return 0;
}
