#include<iostream>
using namespace std;
class linear_search
{
    public:
        void linear(int A[], int n,int value)
        {
            int pnt, flag=0, i;
            for ( i = 0; i < n; i++)
            {
                if (A[i] == value)
                {
                    pnt = i;
                    flag = 1;
                    break;
                }
                
            }
            if (flag == 1)
            {
                cout<<"Element is present at index "<<pnt<<endl;
            }
            else
            {
                cout<<"Element is not found"<<endl;
            }
        }
};
class binary_search
{
    public:
        int binary(int arr[], int left, int right, int val)
        {
            if (right>=left)
            {
                int mid = left+ (right-left)/2;
                if (arr[mid]==val)
                {
                    return mid;
                }
                if (arr[mid]>val)
                {
                    return binary(arr,mid-1,right,val);
                }
                return binary(arr,mid+1,right,val);
            }
            return -1;
            
        }
};
int main()
{
  int A[20], n, key, i, chs, ch=1, ele;
  linear_search ls;
  binary_search bs;
  do
  {
    cout<<"Number of elements in Array: ";
    cin>>n;
    cout<<"Enter Array elements: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter search element: ";
    cin>>key;
    cout<<"Enter choice:\n1. Linear Search\n2. Binary Search\n3.Exit"<<endl;
    cin>>chs;
    switch (chs)
    {
    case 1:
        ls.linear(A,n,key);
        break;
    case 2:
        ele = bs.binary(A,0,n-1,key);
        if (ele == -1)
        {
            cout<<"Element is not found"<<endl;
        }
        else
        {
            cout<<"Element is found at index: "<<ele<<endl;
        }
        break;
    case 3:
        exit(-1);
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    cout<<"Do you wish to continue(1/0): ";
    cin>>ch;
  }while (ch==1);
  return 0;
}