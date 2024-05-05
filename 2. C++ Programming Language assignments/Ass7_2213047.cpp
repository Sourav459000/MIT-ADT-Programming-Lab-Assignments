#include <iostream>
using namespace std;
class Complex
{
private:
float real,img;
public:
void get (void);
void operator+(Complex);
void operator-(Complex);
void operator*(Complex);
void operator/(Complex);
};
void Complex :: get()
{
cout<<"\n Please enter a real number:";
cin>>real;
cout<<"\n Please enter a imaginary number:";
cin>>img;
cout<<"\n"<<real<<"+"<<img<<"i";
}
void Complex :: operator+(Complex c)
{
real = real + c.real;
img = img + c.img;
cout<<"\n Complex number ="<<real<<"+"<<img<<"i";
}
void Complex :: operator-(Complex c)
{
real = real - c.real;
img = img - c.img;
cout<<"\n Complex number ="<<real<<"+"<<img<<"i";
}
void Complex :: operator*(Complex c)
{
real = real * c.real;
img = img * c.img;
cout<<"\n Complex number ="<<real<<"+"<<img<<"i";
}
void Complex :: operator/(Complex c)
{
real = real / c.real;
img = img / c.img;
cout<<"\n Complex number ="<<real<<"+"<<img<<"i";
}
int main()
{
Complex c1,c2,c3;
c1.get();
c2.get();
c1+c2;
c1-c2;
c1*c2;
c1/c2;
return 0;
}