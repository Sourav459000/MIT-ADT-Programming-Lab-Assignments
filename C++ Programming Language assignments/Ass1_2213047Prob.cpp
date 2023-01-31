// Write a CPP program to generate a student mark sheet. Create a class student with the following members: name, branch, division, roll no, and marks in three subjects. Compute total and percentage . Display complete student  information on screen. 
#include<iostream>
using namespace std;
class StudentInfo
{
public:
    string Name;
    string Branch;
    char Div;
    int Rno;
    float OOP_marks, ODEAC_marks, DELD_marks, Total=0;
    double Percent;
};
int main()
{
 StudentInfo s;
 cout<<"Enter the name of student:"<<endl;
 cin>>s.Name;
 cout<<"Enter the branch of student:"<<endl;
 cin>>s.Branch;
 cout<<"Enter the division of student:"<<endl;
 cin>>s.Div;
 cout<<"Enter the roll no of student:"<<endl;
 cin>>s.Rno;
 cout<<"Enter the OOP marks of student:"<<endl;
 cin>>s.OOP_marks;
 cout<<"Enter the ODEAC marks of student:"<<endl;
 cin>>s.ODEAC_marks;
 cout<<"Enter the DELD marks of student:"<<endl;
 cin>>s.DELD_marks;
 s.Total=s.OOP_marks+s.ODEAC_marks+s.DELD_marks;
 s.Percent=s.Total/300*100;

 cout<<"-STUDENT DETAILS-"<<endl;
 cout<<"Name: "<<s.Name<<endl;
 cout<<"Brach: "<<s.Branch<<endl;
 cout<<"Division: "<<s.Div<<endl;
 cout<<"OOP Marks: "<<s.OOP_marks<<endl;
 cout<<"ODEAC Marks: "<<s.ODEAC_marks<<endl;
 cout<<"DELD Marks: "<<s.DELD_marks<<endl;
 cout<<"Total: "<<s.Total<<endl;
 cout<<"Percentage: "<<s.Percent<<endl;

 return 0;
}