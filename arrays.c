#include "arrays.h"
#include <stdio.h>
#include <stdlib.h>

//int count
void printarray(int a[], int count)
{
  //prints each number separately
  for (int i = 0; i < count; ++i)
    printf("%d[%i], " , a[i], i);
  printf("\n");
}
int Counter(unsigned int Counter)
{
  //adds 1 to counter and returns the added 1
  ++Counter;
  return Counter;
}
//function to find first occurrence of the number 73
void FindFirst(int a[], int Find)
{
  int breakCounter = 0;
  //for loop used to go through all numbers
  for (int i = 0; i < 1000; ++i)
  {
    //if the number is 73
    if ( a[i] == 73)
    {
      //it will print the first occurrence
      printf("\n73 first occurred at point %i", i);
      //then add to the counter
      ++breakCounter;
      break;
    }
  }
  //if there was nothing added to the counter
  if (breakCounter == 0)
  {
    //prints -1
    printf("-1");
  }
}
