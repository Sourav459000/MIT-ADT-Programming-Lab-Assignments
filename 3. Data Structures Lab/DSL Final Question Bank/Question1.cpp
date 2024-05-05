// 1) Matrix Operations- Add, Sub, Multiply, Triangular, Transpose, sum of diagonal

#include<iostream>
using namespace std;
class Matrix
{
    public:
        int m,n, a[10][10], b[10][10], i,j;
        int sum[10][10], diff[10][10], mul[10][10];
        void matrix()
        {
            cout <<" Enter the number of rows: "<<endl;
            cin >>m;
            cout<<"Enter the number of columns: "<<endl;
            cin>>n;
            cout<<"Enter elements of 1st matrix: "<<endl;
            for(i=0; i<m; i++)
                for(j=0; j<n; j++)
                {
                    cout<<"Enter element a"<<i+1<<j+1<<":";
                    cin>> a[i][j];
                }
            cout<<"Enter elements of 2nd matrix: "<<endl;
            for(i=0; i<m; i++)
                for(j=0; j<n; j++)
                {
                    cout<<"Enter element b"<<i+1<<j+1<<":";
                    cin>> b[i][j];
                }
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<a[i][j]<<" ";

                }
                cout<<"\n";
            }
            cout<<endl;
             for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<b[i][j]<<" ";

                }
                cout<<"\n";
            }
            cout<<endl;
        }
        void add_matrix()
        {
            cout<<"sum of the matrices"<<endl;
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    sum[i][j]= a[i][j] + b[i][j];
                    cout<< sum[i][j]<< " ";
                }
                cout<<"\n";
            }
        }
        void diff_matrix()
        {
            cout<<"Difference of the matrices"<<endl;
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    diff[i][j]= a[i][j] - b[i][j];
                    cout<< diff[i][j]<< " ";
                }
                cout<<"\n";
            }
        }
        void mul_matrix()
        {
            cout<<"multiplication of the matrices"<<endl;
            for(i=0; i<m; i++)
            {
            for(j=0; j<n; j++)
                {   mul[i][j]=0;
                    for(int k=0; k<n; k++)
                    mul[i][j]+=a[i][k] * b[k][j];
                    cout<< mul[i][j]<< " ";
                }
                cout<<"\n";
            }
        }
        
};
class Store
{
    public:
    int i,j,m,n,s=0,count=1;
    int a[10][10],b[10][10];
    void input()
    {
    cout <<" Enter the number of rows: "<<endl;
    cin >>m;
    cout<<"Enter the number of columns: "<<endl;
    cin>>n;
    cout<<"Enter the values"<<endl;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<":";
            cin>> a[i][j];
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
    Matrix M;
    M.matrix();
    M.add_matrix();
    M.diff_matrix();
    M.mul_matrix();
    Store st;
    st.input();
    st.upper();
    st.sum();
    st.transpose();
    return 0;
}