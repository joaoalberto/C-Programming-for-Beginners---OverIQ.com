#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
void new_array(int a[]);
 
int main()
{
    int my_arr[] = {1,4,9,16,23}, i;
    printf("Original array: \n\n");
 
    for(i = 0; i < 5; i++)
    {
        printf("%d ", my_arr[i]);
    }
 
    my_func(my_arr);
 
    printf("\n\nModified array : \n\n");
 
    for(i = 0; i < 5; i++)
    {
        printf("%d ", my_arr[i]);
    }
 
    // signal to operating system program ran fine
    return 0;
}
 
void my_func(int a[5])
{
    int i;
 
    // increment original elements by 5
 
    for(i = 0; i < 5; i++)
    {
        a[i] = a[i] + 5;
    }
}