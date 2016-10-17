#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "arrays.h"

int main()
{
  int a[1000] = {0};
  int iCounter = 0;
  srand(time(NULL));

  for (int i = 0; i < (sizeof(a)/sizeof(int)); ++i)
  {
    a[i] = rand() % 100;
    //number chosen 73
    if (a[i] == 73)
    {
      iCounter = Counter(iCounter);
    }
  }
  //prints out array
  printarray(a,1000);
  //finds first occurrence
  FindFirst(a,1000);
  //finds how many times 73 occurred
  printf("\n73 occurred %d times.", iCounter);
  return 0;
}
