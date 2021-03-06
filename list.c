#1. Write a C program how to know the storage size of different data types using "sizeof" fuction.

#include<stdio.h>

int main()
{
    printf("Storage size for Char: %d \n", sizeof(char));
    printf("Storage size for int: %d \n", sizeof(int));

    return 0;
}


#2. Write a C program using Function return as void(add).

#include<stdio.h>

int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = add(a, b);
    printf("add = %d \n", c);

    return 0;
}

int add(int i, int j)
{
    int k;
    k = i+j;
    return k;
}

#3. Write a C program using Extern keyword.

#include<stdio.h>

extern float a, b, c, f;

int main()
{
    float a, b, c, f;
    a = 9;
    b = 3;
    c = a + b;

    printf("Sum = %f \n", c);

    f = a/b;
    printf("F = %f", f);

    return 0;
}


#4. Write a C program using auto.

#include<stdio.h>

int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = add(a, b);
    printf("Addition = %d \n", c);

    return 0;
}

int add(int i, int j)
{
    auto int k;
    k = i + j;
    return k;
}


#5. Write a C program using register.

#include<stdio.h>

int main()
{
    register int a, b, c;
    a = 5;
    b = 10;
    c = a + b;
    printf("Addition = %d \n", c);

    return 0;
}

#6. Write a C program using #define preprocessor.

#include<stdio.h>

#define LENGTH 10
#define WIDTH 5

int main()
{
    int area;
    area = LENGTH * WIDTH;
    printf("Area = %d \n", area);

    return 0;
}

#7. Write a C program using const keyword.

#include<stdio.h>

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;

    int area;
    area = LENGTH * WIDTH;
    printf("Area = %d \n", area);

    return 0;
}

#8. Write a C program using auto variable.

#include<stdio.h>

int a();
int b();

int main()
{
    a();
    b();

    return 0;
}

int a()
{
    auto int a = 5;
    printf("a = %d \n", a);
}

int b()
{
    auto int b = 10;
    printf("b = %d", b);
}


#9. Write a C program usign auto and static variable.

#include<stdio.h>

int a();

int main()
{
    a();

    return 0;
}

int a()
{
    auto int a = 5;
    static int b = 10;
    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}


#10. Write a C program using global variable.

#include<stdio.h>

void a();
int x;

int main()
{
    a();

    return 0;
}

void a()
{
    x = 5;
    printf("x = %d \n", x);

    return 0;
}


#11. Write a C program using extern variable.

#include<stdio.h>

void a();

int main()
{
    extern int x;
    printf("x = %d \n", x);

    a();

    return 0;
}

int x = 10;

void a()
{
    extern int x;
    printf("x = %d \n", x);

    return 0;
}

#12. Write a C program using Arithmetic Operators.

#include<stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int c;

    c = a + b;
    printf("Sum = %d \n", c);

    c = a - b;
    printf("Subtraction = %d \n", c);

    c = a * b;
    printf("Multiplication = %d \n", c);

    c = b / a;
    printf("Division = %d \n", c);

    c = b % a;
    printf("Modulus = %d \n", c);

    c = a++;
    printf("Increment = %d \n", c);

    c = a--;
    printf("Decrement = %d \n", c);

    return 0;
}


#13. Write a C program using Relational Operators.

#include <stdio.h>

int main()
{

   int a = 21;
   int b = 10;
   int c ;

   if( a == b ) {
      printf("Line 1 - a is equal to b\n" );
   }
   else {
      printf("Line 1 - a is not equal to b\n" );
   }

   if ( a < b ) {
      printf("Line 2 - a is less than b\n" );
   }
   else {
      printf("Line 2 - a is not less than b\n" );
   }

   if ( a > b ) {
      printf("Line 3 - a is greater than b\n" );
   }
   else {
      printf("Line 3 - a is not greater than b\n" );
   }

   /* Lets change value of a and b */
   a = 5;
   b = 20;

   if ( a <= b ) {
      printf("Line 4 - a is either less than or equal to  b\n" );
   }

   if ( b >= a ) {
      printf("Line 5 - b is either greater than  or equal to b\n" );
   }
}

#14. Write a C program using Logical Operators.

#include <stdio.h>

int main() 
{

   int a = 5;
   int b = 20;

   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }

   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }

   /* lets change the value of  a and b */
   a = 0;
   b = 10;

   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   }
   else {
      printf("Line 3 - Condition is not true\n" );
   }

   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }

}

#15. Write a C program using Assignment Operators.

#include <stdio.h>

main() 
{

   int a = 21;
   int c ;

   c =  a;
   printf("Line 1 - =  Operator Example, Value of c = %d\n", c );

   c +=  a;
   printf("Line 2 - += Operator Example, Value of c = %d\n", c );

   c -=  a;
   printf("Line 3 - -= Operator Example, Value of c = %d\n", c );

   c *=  a;
   printf("Line 4 - *= Operator Example, Value of c = %d\n", c );

   c /=  a;
   printf("Line 5 - /= Operator Example, Value of c = %d\n", c );

   c  = 200;
   c %=  a;
   printf("Line 6 - %= Operator Example, Value of c = %d\n", c );

   c <<=  2;
   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );

   c >>=  2;
   printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );

   c &=  2;
   printf("Line 9 - &= Operator Example, Value of c = %d\n", c );

   c ^=  2;
   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );

   c |=  2;
   printf("Line 11 - |= Operator Example, Value of c = %d\n", c );

}


#16. Write a C program using if statement.

#include <stdio.h>

int main()
{
    int a = 10;

    if(a< 20)
    {
        printf("a is less than 20 \n");
    }

    printf("Value of a is : %d \n", a);

    return 0;

}

#17. Write a C program using if else statement.

#include <stdio.h>

int main()
{
    int a = 30;

    if(a < 20)
    {
        printf("a is less than 20 \n");
    }else
    {
        printf("a is not less than 20 \n");
    }

    printf("Value of a is : %d \n", a);

    return 0;

}

#18. Write a C program using if else if else statement.

#include <stdio.h>

int main ()
{

   /* local variable definition */
   int a = 20;

   /* check the boolean condition */
   if( a == 10 ) {
      /* if condition is true then print the following */
      printf("Value of a is 10\n" );
   }
   else if( a == 20 ) {
      /* if else if condition is true */
      printf("Value of a is 20\n" );
   }
   else if( a == 30 ) {
      /* if else if condition is true  */
      printf("Value of a is 30\n" );
   }
   else {
      /* if none of the conditions is true */
      printf("None of the values is matching\n" );
   }

   printf("Exact value of a is: %d\n", a );

   return 0;
}


#19. Write a C program using nested if statement.


#include <stdio.h>

int main ()
{

   /* local variable definition */
   int a = 100;
   int b = 200;

   /* check the boolean condition */
   if( a == 100 ) {

      /* if condition is true then check the following */
      if( b == 200 ) {
         /* if condition is true then print the following */
         printf("Value of a is 100 and b is 200\n" );
      }
   }

   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );

   return 0;
}


#20. Write a C program calculate maximum value using function.

#include <stdio.h>

int max_number(int a, int b);

int main ()
{

   int a = 20;
   int b = 30;
   int result;

   result = max_number(a, b);

   printf("The maximum value is %d \n", result);

   return 0;
}

int max_number(a, b)
{
    int result;

    if( a < b)
    {
        result = b;
    }else
    {
        result = a;
    }
    return result;
}


#21. Write a C program using break statement.

#include <stdio.h>

int main ()
{

   int a = 5;

   while( a < 20 )
   {
       printf("Value of a: %d \n", a);
       a++;

       if( a > 15 )
       {
           break;
       }
   }

   return 0;
}

#22. Write a C program using continue statement.

#include <stdio.h>

int main ()
{

   int a = 10;

   do
   {
       if ( a == 15 )
       {
           a++;
           continue;
       }
       printf("Value of a: %d \n", a);
       a++;
   }while( a < 20 );

   return 0;
}

#23. Print Prime number in range by user input.


#include <stdio.h>

int main ()
{

   int i, j, n;

   printf("Enter the value of n \n", n);
   scanf("%d", &n);

   for( i = 1; i < n; i++ )
   {
       for( j = 2; j <= i; j++)
       {
           if ( i%j == 0)
           {
               break;
           }
       }
       if(i == j)
       {
           printf("Prime number %d \n", i);
       }
   }

   return 0;
}


#24. Write a C program using while loop.

#include <stdio.h>

int main ()
{

   int a = 10;

   while( a < 20 )
   {
       printf("Value of a: %d \n", a);
       a++;
   }

   return 0;
}

#25. Write a C program using for loop.

#include <stdio.h>

int main ()
{
   int i;

   for( i = 1; i < 20; i++)
   {
       printf("Value of i: %d \n", i);
   }

   return 0;
}

#26. Write a C program using do...while loop.

#include <stdio.h>

int main ()
{
   int a = 10;

   do
   {
       printf("Value of a: %d \n", a);
       a++;
   }while( a < 20 );

   return 0;
}

#27. Write a c program that print half pyramid 

#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#28 .Write a c program to calulate factorial n using recursive function.


#include <stdio.h>
long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

#29. Write a c program to display fibonacci serise

#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

