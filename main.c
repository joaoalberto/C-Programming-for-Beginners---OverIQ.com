#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
 
int factorial(int x); // declaration of factorial function
 
int main()
{
    int n;
    printf("Calculate factorial: \n\n");
    printf("Enter number : ");
    scanf("%d", &n);
 
    if(n < 0)
    {
        printf("\nFactorial is only defined for positive numbers");
    }
 
    else
    {
        printf("\n%d! = %d\n\n", n, factorial(n)); // calling factorial function
    }
 
    // signal to operating system everything works fine
    return 0;
}
 
// definition of factorial function
 
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
 
    int f = 1, i;
 
    for(i = n; i > 0; i-- )
    {
        f = f * i;
    }
    return f;
}