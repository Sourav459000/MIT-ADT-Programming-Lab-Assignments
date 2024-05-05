#include <iostream>
using namespace std;
class Employee 
{
  private:
  string emp_name,emp_id,address,email,mobile_num;
  float bp,da,hra,gs,pf,cf,ns;  
  public:
  void get_details(void);
  void compute_salary(void);
  void put_details(void);
};
void Employee :: get_details()
{
    cout<<"\n Please enter employee name:";
    cin>>emp_name;
    cout<<"\n Please enter employee id:";
    cin>>emp_id;
    cout<<"\n Please enter address :";
    cin>>address;
    cout<<"\n Please enter employee email id :";
    cin>>email;
    cout<<"\n Please enter employee mobile number :";
    cin>>mobile_num;
    cout<<"\n Please enter Basic salary :";
    cin>>bp;
}
void Employee :: compute_salary()
{
    da = 0.97*bp;
    hra = 0.1*bp;
    pf = 0.12*bp;
    cf = 0.001*bp;
    gs = bp+da+hra;
    ns = gs-pf-cf;
}
 
void Employee :: put_details()
{
    cout<<"Employee name :"<<emp_name;
    cout<<"Employee id :"<<emp_id;
    cout<<"Employee address :"<<address;
    cout<<"Employee email id :"<<email;
    cout<<"Employee mobile number :"<<mobile_num;
    cout<<"Employee basic salary :"<<bp;
    cout<<"Employee gross salary :"<<gs;
    cout<<"Employee net salary :"<<ns;
    
}
class Programmer : public Employee 
{
    private:
    string language,designation,domain;
    public:
    void get_details(void);
    void put_details(void);
};
void Programmer :: get_details()
{
    cout<<"\n Programming language :";
    cin>>language;
    cout<<"\n Designation :";
    cin>>designation;
    cout<<"\n Domain :";
    cin>>domain;
}
void Programmer :: put_details()
{
    cout<<"\n Language :"<<language;
    cout<<"\n Designation :"<<designation;
    cout<<"\n Domain :"<<domain;
}
int main()
{
    Employee e1;
    Programmer p1;
    e1.get_details();
    e1.compute_salary();
    e1.put_details();
    p1.get_details();
    p1.put_details();
    return 0;
}
