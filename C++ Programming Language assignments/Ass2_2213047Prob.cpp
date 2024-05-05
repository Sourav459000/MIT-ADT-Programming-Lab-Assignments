#include<iostream>
using namespace std;
class Area
{
  private:
  float length,breadth,area_rec;
  public:
  void setDim(void);
  void getArea(void);
};
int main()
{
    Area a1;
    a1.setDim();
    a1.getArea();   
    return 0;
}
void Area :: setDim()
{
    cout<<"\n Please enter length of the rectangle :";
    cin>>length;
    cout<<"\n Please enter breadth of the rectangle :";
    cin>>breadth;   
}
void Area :: getArea()
{
    area_rec = length*breadth;
    cout<<"\n The area of the rectangle is : "<<area_rec;
}
