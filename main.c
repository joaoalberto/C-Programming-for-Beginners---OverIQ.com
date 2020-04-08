#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
int main()
{
    int *arrop[3];
    int a = 10, b = 20, c = 50, i;
 
    arrop[0] = &a;
    arrop[1] = &b;
    arrop[2] = &c;
 
    for(i = 0; i < 3; i++)
    {
        printf("Address = %p\t Value = %d\n", arrop[i], *arrop[i]);
    }
 
    return 0;
}