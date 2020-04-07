#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
int main()
{
  int my_arr[5] = {1, 2, 3, 4, 5}, i;
  int *p;
  p = my_arr;
  // p = &my_arr[0]; // you can also do this

  for(i = 0; i < 5; i++)
  {
      printf("Value of a[%d] = %d\t", i, *(p + i) );
      printf("Address of a[%d] = %u\n", i, p + i );
  }


  // signal to operating system program ran fine
  return 0;
}