#include <iostream>
using namespace std;
class Store
{
    public:
    int i,j,m,s=0,count=1;
    int a[10][10],b[10][10];
    void input()
    {
    cout<<"Enter no. of rows and column"<<endl;
    cin>>m;
    cout<<"Enter the values"<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    }

    void upper()
    {   
        for (i=0;i<m;i++)
        {
            for (j=0;j<i;j++)
                {
                    if(j<i && a[i][j]==0)
                    count=1;
                    else if(j<i && a[i][j]!=0)
                    count=0;
                }
                if(count==0)
                break;
        }
                if(count==1)    
                cout<<"This is upper triangular matrix"<<endl;
                else
                cout<<"This is a not upper triangular matix"<<endl;
    }
    
    void sum()
    {
        for (i=0;i<m;i++)
            {
                for (j=0;j<m;j++)
                    {
                        if(i==j)
                        s+=a[i][j];
                    }
            }
            cout<<"The sum of the diagonal is "<<s<<endl; 
    }

    void transpose()
    {
        cout<<"The transpose of the matrix is "<<endl;
        for (i=0;i<m;i++)
        for (j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
    }
    }
};

int main()
{
    Store st;
    st.input();
    st.upper();
    st.sum();
    st.transpose();
    return 0;
}