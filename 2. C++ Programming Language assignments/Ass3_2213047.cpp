/* Write a CPP program with Employee class with Emp_name, Emp_id, Address, Mail_id, Mobile_no as members. Inherit the classes, Programmer, Assistant Engineer, Business Analyst
 and Manager from employee class. Add Basic Pay (BP) as the member of all the inherited classes with 97% of BP as DA, 10 % of BP as HRA, 12% of BP as PF, 0.1% of BP for staff 
 club fund. Generate pay slips for the employees with their gross and net salary*/
#include<iostream>
using namespace std;
class employee
{
 public:
     string Emp_name,Email_ID,address;
     int Emp_ID;
     double Mobile_no, BasicPay;
     double DA,HRA,PF,SC,GS,NS;
 void getdetails()
{
 cout<<"Enter employee name, email id, address, ID, mobile number";
 cin>>Emp_name>>Email_ID>>address>>Emp_ID>>Mobile_no;
}
 void display()
{
 cout<<"Name:"<<Emp_name<<endl;
 cout<<"Email ID:"<<Email_ID<<endl;
 cout<<"Address:"<<address<<endl;
 cout<<"Emplyee ID:"<<Emp_ID<<endl;
 cout<<"Mobile number:"<<Mobile_no<<endl;
}
 void salary()
{
 cout<<"Enter your basic pay:";
 cin>> BasicPay;
 DA=(0.97*BasicPay);
 HRA=(0.1*BasicPay);
 PF=(0.12*BasicPay);
 SC=(0.001*BasicPay);
 GS=(BasicPay+DA+HRA);
 NS=GS-(PF+SC);
 cout<<"Gross Salary:"<<GS<<endl;
 cout<<"Net Salary:"<<NS<<endl;
}
     
};
class Programmer : public employee
{
 
};
class AssistantEngi : public employee
{
 
};
class BusinessAnaly : public employee
{
 
};
class Manager : public employee
{
 
};
int main()
{
 employee E;
 Programmer P;
 AssistantEngi A;
 BusinessAnaly B;
 Manager M;
 

 
 return 0;
}