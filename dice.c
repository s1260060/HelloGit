#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int Die1, Die2;
  char name;

  /* ask name */
  printf("What is your name?\n  > ");
  scanf("%s",&name);
  printf("Hello, %s!\n\n",&name);

  /* rolling dice */

  srand(time(NULL));

  Die1 = rand() % 6 + 1;
  Die2 = rand() % 6 + 1;


  /* output dice */
  printf("Die1 : %d \n", Die1);
  printf("Die2 : %d \n", Die2);

  return 0;
}
