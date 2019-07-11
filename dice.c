#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int Die1, Die2, Total;
  char name;

  /* ask name */
  printf("What is your name?\n  > ");
  scanf("%s",&name);
  printf("Hello, %s!\n\n",&name);

  /* rolling dice */

  srand(time(NULL));

  Die1 = rand() % 6 + 1;
  Die2 = rand() % 6 + 1;

  Total = Die1 + Die2;


  /* output dice */
  printf("Rolling the dice...\n");
  printf("Die1 : %d \n", Die1);
  printf("Die2 : %d \n", Die2);
  printf("Total value : %d\n", Total);

  if(Total>7) printf("You won\n");
  else printf("You lost\n");

  return 0;
}
