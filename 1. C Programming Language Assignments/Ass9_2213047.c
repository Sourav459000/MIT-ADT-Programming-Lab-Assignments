/*Concept: Function
Lab 10: Create a program that calls a method that computes the final price for a sales
 transaction. The program contains variables that hold the price of an item, the 
 salesperson’s commission expressed as a percentage, and the customer discount 
 expressed as a percentage. Create a calculatePrice() method that determines the final 
 price and returns the value to the calling method. The calculatePrice() method 
 requires three arguments: product price, salesperson commission rate, and customer 
 discount rate. A product’s final price is the original price plus the commission 
 amount minus the discount amount. The customer discount is taken as a percentage of 
 the total price after the salesperson commission has been added to the original price.*/
# include<stdio.h>

void price(float base_price,float commission, float discount)
{
    float final_price;
    commission= (commission/100 * base_price);
    discount= (discount/100 * base_price);
    final_price= base_price+commission-discount;
    printf("The final price of the product is : %f\n",final_price);
}
void main()
{
    float base_price, commission, discount;

    printf("Enter the base price:\n");
    scanf("%f",&base_price);
    printf("Enter the commission price:\n");
    scanf("%f",&commission);
    printf("Enter the discount price:\n");
    scanf("%f",&discount);
    price(base_price, commission, discount);
}
