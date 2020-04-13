#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
 
int main()
{
    char *s1 = "hello";
    char *s2 = "world";
 
    printf("Address of string pointed by s1 = %p\n", s1);
    printf("Address of string pointed by s2 = %p\n\n", s2);
 
    printf("Is s1 == s2 ? %u\n", s1 == s2);
    printf("Is s1 > s2 ? %u\n", s1 > s2);
    printf("Is s1 < s2 ? %u\n", s1 < s2);
 
    // signal to operating system program ran fine
    return 0;
}