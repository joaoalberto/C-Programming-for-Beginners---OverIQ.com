#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
void rec();
 
int main()
{
    int size = 10;
 
    int my_arr1[SIZE]; // ok
    int my_arr2[size]; // not allowed until C99

    // signal to operating system program ran fine
    return 0;
}
 
void rec(int n)
{
    printf("Winding phase: Level = %d\n", n);
 
    if(n<3)
    {
        rec(n+1);
    }
 
    printf("Unwinding phase: Level = %d\n", n);
}