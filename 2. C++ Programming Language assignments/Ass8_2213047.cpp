#include <iostream>
using namespace std;
template <class T>
class Vector 
{
    T v[20],value,scalar,nvalue;
    int i,index;
    char ch;
    public:
    void create (void);
    void modify (void);
    void multiply (void);
    void display (void);
};
template <class T>
void Vector<T> :: create()
{
    do
    {
        cout<<"\n Please enter index and value :";
        cin>>index>>value;
        v[index] = value;
        cout<<"\n Do you want to continue :";
        cin>>ch;
    }while(ch=='y'||ch=='Y');   
}
template <class T>
void Vector<T> :: modify()
{
    cout<<"\n Do you want to modify existing data:";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        cout<<"\n Please enter new index and value :";
        cin>>index>>value;       
        v[index]=value;
    }
}
template <class T>
void Vector<T> :: multiply()
{
    cout<<"\n Please enter scalar value to multiply :";
    cin>>scalar;
    nvalue = scalar*value;
    v[index] = nvalue;   
}
template <class T>
void Vector<T> :: display()
{
    cout<<"\n Value :"<<value;
    cout<<"\n Index :"<<index;
    cout<<"\n scalar :"<<nvalue;
}
int main()
{
    Vector <int> v1;
    v1.create();
    v1.modify();
    v1.multiply();
    v1.display();
    return 0;
}