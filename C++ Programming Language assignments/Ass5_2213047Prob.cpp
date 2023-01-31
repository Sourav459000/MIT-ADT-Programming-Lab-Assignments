#include<iostream>
using namespace std;
class Bank
{
  private:
    string cus_name,bank_name,branch,acc_type,mobile_num,acc_num,mail_id,ifsc_code;
    float amt,balance=0;
 
  public:
    void deposit_amt(void);
    void withdraw_amt(void);
    void disp_details(void);
    void get_details(void);
};
void Bank :: get_details()
{
  cout<< "\n\n\t\t----BANK APPLICATION----"; 
  cout<<" \n\n\t\t------BANK DETAILS-------\n"; 
  cout << "Enter Bank name:" ; 
  cin >> bank_name; 
  cout << "Enter Branch:" ; 
  cin >> branch; 
  cout << "Enter Name depositor:" ; 
  cin >> cus_name; 
  cout << "Enter Account number:" ; 
  cin >> acc_num; 
  cout << "Enter IFSC code:" ; 
  cin >> ifsc_code; 
  cout << "Enter Account type:" ; 
  cin >> acc_type; 
  cout << "Enter Mobile number:" ; 
  cin >> mobile_num; 
  cout << "Enter Email id:" ; 
  cin >> mail_id;
}
void Bank :: deposit_amt()
{
  cout << "\nEnter amount to be deposited:" ;
  cin >> amt ;
  try
  {
    if(amt<100)
    throw amt;
  }catch(float e)
  {
    cout<<"\nNot enough deposit";
  }
  balance+=amt;
}
void Bank :: withdraw_amt()
{
 cout << "\nEnter amount to be withdrawed:" ;
 cin >> amt ;
 try
 {
    if(amt>balance)
    throw amt;
 }catch(float e)
 {
    cout<<"\nNot enough balance";
 }
}
void Bank :: disp_details()
{
  cout<<" \n\n\t\t**BANK DETAILS**\n";
  cout << "\n BANK NAME:" << bank_name ;
  cout << "\n CUSTOMER NAME:" << cus_name ;
  cout<< "\n ACCOUNT NUMBER:" << acc_num ;
  cout<< "\n BALANCE:" << balance ;
  cout<< "\n IFSC CODE:" << ifsc_code ;
  cout<< "\n BRANCH:" << branch ;
  cout<< "\n ACCOUNT TYPE:" << acc_type ;
  cout<< "\n MOBILE NUMBER:" << mobile_num ;
  cout<< "\n EMAIL ID:" << mail_id << "\n";
}
int main()
{
  Bank b1;
  b1.get_details();
  b1.deposit_amt();
  b1.withdraw_amt();
  b1.disp_details();
  return 0;
}