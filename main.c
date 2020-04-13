#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
 
int main()
{
    char strg1[40];
    char strg2[40];
 
    printf("Enter first string: ");
    fgets(strg1, sizeof(strg1), stdin);// gets(destination); -->> deprecated e substituted by fgets.
 
    printf("Enter second string: ");
    fgets(strg2, sizeof(strg2), stdin);// gets(destination); -->> deprecated e substituted by fgets.
 
    printf("\nConcatenating first and second string .. \n\n");
    strcat(strg1, strg2);
 
    printf("First string: %s\n", strg1);
    printf("Second string: %s", strg2);
 
    // signal to operating system program ran fine
    return 0;
}