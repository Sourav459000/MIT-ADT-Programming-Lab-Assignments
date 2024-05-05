/*Concept: Structure
Lab 9: An automobile company has serial numbers for engine parts starting from AA0 to
 FF9. The other characteristics of parts to be specified in a structure are: Year of 
 manufacture, material and quantity manufactured.
1. Specify a structure to store information corresponding to a part.
2. Write a program to retrieve information on parts with serial numbers between
    BB1 and CC6.*/
#include<stdio.h>

struct engine
{
	char serial[5];
	int yom;
	char mat[60];
	int quantity;
}part[5];
int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("Enter the details for part number: %d\n",i+1);
		printf("Enter the serial number:\n");
		scanf("%s",part[i].serial);

		printf("Enter the year of manufacturing:\n");
		scanf("%d",&part[i].yom);

		printf("Enter the material used:\n");
		scanf("%s",part[i].mat);

		printf("Enter the quantity:\n");
		scanf("%d", &part[i].quantity);
	}
	for (int i = 2; i < 4; i++)
	{
		printf("Details of part for Serial no:%s\n",part[i].serial);
		printf("Year of manufacture:%d\n Material used:%s\n Quantity:%d\n",part[i].yom,part[i].mat,part[i].quantity);
	}
	return 0;
}


