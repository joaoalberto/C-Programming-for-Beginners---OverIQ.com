#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
int factorial(int );
 
int main()
{
    int i = 1, *ip = &i;
 
    char *sports[] = {
                         "golf",
                         "hockey",
                         "football",
                         "cricket",
                         "shooting"
                     };
 
    for(i = 0; i < 5; i++)
    {
        printf("String = %10s", sports[i] );
        printf("\tAddress of string literal = %p\n", sports[i]);
    }
 
    // signal to operating system program ran fine
    return 0;
}