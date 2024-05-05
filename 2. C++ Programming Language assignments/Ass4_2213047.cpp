// Write a CPP program that represents the complex number (for example:  2 + 3i)
#include<iostream>
using namespace std;
class complex
{
 private:
	int real, imag;
 public:
	complex()
	{
	 real=2;
	 imag=3;
	 cout<<real<<"+"<<imag<<"i"<<endl;
	}
	complex(int a, int b)
	{
	 real=a;
	 imag=b;
	 cout<<real<<"+"<<imag<<"i"<<endl;
	}
	complex(complex &obj)
	{
	 real=obj.real;
	 imag=obj.imag;
	 cout<<real<<"+"<<imag<<"i"<<endl;
	}
};
int main()
{
 complex c;
 complex c1(2,3);
 complex c2(c1);
 return 0;
}