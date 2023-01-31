#include<iostream>
using namespace std;
template <class T>
void Lsearch(T *a, T item, int n)
{
int z=0;
for(int i=0;i<n;i++)
{
if(a[i]== item)
{
cout<<"\n Item found at position = "<<i+1<<"\n\n";
z=1;
return;
}
}
cout<<"\nNot Found\n\n";
}
int main()
{
int arrayInt[10] = {2,42,56,86,87,99,323,546,767,886};
double arrayDouble[6]= {2.4, 5.53,44.4, 54.45, 65.7,89.54};
int itemI;
double itemD;
cout<<"\n Elements of Integer Array \n";
for(int i=0;i<10;i++)
{
cout<<arrayInt[i]<<" ";
}
cout<<"/n Enter an item to be search: ";
cin>>itemI;
cout<<"\n\n Linear Search Method\n";
Lsearch(arrayInt,itemI,10);
cout<<"\n Elements of double Array \n";
for(int i=0;i<6;i++)
{
cout<<arrayDouble[i]<<" ";
}
cout<<"\n Enter an item to be search: ";
cin>>itemD;
cout<<"\n\n Linear Search Method\n";
Lsearch(arrayDouble,itemD,6);
return 0;
}