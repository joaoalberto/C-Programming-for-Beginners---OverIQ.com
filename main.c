/*Input and Output in C - 12-03-2020 18:55*/

#include<stdio.h>
 
int main()
{    // declare variable ch
    char ch;
     // declare variable i
    int i;
    // declare variable fp
    float fp;
    // declare variable x, y and z
    int x, y, z;

    // Ask user to enter a character
    printf("Enter a character: ");
 
    // accept input from keyboard
    scanf("%c", &ch);
 
    // print the entered character
    printf("You entered %c\n\n", ch);

    // Ask user to enter a number
    printf("Enter a number: ");
 
    // accept input from keyboard
    scanf("%d", &i);
 
    // print the entered number
    printf("You entered %d\n\n", i);
    
    // Ask user to enter a floating point number
    printf("Enter a floating point number: ");
 
    // accept input from keyboard
    scanf("%f", &fp);
 
    // print the entered float point number
    printf("You entered %f\n\n", fp);
     
    // Ask user to enter 2 number
    printf("Enter two numbers: ");
 
    // accept input from keyboard
    scanf("%d%d", &x, &y);
 
    // print the entered numbers
    printf("Value of x = %d and y = %d\n\n", x, y);
    
    // Ask user to enter 2 number
    printf("Enter new two numbers: ");
 
    // accept input from keyboard
    scanf("%d:%d", &x, &y);
 
    // print the entered numbers
    printf("Value of x = %d and y = %d\n\n", x, y);
    // Ask user to enter 3 number
    printf("Enter three numbers: ");
 
    // accept input from keyboard
    scanf("%d,%d,%d", &x, &y, &z);
 
    // print the entered numbers
    printf("Value of x = %d , y = %d, z = %d\n\n", x, y, z);

    printf("Enter a character: ");
    ch = getchar();
 
    printf("The entered character is: ");
    putchar(ch);
    printf("\n\n");
    
    return 0; // signal to operating system everything works fine
}