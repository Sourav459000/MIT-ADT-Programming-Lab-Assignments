#include <iostream>
using namespace std;
class hotel
{
public:
    int table_num;
    string cust_name;
    long int cust_contact;
    string item_name;
    int item_price;
    int final_price;
};
int main()
{
    hotel h;
    cout<<"Enter the table no:";
    cin>> h.table_num;
    cout<<"Enter the customer name:";
    cin>> h.cust_name;
    cout<<"Enter the customer contact:";
    cin>> h.cust_contact;
    cout<<"Enter the Item name:"; 
    cin>> h.item_name;
    cout<<"Enter the item price:";
    cin>> h.item_price;
    // for discount 10%
    h.final_price=0.9*h.item_price;
    cout<<"-----DETAILS-----"<<endl;
    cout<<"Table no:"<<h.table_num<<endl;
    cout<<"Customer name:"<<h.cust_name<<endl;
    cout<<"Customer contact:"<<h.cust_contact<<endl;
    cout<<"Total amount:"<<h.final_price<<endl;
    return 0;
}