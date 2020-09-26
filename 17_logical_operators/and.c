#include <stdio.h>

int main()
{
  int idly = 0;
  int dosai = 1;
  int pongal = 1;
  int sambar = 0;
  int chutney = 1;

  printf("pongal = %d, sambar = %d, pongal && sambar = %d\n", pongal, sambar, pongal && sambar);
  
  printf("idly = %d, sambar = %d, idly || sambar = %d\n", idly, sambar, idly || sambar);

  if(!chutney)
    printf("Chutney is not there\n");

  printf("Chutney = %d, Not Chutney = %d\n", chutney, !chutney);

  return 0;
}
