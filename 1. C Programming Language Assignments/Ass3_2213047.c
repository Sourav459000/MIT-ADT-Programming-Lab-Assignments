/*Time Calculator: Design a program that asks the user to enter a number of seconds, and works as follows:
1. There are 60 seconds in a minute. If the number of seconds entered by the user is greater than or equal to 60, the program should display the number of minutes in that many seconds.
2. There are 3,600 seconds in an hour. If the number of seconds entered by the user is greater than or equal to 3,600, the program should display the number of hours in that many seconds.
3. There are 86,400 seconds in a day. If the number of seconds entered by the user is greater than or equal to 86,400, the program should display the number of days in that many seconds.
 */

#include<stdio.h>
#include<math.h>

int main()
{
    int sec,min,hr,day,rem;

    printf("Enter time in seconds:\n");
    scanf("%d",&sec);

    if (sec>=60)
    {
        if (sec>=86400)
        {
            day=sec/86400;
            hr=(int)(sec-(day*86400))/3600;
            min=(int)(sec-day*86400-hr*3600)/60;
            rem=(int)(sec-day*86400-hr*3600-min*60);
            printf("Time in days is %d, hours is %d, minuntes is %d and seconds is %d\n",day,hr,min,rem);
        }
        else if (sec>=3600 && sec<86400)
        {
            hr=sec/3600;
            min=(int)(sec-hr*3600)/60;
            rem=(int)(sec-hr*3600-min*60);
            printf("Time in hours is %d, minuntes is %d and seconds is %d\n",hr,min,rem);
        }
        else if(sec>=60 && sec<3600)
        {
            min=sec/60;
            rem=(int)(sec-min*60);
            printf("Time in minuntes is %d and seconds is %d\n",min,rem);
        }
    else
    {
        printf("Number of sec are: %d\n",sec);
    }
           
    }
    return 0;
}


