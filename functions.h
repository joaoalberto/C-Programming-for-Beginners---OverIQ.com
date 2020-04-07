int product(int num1, int num2)
{
    int result;
    result = num1 * num2;
    return result;
}

/*
Library function - 07-04-2020 10:39
*/

int func_lib(void) {
  float a;

  printf("Enter number: ");
  scanf("%f", &a);

  printf("Square root of %.2f is %.2f", a, sqrt(a));

  // Signal to operating system everything works fine
  return 0;
}

/*
Simple Calculator - 07-04-2020 00:22
*/

int simple_calc(void) {

  int a =1, b = 2;
  char op;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("Enter operation: ");
  scanf(" %c", &op);

  switch(op)
  {
      case '+':
          printf("%d + %d = %d", a, b, a+b);
          break;
      case '-':
          printf("%d - %d = %d", a, b, a-b);
          break;
      case '*':
          printf("%d * %d = %d", a, b, a*b);
          break;
      case '/':
          printf("%d / %d = %d", a, b, a/b);
          break;
      default:
          printf("Invalid Operation \n");
  } 
 
  // Signal to operating system everything works fine
  return 0;
}

/*
The Switch Statement - 07-04-2020 00:18
*/

int switch_stat(void) {

  int i, sum;

  printf("Enter a number: ");
  scanf("%d", &i);

  switch(i) {
      case 1:
      printf("Number is one\n");
      break;
      case 2:
      printf("Number is two\n");
      break;
      case 3:
      printf("Number is three\n");
      break;
      case 4:
      printf("Number is four\n");

      default:
      printf("something else\n");
  }
 
  // Signal to operating system everything works fine
  return 0;
}

/*
continue statement - 05-04-2020 23:46
*/

int cont_stat(void) {

  int i;

  for(i = 0; i < 10; i++) {
      if( i % 4 == 0 ) {
          /*
              when i is divisible by 4
              continue to the next iteration
          */
          continue;
      }
      printf("%d\n", i);
  }
 
  // Signal to operating system everything works fine
  return 0;
}

/*
prime or not - 05-04-2020 23:40
*/

int prime_number(void) {

  int i, num, flag=1;

  printf("Enter a number: ");
  scanf("%d", &num);

  for(i = 2; i < num-1 ; i++) {
      /*
          when this condition becomes true,
          it means that entered number is
          divisible by a number between 2 and num-1.
          So it can't be prime.
      */
      if(num%i==0) {
          flag = 0; // number is not prime
      }
  }

  if(flag==1) {
      printf("%d is prime", num);
  }
  else {
      printf("%d is not prime prime", num);
  }
 
  // Signal to operating system everything works fine
  return 0;
}

/*
break statement - 05-04-2020 23:37
*/

int brk_stat(void) {

  int i;

  for(i = 1; i < 10 ; i++) {
      if(i==5) {
        break; // breaks out of the for loop
      }
      printf("Value of i = %d\n", i);
  }
 
  // Signal to operating system everything works fine
  return 0;
}

/*
Nesting of Loops - 05-04-2020 23:26
*/

int nest_loop(void) {

  int row = 0, col = 0;

  for(row = 0; row < 10; row++)  // number of lines
  {
      for(col = 0; col < row; col++) { // num of * in each lines
          printf(" * ");
      }
      printf("\n");
  }

  // Signal to operating system everything works fine
  return 0;
}

/*
4th variation - all the expressions are omitted - 05-04-2020 23:23
*/

int th_variation(void) {
    int i = 0; // initialization expression
    int sum = 0;
 
    for( ; ; ) {
        if(i > 100) { // condition
          break; // break out of the for loop
        }
        sum += i;
        i++; // update expression
    }
 
    printf("Sum = %d", sum);
 
  // Signal to operating system everything works fine
  return 0;
}

/*
 3rd variation - 05-04-2020 23:22
*/

int rd_for_express(void) {
  
    int i, sum = 0;
 
    // expression3 is omitted
 
    for(i = 1 ; i <= 100 ; ) {
        sum += i;
        i++; // update expression
    }
 
    printf("Sum = %d", sum);

  // Signal to operating system everything works fine
  return 0;
}

/*
2nd variaton - expression2 is omitted - 05-04-2020 23:16
*/

int nd_for_express(void) {

    int i, sum = 0;

  for(i = 1 ; ; i++)  // expression 2 is omitted
  {
      if(i > 100) {
          /* the break statement causes the loop to terminate.
             We will discuss the break statement in detail
             in later chapters.
          */
          break;
      }
      sum += i;
  }
  printf("Sum = %d", sum);
 
  // Signal to operating system everything works fine
  return 0;
}

/*
1st variation - expression1 is omitted - 05-04-2020 23:14
*/

int optio_for_express(void) {

  int i = 1, sum = 0;

  //expression 1 is omitted

  for( ; i <= 100; i++) {
      sum += i;
  }

  printf("Sum = %d", sum);
  
  // Signal to operating system everything works fine
  return 0;
}

/*
for loop - 05-04-2020 22:36
*/

int for_loop(void) {

  int i;   // loop variable
  int sum = 0;    // variable to accumulate sum

  for(i = 1; i <= 100; i++) {
      sum += i;
  }

  printf("Sum = %d", sum);

  // Signal to operating system everything works fine
  return 0;
}

/*
Calculate Simple Interest - 05-04-2020 17:39
*/

/******************************************
 Function to calculate the Simple interest 
 *
 * SI = (Principal * Rate * Time) / 100
 *
******************************************/

int simple_interest(void) {

  float p, r, t;
  char ch = 'y';

  do {
      printf("Enter principal: ");
      scanf("%f", &p);

      printf("Enter rate: ");
      scanf("%f", &r);

      printf("Enter t: ");
      scanf("%f", &t);

      printf("SI = %.2f", (p *r * t)/100 );

      printf("\n\nCalculate SI one more time ? ('y' for Yes, 'n' for no ) : ");
      scanf(" %c", &ch); // notice the preceding white space before %c 
  } while(ch == 'y'); // keep asking for P, R and T til the input is 'y'
 
  // Signal to operating system everything works fine
  return 0;
}

/*
num check loop II - 05-04-2020 17:35
*/

int chk_num1(void) {

    int num;
 
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while(num<0); // keep asking for numbers until num < 0
     
   // calculate factorial

  // Signal to operating system everything works fine
  return 0;
}

/*
num check loop - 05-04-2020 17:28
*/

int chk_num(void) {

    int num;
    char num_ok = 0;
 
    // keep asking for numbers until num_ok == 0
    while(num_ok==0) {
        printf("Enter a number: ");
        scanf("%d", &num);
 
        // if num >= 0 set num_ok = 1 and stop asking for input
        if(num>=0) {
            num_ok = 1;
        }
    }
 
   // calculate factorial

  // Signal to operating system everything works fine
  return 0;
}

/*
do… while loop - 05-04-2020 17:22
*/

int do_while(void) {

  int i = 1; // declare and initialize i to 1

  do
  {
      // check whether i is multiple of 3 not or not
      if(i % 3 == 0)
      {
          printf("%d ", i);   // print the value of i
      }
      i++; // increment i by 1
  }while(i < 100);  // stop the loop when i becomes greater than 100

  // Signal to operating system everything works fine
  return 0;
}

/*
The while loop - 04-04-2020 02:10
*/

int while_ex2(void) {

  long int n, num, sum = 0, remainder;

  printf("Enter a number: ");
  scanf("%ld", &n);

  num = n;

  // keep looping while n > 0
  while( n > 0 )
  {
      remainder = n % 10;   // get the last digit of n
      sum += remainder;     // add the remainder to the sum
      n /= 10;              // remove the last digit from n
  }

  printf("Sum of digits of %ld is %ld\n\n", num, sum);

  // Signal to operating system everything works fine
  return 0;
}

int while_ex1(void) {

  int i = 1;

  // keep looping while i < 100
  while(i < 100)
  {
      // if i is even
      if(i % 2 == 0)
      {
          printf("%d ", i);
      }
      i++; // increment i by 1
  }

  // Signal to operating system everything works fine
  return 0;
}

/*
else if clause - 04-04-2020 02:03
*/

int if_else_clause(void) {

  int a, b, c, larger;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a > b && a > c)
  {
      larger = a;
  }

  else if(b > a && b > c)
  {
      larger = b;
  }

  else
  {
      larger = c;
  }

  printf("Largest number is %d", larger);

  // Signal to operating system everything works fine
  return 0;
}

/*
Nesting if… else - 04-04-2020 01:58
*/

int nest_if_else(void) {

  int a, b, c, larger;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a > b)
  {
      if(a > c)
      {
          larger = a;
      }

      else
      {
          larger = c;
      }
  }
  else
  {
      if(b > c)
      {
          larger = b;
      }

      else
      {
          larger = c;
      }
  }

  printf("Largest number is %d", larger);

  // Signal to operating system everything works fine
  return 0;
}

/*
The else clause - 03-04-2020 18:36
*/

int else_clause(void) {

  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  if(a > b)
  {
      printf("%d is greater than %d", a, b);
  }

  else
  {
      printf("%d is greater than %d", b, a);
  }

  // Signal to operating system everything works fine
  return 0;
}

/*
If statement - 03-04-2020 18:30
*/

int if_stat(void) {

  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if(n % 2 == 0)
  {
      printf("%d is even", n);
  }

  // Signal to operating system everything works fine
  return 0;
}

/*
Compound statement - 03-04-2020 18:23
*/

int comp_stat(void) {

  int i = 100;

  printf("A single statement\n");

  {
      // a compound statement
      printf("A statement inside compound statement\n");
      printf("Another statement inside compound statement\n");
  }

  // Signal to operating system everything works fine
  return 0;
}

/*
The Cast operator - 03-04-2020 18:13
*/

int cast_oper(void) {

  int a = 25, b = 13;
  float result;

  result = a/b;

  // display only 2 digits after decimal point
  printf("(Without typecasting) 25/13 = %.2f\n", result );  

  result = (float)a/b;

  // display only 2 digits after decimal point
  printf("(With typecasting) 25/13 = %.2f\n", result );

  // Signal to operating system everything works fine
  return 0;
}

/*
Type Conversion in assignment - 03-04-2020 17:34
*/

int type_conv(void) {

  float f_val1 = 97.12, f_val2;
  int i_val1, i_val2;
  char ch_val1, ch_val2;

  // float is demoted to int, only 97 is assigned to i_val1
  i_val1 = f_val1;

  // int is demoted to char,
  ch_val1 = i_val1;

  // float is demoted to int, only 12 is assigned to i_val2
  //====>>>>>  i_val2 = 12.45f; gerando warning implicit conversion

  // char is promoted to int, now
  // i_val1 contains ASCII value of character 'e' i.e 101
  i_val2 = 'e';

  /*
      double is demoted to float, since by
      default floating point constants
      are of type double
  */

  f_val2 = 12.34;

  // Print the value of i
  printf("Value of i_val1 = %d\n", i_val1);

  // Print the character corresponding to ASCII value 97
  printf("Value of ch_val1 = %c\n", ch_val1);

  // Print the ASCII value of character 'e'
  printf("Value of i_val2 = %d\n", i_val2);

  // Print f_val2 with 2 digits of precision
  printf("Value of f_val2 = %.2f\n", f_val2);

  // Signal to operating system everything works fine
  return 0;
}

/*
sizeof operator - 03-04-2020 14:45
*/

int sizeof_oper(void) {

  printf("Size of short = %lu\n", sizeof(short));
  printf("Size of int = %lu\n", sizeof(int));
  printf("Size of unsigned int = %lu\n", sizeof(unsigned int));
  printf("Size of char = %lu\n", sizeof(char));
  printf("Size of float = %lu\n", sizeof(float));
  printf("Size of double = %lu\n", sizeof(double));
  printf("Size of long double = %lu\n", sizeof(long double));

  // Signal to operating system everything works fine
  return 0;
}

/*
Comma operator - 03-04-2020 14:41
*/

int comma_oper(void) {

  int a, b, c, sum;
  sum = (a=3, b=4, c=5, a+b+c);
  printf("Sum = %d\n", sum);

  // Signal to operating system everything works fine
  return 0;
}

/*
Conditional Operator - 03-04-2020 14:13
*/

int cond_oper(void) {

  int a, b, max;

  printf("Enter a and b: ");
  scanf("%d%d", &a, &b);

  max = a > b ? a : b;

  printf("Largest of the two numbers = %d\n", max);

  // Signal to operating system everything works fine
  return 0;
}

/*
Logical Operators in C - !(NOT) operator - 03-04-2020 14:07
*/

int logic_not(void) {

  int a = 100, result;
  printf("Initial value of a = %d\n", a);

  // result of the logical expression is stored in result
  result = (a>10); 

  printf("Is a > 10 : %d\n", result);
  printf("After applying not operator\n");
  printf("Is a > 10 : %d\n", !result);
  
  // Signal to operating system everything works fine
  return 0;
}

/*
Logical Operators in C - OR(||) operator - 03-04-2020 14:04
*/

int logic_or(void) {

  int a = 10, result;

  printf("Initial value of a = %d\n", a);

  // result of the logical expression is stored in result
  result = (a==10) || (a--); 

  printf("Final value of a = %d\n", a);
  printf("Result of logical expression = %d\n", result);

  // Signal to operating system everything works fine
  return 0;
}

/*
Logical Operators in C - AND(&&) operator - 03-04-2020 14:00
*/

int logic_and(void) {

  int a = 12, result;

  printf("Initial value of a = %d\n", a);

  // result of the logical expression is stored in result
  result = (a==11) && (a++); 

  printf("Final value of a = %d\n", a);
  printf("Result of logical expression = %d\n", result);

  // Signal to operating system everything works fine
  return 0;
}

/*
Relational Operators in C - 03-04-2020 13:47
*/

int relat_oper(void) {

  int x = 12, y = 13;

  printf("x = %d\n", x);
  printf("y = %d\n\n", y);

  // Is x is greater than y?
  printf("x > y : %d\n", x > y);

  // Is x is greater than or equal to y?
  printf("x >= y : %d\n", x >= y);

  // Is x is smaller than y?
  printf("x < y : %d\n", x < y);

  // Is x is smaller than or equal to y?
  printf("x <= y : %d\n", x <= y);

  // Is x is equal to y?
  printf("x == y : %d\n", x == y);

  // Is x is not equal to y?
  printf("x != y : %d\n", x != y);

  // Signal to operating system everything works fine
  return 0;
}

/*
Postfix Increment/Decrement operator - 03-04-2020 13:28
*/

int postfix_inc_dec(void) {

  int x = 12, y = 1;

  printf("Initial value of x = %d\n", x); // print the initial value of x
  printf("Initial value of y = %d\n\n", y); // print the initial value of y

  y = x++; // use the current value of x then increment it by 1
 
  printf("After incrementing by 1: x = %d\n", x);
  printf("y = %d\n\n", y);

  y = x--; // use the current value of x then decrement it by 1

  printf("After decrementing by 1: x = %d\n", x);
  printf("y = %d\n\n", y);

  // Signal to operating system everything works fine
  return 0;
}

/*
Prefix increment/decrement operator - 03-04-2020 12:54
*/

int prefix_inc_dec(void) {

  int x = 12, y = 1;

  printf("Initial value of x = %d\n", x); // print the initial value of x
  printf("Initial value of y = %d\n\n", y); // print the initial value of y

  y = ++x; // increment the value of x by 1 then assign this new value to y

  printf("After incrementing by 1: x = %d\n", x);
  printf("y = %d\n\n", y);

  y = --x; // decrement the value of x by 1 then assign this new value to y

  printf("After decrementing by 1: x = %d\n", x);
  printf("y = %d\n\n", y); 
  
  // Signal to operating system everything works fine
  return 0;
}

/*
Compound assignment operators - 03-04-2020 12:54
*/

int comp_assign(void) {

  int i = 10;
  
  char a = 'd';
  printf("ASCII value of %c is %d\n", a, a); // print ASCII value of d

  a += 10; // increment a by 10;
  printf("ASCII value of %c is %d\n", a, a); // print ASCII value of n
  
  a *= 5; // multiple a by 5;
  printf("a = %d\n", a); 
  
  a /= 4; // divide a by 4;
  printf("a = %d\n", a); 
  
  a %= 2; // remainder of a % 2;
  printf("a = %d\n", a); 
  
  a *= a + i;  // is equivalent to  a = a * (a + i)
  printf("a = %d\n", a);
  
  // Signal to operating system everything works fine
  return 0;
}

/*
Mixed mode arithmetic - 03-04-2020 00:55
*/

int arith_mixed(void) {    
  printf("%f\n", 10/4.0);
  printf("%f\n", 10.0/4);
  
  // Signal to operating system everything works fine
  return 0;
}

/*
Floating Point Arithmetic - 03-04-2020 00:47
*/

int arith_float(void) {    
  // Declare and initialize variable a and b
  double a = 9.2, b = 2.1;

  printf("\nFloating Point Arithmetic\n\n");

  printf("a = %1.1f b = %1.1f\n", a, b);
  
  printf("a + b = %f\n", a + b);
  printf("a - b = %f\n", a - b);
  printf("a * b = %f\n", a * b);
  printf("a / b = %f\n", a / b);

  //Note: The % modulus operator can’t be used with floating point constants.
  // Signal to operating system everything works fine
  return 0;
}

/*
Integer arithmetic - 03-04-2020 00:33
*/

int arith_int(void) {    
  // Declare and initialize variable a and b
  int a = 11, b = 4;

  printf("\nInteger arithmetic\n\n");

  printf("a = %d b = %d\n", a, b);

  printf("a + b = %d\n", a + b);

  printf("a - b = %d\n", a - b);

  printf("a * b = %d\n", a * b);

  printf("a / b = %d\n", a / b);
  // because both operands are integer result will be an integer

  printf("a %% b = %d\n", a % b);
  // % operator returns the remainder of 11/4 i.e 3
  // attention to how % character is used in the printf() statement in line 17.

  // Signal to operating system everything works fine
  return 0;
}

/*
Formatted Input and Output in C - 31-03-2020 23:55
Formatting input
integer - %wd
Floating Point - %wf
String - %ws

Formatting output
integer - %wd
Floating Point - %w.nf
String - %w.ns
*/

int formatted_i_o(void) {    
  int i,j;
  scanf("%2d%3d", &i, &j);
  printf("a=%2d,b=%3d", i, j);

  float f,g;
  scanf("%3f%4f", &f, &g);
  printf("f=%5.1f, g=%5.2f", f, g);

  char str[20];
  //scanf("%4s", str);
  printf("%4s", "codeindepth\n");
  printf("%10s", "code\n");
  printf("%10.3s", "code\n");
  printf("%.6s", "codeindepth\n");

  return 0;
}

int input_output()
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

int funcao_0a100(int a, int b, int c) {
  int vetor[3] = {a, b, c};
  for(int i = 0; i <= 2; i++)
  {
    //printf("%d\n", vetor[i]);
    if (vetor[i]>100 || vetor[i]<0) 
      printf("%d nao estah na faixa entre 0 e 100\n", vetor[i]);
    else
      printf("%d estah na faixa entre 0 e 100\n", vetor[i]);
  }
  return 0;
}

int outputting_data() // int main(void)
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

/*
Function template - 05-04-2020 17:39

int function(void) {

 
  // Signal to operating system everything works fine
  return 0;
}
*/