#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
 
void rec();
 
int main()
{
     rec(1);
 
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