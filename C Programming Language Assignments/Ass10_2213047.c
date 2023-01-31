/*Concept: Pointer
Lab 11: Take two numbers from the user in two variables and interchange their addresses by means of an 
external module. Display the result from the main function.*/
#include<stdio.h>

void swap (int*, int*);
void main()
{
    int num1,num2;
    printf("Enter the two integer values:\n");
    scanf("%d%d",&num1,&num2);
    printf("Where num1=%d and num2=%d before calling the function\n",num1,num2);
    swap(&num1,&num2);
    printf("Now num1=%d and num2=%d after the calling of function\n",num1,num2);
}
void swap(int* num1,int* num2)
{
    int num3;
    num3=*num1;
    *num1=*num2;
    *num2=num3;
}