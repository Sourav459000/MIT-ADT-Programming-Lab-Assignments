#include <iostream>
using namespace std;
class student
{
    private:
        string name,branch;
        int rno;
    public:
        void get_details(void);
        void put_details(void);
};
void student::get_details(void)
{
    cout << "\t---------------Enter student's basic information:----------" << endl;
    cout << "Name: ";    
    cin >> name ;
    cout << "Branch: ";    
    cin >> branch ;
    cout << "Roll number: ";
    cin >> rno ;
}
void student::put_details(void)
{
    cout <<"\n\t ---------Student details------------";
    cout <<"\nName: " << name;
    cout <<"\nBranch: " << branch;
    cout <<"\nRoll number: " << rno;
}
class result:public student
{
    private:
        int total;
        float  perc;
        char grade;
    public:
        void get_Result(void);
        void put_Result(void);
};
void result::get_Result(void)
{
    cout << "\t-----------Enter student's result information:----------";
    cout << "\nTotal Marks from one subjects: ";    
    cin >> total ;
    perc= total/1;
    cout << "\nGrade: ";
    cin >> grade ;
}
void result::put_Result(void)
{
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << perc;  
    cout << "\nGrade: " << grade;
}
int main()
{
    result r1;
    r1.get_details();
    r1.get_Result();
    r1.put_details();
    r1.put_Result();
    return 0;
}

