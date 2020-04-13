#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
 
int main()
{
    int len;
 
    // destination array can store only 30 characters including '\0'
    char destination[30];
 
    printf("Enter your dream destination: ");
    // gets(destination); -->> deprecated e substituted by fgtes.
    fgets(destination, sizeof(destination), stdin);
 
    // calculate length of characters in destination
    len = strlen(destination); 
 
    printf("Your dream destination %s has %d characters in it", destination, len);
 
    // signal to operating system program ran fine
    return 0;
}