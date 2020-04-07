#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
void odd_or_even(int a);
 
int main()
{
    int my_arr[] = {13,56,71,38,93}, i;
 
    for(i = 0; i < 5; i++)
    {
        // passing one element at a time to odd_or_even() function
        odd_or_even(my_arr[i]); 
    }
 
    // signal to operating system program ran fine
    return 0;
}
 
void odd_or_even(int a)
{
    if(a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
 
    else
    {
        printf("%d is odd\n", a);
    }
}