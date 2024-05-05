/*Riya wants to learn basic calculation, help her for following operations by program:
1.Addition of 2 numbers
2. Subtraction of 2 numbers
3. Division operation of 2 numbers
4. Multiplication of 2 numbers
5. Find the remainder
6. Calculation of percentage
 */

#include<stdio.h>
#include<math.h>
  
int main()
{
    float num1,num2,rem,sum,sub,mul,div,percentage;

    printf("Enter any two numbers for which you have to perform operations:\n");
    scanf("%f %f", &num1, &num2);

    sum= num1+num2;
    sub= num1-num2;
    mul= num1*num2;
    div= num1/num2;
    rem=(int)num1%(int)num2;
    percentage= num1/num2*100;
   
    printf("The addition of two number is: %f\n",sum);
    printf("The subtraction of two number is: %f\n",sub);
    printf("The multiplication of two number is: %f\n",mul);
    printf("The division of two number is: %f\n",div);
    printf("The reminder of two number is: %f\n",rem);
    printf("The percentage of two number is: %f / %f x 100 =%f\n",num1,num2,percentage);

    return 0;
}


