#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
int factorial(int );
 
int main()
{
    char s1[20];
    char s2[20];
 
    int x = 100;
    float y = 300;
 
    sprintf(s1, "%d", x);
    sprintf(s2, "%f", y);
 
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
 
    // signal to operating system program ran fine
    return 0;
}