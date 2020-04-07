#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
int main()
{
    int arr[5], i;
 
    for(i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    } 
 
    printf("\nPrinting elements of the array: \n\n");
 
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
 
    // signal to operating system program ran fine
    return 0;
}