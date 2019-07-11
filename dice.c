#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int Die1, Die2;

  /* 乱数の種を初期化 */
  srand(time(NULL));

  /* サイコロを振る */
  Die1 = rand() % 6 + 1;
  Die2 = rand() % 6 + 1;

  /* サイコロの出目を出力 */
  printf("Die1 : %d \n", Die1);
  printf("Die2 : %d \n", Die2);


  return 0;
}
