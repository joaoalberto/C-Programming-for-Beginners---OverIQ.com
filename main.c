#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
int main()
{
    int i = 12;
 
    printf("Address of i = %u \n", &i);
    printf("Value of i = %d ", i);
 
    // signal to operating system program ran fine
    return 0;
}