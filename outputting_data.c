/*12/03/2020 - 18:53 */

#include<stdio.h>
 
int outputting_data() //int main(void)
{
    printf("Control string with no conversion specification\n\n");
     
    int i = 100;
    printf("%d\n\n", i);

    int sal = 200000;
    printf("Basic salary: %d\n\n", sal);

    float val = 3.14551;
    printf("%f\n\n", val);

    char ch = 'z';
    printf("%c\n\n", ch);

    char str[] = "Testing printf()";
    printf("%s\n\n", str);

    int num=100;
    printf("Octal equivalent of %d = %o\n", num, num);
    printf("Hexadecimal equivalent of %d = %x\n\n", num, num);

    printf("Enough \"Hello World\" programs\n\n");

    printf("Path : C:\\Users\\X\n\n");
    
    int salary = 20000;
    int expenses = 15000;
    int saving = 5000;
    printf("Salary: %d , Expenses: %d, Saving: %d\n\n", salary, 
    expenses, saving);
    printf("Salary: %d \nExpenses: %d \nSaving: %d\n\n", salary, expenses, saving);
    printf("Salary: %d \tExpenses: %d \tSaving: %d\n\n", salary, expenses, saving);
    
    return 0; // signal to operating system everything works fine
}