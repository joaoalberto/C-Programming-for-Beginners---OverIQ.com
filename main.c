#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions

#define SIZE 10
 
int main()
{
    int arr[3][4] = {
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };
 
    int i, j;
    int (*p)[4];
 
    p = arr;
 
    for(i = 0; i < 3; i++)
    {
        printf("Address of %d th array %u \n",i , p + i);
        for(j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]=%d\n", i, j, *( *(p + i) + j) );
        }
        printf("\n\n");
    }
 
    // signal to operating system program ran fine
    return 0;
}