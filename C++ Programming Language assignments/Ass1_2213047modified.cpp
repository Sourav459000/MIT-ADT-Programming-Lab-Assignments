#include <iostream>
using namespace std;
class hotel
{
public:
    int table_num;
    string cust_name;
    double cust_contact;
    string item_name[50];
    int item_price[50];
    double final_price;
};
int main()
{
    int total=0;
    hotel h;
    char ch;
    int i=0;
    cout<<"Enter the table no:";
    cin>> h.table_num;
    cout<<"Enter the customer name:";
    cin>> h.cust_name;
    cout<<"Enter the customer contact:";
    cin>> h.cust_contact;
    while (1)
    {
    cout<<"Enter the Item name:"; 
    cin>> h.item_name[i];
    cout<<"Enter the item price:";
    cin>> h.item_price[i];
    total=total+h.item_price[i];
    i++;
    cout<<"Do you want more?(y/n)";
    cin>> ch;
      if (ch=='n')
       {
           break;
       }
    }
    // for discount 10%
    h.final_price=0.9*total;
    cout<<"Total amount:"<<h.final_price;
    
    return 0;
}