#include<stdio.h>
#include<math.h>
#include "functions.h" // My local defined functions
#include<stdlib.h>
#include<string.h>
int factorial(int );
 
int main()
{
 
    int sal;
    char name[30], designation[30], info[60];
 
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);// gets(name); -->> deprecated e substituted by fgets.
 
    printf("Enter your designation: ");
    fgets(designation, sizeof(designation), stdin);// gets(designation); -->> deprecated e substituted by fgets.
 
    printf("Enter your salary: ");
    scanf("%d", &sal);
 
    sprintf(info, "Welcome %s !\nName: %s \nDesignation: %s\nSalary: %d",
        name, name, designation, sal);
 
    printf("\n%s", info);
 
    // signal to operating system program ran fine
    return 0;
}