/*Design a program that uses nested loops to collect data and calculate the average rainfall
 over a period of years. The program should first ask for the number of years. The outer loop
 will iterate once for each year. The inner loop will iterate twelve times, once for each month.
 Each iteration of the inner loop will ask the user for the inches of rainfall for that month. 
 After all iterations, the program should display the number of months, the total inches of 
 rainfall, and the average rainfall per month for the entire period.*/
# include<stdio.h>
# include<math.h>
int main()
{
    int num_years,month,i;
    float rainfall,avg_rainfall,total_rainfall;

    printf("Please enter number of years:\n");
    scanf("%d",&num_years);

    if (num_years<1)
    {
        printf("Error:Number of years must greater than equal to 1. Please re-enter:\n");
        scanf("%d",&num_years);
    }
    else
    {
    for ( i = 1; i <= num_years; i++)
     {
        for ( month = 1; month <= 12; month++)
        {
            printf("Enter the rainfall for month %d:\n",month);
            scanf("%f", &rainfall);

            if (rainfall<0)
            {
                printf("Error: Amount of rainfall must be greater than 0. Please re-enter:\n");
                scanf("%f",&rainfall);
            } 
        total_rainfall += rainfall;        
        }  
     } 
    }  
    printf("Number of months: %d\n",num_years*12);
    printf("Total rainfall:%f inches\n", total_rainfall);
    month= num_years*12;
    avg_rainfall = total_rainfall/(float) month;
    printf("Average rainfall:%f inches\n",avg_rainfall);
    return 0;
}