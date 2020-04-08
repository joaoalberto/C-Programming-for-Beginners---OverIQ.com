#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
void return_more_than_one(int a, int b, int *sum, int *diff, int *prod);
 
int main()
{
    int x = 40, y = 10, sum, diff, prod;
 
    return_more_than_one(x, y, &sum, &diff, &prod);
 
    printf("%d + %d = %d\n",x, y, sum);
    printf("%d - %d = %d\n",x, y, diff);
    printf("%d * %d = %d\n",x, y, prod);
 
    // signal to operating system program ran fine
    return 0;
}
 
void return_more_than_one(int a, int b, int *sum, int *diff, int *prod)
{
    *sum = a+b;
    *diff = a-b;
    *prod = a*b;
}