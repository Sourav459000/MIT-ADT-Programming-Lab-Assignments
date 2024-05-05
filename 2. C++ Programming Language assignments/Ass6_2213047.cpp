#include <iostream>
using namespace std;
#define PI 3.142
class Shapes
{
    public:
    float r,l,b,a,rad;
    public:
    void area(float i1);
    void area(float i3,float i2);
};
void Shapes :: area(float i1)
{
    r=i1;
    a=3.*r*r;
    cout<<"Area of Circle is: "<<a<<endl;
}
void Shapes::area(float i3,float i2)
{
    l=i3;
    b=i2;
    a=l*b;
    cout<<"Area Of Rectangle is: "<<a<<endl;
}
int main()
{
    cout<<"AREA OF DOFFERENT SHAPES"<<endl;
    cout<<"Polymorphism"<<endl;
    Shapes s1;
    cout<<"AREA OF CIRCLE: "<<endl;
    float rad;
    cout<<"Please Enter Radius Of Circle: "<<endl;
    cin>>rad;
    s1.area(rad);
    cout<<"AREA OF RECTANGLE: "<<endl;
    float len,brd;
    cout<<"Please Enter Length And Breadth Of The Rectangle: "<<endl;
    cin>>len>>brd;
    s1.area(len,brd);
    return 0;
}
