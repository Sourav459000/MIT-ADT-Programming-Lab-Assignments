#include <iostream>
using namespace std;
class Maths
{
    public:
    double perc;
    float per;
    public:
    void calculate_percentage(double p1);
    void calculate_percentage(float p2);
};
void Maths :: calculate_percentage(double p1)
{
    cout<<"\nPercentage(10th): "<<p1;
}
void Maths:: calculate_percentage(float p2)
{
    cout<<"\nPercentage(12th): "<<p2;
}
int main()
{
    Maths m;
    cout<<"\nPercentage scored in 10th:";
    cin>>m.perc;
    cout<<"\nPercentage scored in 12th:";
    cin>>m.per;
    m.calculate_percentage(m.perc);
    m.calculate_percentage(m.per);
    return 0;
}