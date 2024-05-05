#include<iostream>
#include<math.h>
using namespace std;
struct poly
{
 int coeff;
 int expo;
};

int imath(struct poly p[])
{
    int t1,i,k;
       cout<<"\n Enter the polynomial details:";
        cout<<"\n Enter the total number of terms in the polynomial: ";
        cin>>t1;
        cout<<"\n Enter the COEFFICIENT and EXPONENT "<<endl;
        for(i=0;i<t1;i++)
        {
            cout<<"Enter the Coefficient("<<i+1<<"):";
            cin>>p[i].coeff;
            cout<<"Enter the Exponent("<<i+1<<"):";
            cin>>p[i].expo;
        }
        cout<<"\n  The polynomial is: ";
        for(k=0;k<t1-1;k++)
        {
            cout<<p[k].coeff<<"(x^"<<p[k].expo<<")+";
        }
        cout<<p[k].coeff<<"(x^"<<p[k].expo<<")";
        return t1;
}

void mul_poly()
{
    int t1, t2,i,j,c;
    struct poly p2[20];
    struct poly p3[20];
    struct poly p4[50];
    cout<<"\n  **First polynomial***";
    t1=imath(p2);
    cout<<"\n  ***Second polynomial*****";
    t2=imath(p3);
    c=-1;
    for(i=0;i< t1;i++)
    {
        for (j=0;j< t2;j++)
        {
            p4[++c].expo=p2[i].expo+p3[j].expo;
            p4[c].coeff=p2[i].coeff*p3[j].coeff;
        }
    }
    cout<<"\nThe Product Of Two Polynomials Is: \n";
    cout<<endl;
   for(i=0;i<c;i++)
 cout<<p4[i].coeff<<"(x^"<<p4[i].expo<<")+";
   cout<<p4[i].coeff<<"(x^"<<p4[i].expo<<")";

}
int main()
{
     int ch;
     struct poly p1[20];
     cout<<"Enter choice: \n1.Taking input and printing polynomial\n2.Multiplication\n";
     cin>>ch;
    switch(ch)
    {
        case 1:imath(p1);
            break;
        case 2:mul_poly();
            break;
    }
    return 0;
}