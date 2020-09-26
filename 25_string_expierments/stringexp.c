#include <stdio.h>
#include <string.h>

int main()
{
  //char my_name[] = "Nithin";
  char my_name[] = { 'N', 'i', 't', 'h', 'i', 'n', 'V', 'i'};

  printf("%s, size of my_name %d, strlen of my_name %d\n", my_name, sizeof(my_name), strlen(my_name));

  return 0;
}
