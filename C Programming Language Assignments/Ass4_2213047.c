/*Calculating the Factorial of a Number In mathematics, the notation n! represents the factorial of the non-negative integer n. The factorial of n is the product of all the non-negative integers from 1 up through n. For example:
7! = 1 × 2 × 3 × 4 × 5 × 6 × 7 = 5,040 and
4! = 1 × 2 × 3 × 4 = 24
Design a program that asks the user to enter a non-negative integer and then displays the factorial of that number.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int num,i,j=1;

    printf("Enter the number:\n");
    scanf("%lld",&num);

    if (num<0)
    {
        printf("Error: Enter non-zero number\n");
    }
    else
    {
        for ( i = 1; i <= num; i++) 
       {
        j=j*i;
       }
       printf("Factorial of %lld is: %lld",num,j);
    }
    return 0;
}