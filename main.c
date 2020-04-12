#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
 
int main()
{
    int i;
    char str[6] = "hello";
    char *p;
 
    for(p = str; *p != '\0'; p++)
    {
        printf("Character = %c\t Address = %p\n", *(p), p);
    }
 
    // signal to operating system program ran fine
    return 0;
}