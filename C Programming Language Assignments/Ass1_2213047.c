/*Write a C program to accept electricity bill details from the user such as name,
 address, customer ID, pin code, bill amount and month of bill and display the same. */

#include<stdio.h>

int main()
{
    char name[10];
    char address[50];
    char month[10];
    int ID,pin_code,amount;

    printf("Please enter your electricity bill details-\n");
    printf("Enter your name:\n");
    scanf("%s",&name);

    printf("Enter your address:\n");
    scanf("%s",&address);

    printf("Enter your customer ID:\n");
    scanf("%d",&ID);

    printf("Enter your pin code:\n");
    scanf("%d",&pin_code);

    printf("Enter the bill amount:\n");
    scanf("%d",&amount);

    printf("Enter the month of the bill:\n");
    scanf("%s",&month);

    printf("The name of customer is: %s\n",name);
    printf("The address of customer is: %s\n",address);
    printf("The Customer ID is: %d\n",ID);
    printf("Pincode of the place is: %d\n",pin_code);
    printf("The amount to be paid is: %d\n", amount);
    printf("The bill amount is for the month: %s\n",month);

    return 0;
    }
