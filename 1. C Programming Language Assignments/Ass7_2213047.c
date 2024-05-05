/*Color Mixer
The colors red, blue, and yellow are known as the primary colors because they cannot be made by mixing other colors. When you mix two primary colors, you get a secondary color, as shown here:
▪ When you mix red and blue, you get purple.
▪ When you mix red and yellow, you get orange.
▪ When you mix blue and yellow, you get green.
Design a program that prompts the user to enter the names of two primary colors to mix. If the user enters anything other than “red,” “blue,” or “yellow,” the program should display an error message. Otherwise, the program should display the name of the secondary color that results.
 */
# include<stdio.h>
# include<string.h>

int main()
{
    char primary1[50];
    char primary2[50];
    char blue[]="blue";
    char red[]="red";
    char yellow[]="yellow";
    char ch;

do
{
    printf("Enter the primary1 colour\n:");
    scanf("%s",&primary1);
    printf("Enter the primary2 colour\n:");
    scanf("%s",&primary2);

    if(strcmp(primary1,red)==0)
        {
        if(strcmp(primary2,blue)==0)
            {
             printf("Mixture of red and blue is purple\n");   
            }
        else if(strcmp(primary2,yellow)==0)
                {
                 printf("Mixture of red and yellow is orange\n");
                }
                else
                {
                    printf("Input error\n");
                }
                
        }
    if(strcmp(primary1,blue)==0)
       {
        if(strcmp(primary2,yellow)==0)
        {
         printf("Mixture of blue and yellow is green\n");
        }
        else if (strcmp(primary2,red)==0)
        {
         printf("Mixture of red and blue is purple\n");  
        }
        else
        {
         printf("Input error\n");
        } 
       }
    if(strcmp(primary1,yellow)==0)
        {
        if(strcmp(primary2,blue)==0)
            {
             printf("Mixture of red and blue is green\n");   
            }
        else if(strcmp(primary2,red)==0)
    {
        printf("Mixture of red and yellow is orange\n");
    }
    else{
        printf("Input error\n");
    }
        }
        printf("If you want to re run it, Enter Y\n");
        scanf(" %c", &ch);
        } while (ch =='Y');
    return 0;
}                   