/*Imagine a publishing company which does marketing for book and audiocassette versions. Create a class publication that stores the title (a string) and price (type float)
 of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Write a program 
 that instantiates the book and tape class, allows users to enter data and displays the data members. Catch an exception and replace all the data member values with zero values*/
#include<iostream>
using namespace std;
class Publication
{
 public:
	string title;
	float price;
 void getdetails()
 {
 cout<<"Enter the title:";
 cin>>title;
 cout<<"Enter the price:";
 cin>>price;
 }
 void viewdetails()
 {
 cout<<"The title is: "<<title<<endl;
 cout<<"The price is: "<<price<<endl;
 }
};
class book: public Publication
{
 public:
 int pgno;
 void details()
 {
 cout<<"Enter the number of pages:";
 cin>>pgno;
 }
void view()
 {
try{
 if(pgno<=0)
 {
  throw pgno;
 }
 else
 {
  cout<<"Valid\n";
 }
   }
catch(int e)
 {
 cout<<"Invalid page count:"<<e<<endl;
 }
 }
};
class tape: public Publication
{
 public:
 float time;
 void Intime()
 {
  cout<<"Enter the playing time:";
  cin>>time;
 }
 void outtime()
 {
   try
   {
     if (time<=0)
     {
       throw time;
     }
     else
     {
       cout<<"Valid\n";
     }
   }
   catch(float t)
   {
     cout<<"Invalid time count:"<<t<<endl;
   }
   
 }
};
int main()
{
 book b;
 tape t;
 b.getdetails();
 b.details();
 b.viewdetails();
 b.view();
 t.getdetails();
 t.Intime();
 t.viewdetails();
 t.outtime();
 return 0;
}