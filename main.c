#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
 
int main()
{
    char strg1[50], strg2[50];
    int different;
 
    printf("Enter first string: ");
    fgets(strg1, sizeof(strg1), stdin);// gets(destination); -->> deprecated e substituted by fgets.
 
    printf("Enter second string: ");
    fgets(strg2, sizeof(strg2), stdin);// gets(destination); -->> deprecated e substituted by fgets.

    different = strcmp(strg1, strg2);

    if (different)
    {
        printf("\nsame string, difference %d/n/n", different);
    }
 
    else
    {
        printf("\nnot same!, difference %d/n/n", different);
    }
 
    // signal to operating system program ran fine
    return 0;
}