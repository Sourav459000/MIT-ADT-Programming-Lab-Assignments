#include<iostream>
using namespace std;
class BankDetails
{
public:
    string name, name1, name2;
    long long int AccNumber;
    double AccBalance=0;
    float AmountDepo, AmountWith;
public:
void Details()
{
    cout<<"Enter account holder name:";
    cin>>name;
    cout<<"Enter the account number:";
    cin>>AccNumber;
}  
void deposit()
{
    cout<<"Enter the name of depositor:";
    cin>>name1;
    cout<<"Enter the amount to deposit:";
    cin>>AmountDepo;
    AccBalance+=AmountDepo;
    cout<<"The available balance in your account is"<<AccBalance<<endl; 
}
void withdraw()
{
    cout<<"Enter the name of withdrawer:";
    cin>>name2;
    cout<<"Enter the amount to withdraw:";
    cin>>AmountWith;
    AccBalance=AccBalance-AmountWith;
    cout<<"The available balance in your account is"<<AccBalance<<endl; 
}  
};
int main()
{
 int Activity;
 BankDetails B;
 B.Details();
 char OP;
 do
 {
    cout<<"Enter 1 to deposit, 2 to withdraw, 3 to get details, any number to exit"<<endl;
    cin>>Activity;
    switch (Activity)
     {
     case 1: 
         B.deposit();
         break;
     case 2: 
         B.withdraw();
         break;
     case 3: 
         B.Details();
         break;
     default:
         break;
     }
    cout<<"Do you want to continue the process for others? Enter Y or N"<<endl;
    cin>>OP;
 }while(OP=='Y');
    return 0;
}

// #include<iostream>
// using namespace std;
// class BankDetails
// {
// public:
//     string name, name1, name2;
//     long long int AccNumber;
//     double AccBalance=0;
//     float AmountDepo, AmountWith;
// public:
// void Details();
// void deposit();
// void withdraw();
// };
// void BankDetails::Details()
// {
//     cout<<"Enter account holder name:";
//     cin>>name;
//     cout<<"Enter the account number:";
//     cin>>AccNumber;
// }  
// void BankDetails::deposit()
// {
//     cout<<"Enter the name of depositor:";
//     cin>>name1;
//     cout<<"Enter the amount to deposit:";
//     cin>>AmountDepo;
//     AccBalance+=AmountDepo;
//     cout<<"The available balance in your account is"<<AccBalance; 
// }
// void BankDetails::withdraw()
// {
//     cout<<"Enter the name of withdrawer:";
//     cin>>name2;
//     cout<<"Enter the amount to withdraw:";
//     cin>>AmountWith;
//     AccBalance=AccBalance-AmountWith;
//     cout<<"The available balance in your account is"<<AccBalance; 
// }  
// int main()
// {
//     int Activity;
//     BankDetails B;
//     B.Details();
//     cout<<"Enter 1 to deposit, 2 to withdraw, 3 to get details, any number to exit"<<endl;
//     cin>>Activity;
//     switch (Activity)
//     {
//     case 1: 
//         B.deposit();
//         break;
//     case 2: 
//         B.withdraw();
//         break;
//     case 3: 
//         B.Details();
//         break;
//     default:
//         break;
//     }
//     return 0;
// }