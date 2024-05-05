#include <iostream>
using namespace std;
class Maths
{
    private:
    int x=0;
    public:
    void get(void);
    void operator++(void);
};
void Maths:: get()
{
    cout<<"Enter number";
    cin>>x;
}
void Maths :: operator++()
{
    x=x+5;
    cout<<x;
}
int main()
{
    Maths m1;
     m1.get();
    ++m1;
    return 0;
}
