#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
 
int main()
{
    int i;
    char str[6] = "hello";
 
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("Character = %c\t Address = %p\n", str[i], &str[i]);
    }
 
    // signal to operating system program ran fine
    return 0;
}