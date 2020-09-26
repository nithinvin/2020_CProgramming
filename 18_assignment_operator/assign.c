#include <stdio.h>

int main()
{
  int nithin_pizza = 2;
  int nikitha_pizza = 6;
  int temporary_plate = 0;
  
  int akila_pizza = 3;

  printf("Akila has %d pizzas\n", akila_pizza);

  akila_pizza -= 5;

  printf("Akila has %d pizzas\n", akila_pizza);

  /*Nithin's code below*/
  printf("Nithin has %d pizzas\n", nithin_pizza);
  printf("Nikitha has %d pizzas\n", nikitha_pizza);

  temporary_plate = nikitha_pizza;
  nikitha_pizza   = nithin_pizza;
  nithin_pizza    = temporary_plate;
                                                                                                                                                 
  printf("Nithin has %d pizzas\n", nithin_pizza);
  printf("Nikitha has %d pizzas\n", nikitha_pizza);
  printf("temporary plate has %d pizzas\n", temporary_plate);

  return 0; 
}
