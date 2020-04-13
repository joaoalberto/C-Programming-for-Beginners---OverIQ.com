#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
 
int main()
{
    char ch_arr1[20];
    char ch_arr2[20];
 
    printf("Enter first string (ch_arr_1): ");
    fgets(ch_arr1, sizeof(ch_arr1), stdin);// gets(destination); -->> deprecated e substituted by fgets.
 
    printf("Enter second string(ch_arr_1): ");
    fgets(ch_arr2, sizeof(ch_arr2), stdin);// gets(destination); -->> deprecated e substituted by fgets.
 
    printf("\nCopying first string into second... \n\n");
    strcpy(ch_arr2, ch_arr1); // copy the contents of ch_arr1 to ch_arr2
 
    printf("First string (ch_arr_1) = %s\n", ch_arr1);
    printf("Second string (ch_arr_2) = %s\n", ch_arr2);
 
    printf("\nCopying \"Greece\" string into ch_arr1 ... \n\n");
    strcpy(ch_arr1, "Greece"); // copy Greece to ch_arr1
 
    printf("\nCopying \"Slovenia\" string into ch_arr2 ... \n\n");
    strcpy(ch_arr2, "Slovenia"); // copy Slovenia to ch_arr2
 
    printf("First string (ch_arr_1) = %s\n", ch_arr1);
    printf("Second string (ch_arr_2) = %s\n", ch_arr2);
 
    // signal to operating system program ran fine
    return 0;
}