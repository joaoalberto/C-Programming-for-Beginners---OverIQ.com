#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
 
int main()
{
    char strg1[50], strg2[50];
    int r;
 
    printf("Enter first string: ");
    fgets(strg1, sizeof(strg1), stdin);// gets(destination); -->> deprecated e substituted by fgets.
 
    printf("Enter second string: ");
    fgets(strg2, sizeof(strg2), stdin);// gets(destination); -->> deprecated e substituted by fgets.

    if(strcmp(strg1, strg2)==0)
    {
        printf("\nYou entered the same string two times");
    }
 
    else
    {
        printf("\nEntered strings are not same!");
    }
 
    // signal to operating system program ran fine
    return 0;
}