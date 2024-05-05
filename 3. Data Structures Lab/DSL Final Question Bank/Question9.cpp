#include<iostream>
using namespace std;
class sortt
{
    public:
        void insertionSort(int arr[],int n)
        {
            int i, key, j;
            for ( i = 1; i < n; i++)
            {
                key = arr[i];
                j = i-1;
                while (j>=0 & arr[j] > key)
                {
                    arr[j+1]=arr[j];
                    j=j-1;
                }
                arr[j+1]=key;
            }
            
        }
        void swap(int *xp, int *yp)
        {
            int temp = *xp;
            *xp = *yp;
            *yp = temp;
        }
        void bubbleSort(int arr[], int n)
        {
            int i,j;
            for ( i = 0; i < n-1; i++)
            {
                for ( j = 0; j < n-1-i; j++)
                {
                    if (arr[j]>arr[j+1])
                    {
                        swap(&arr[j],&arr[j+1]);
                    }
                    
                }
                
            }
            
        }
        void selectionSort(int arr[], int n)
        {
            int i,j,min_idx;
            for ( i = 0; i < n-1; i++)
            {
                min_idx = i;
                for ( j = 1; j < n; j++)
                {
                    if (arr[j]<arr[min_idx])
                    {
                        min_idx=j;

                    }
                    swap(&arr[min_idx], &arr[i]);
                }
                
            }
            
        }
        void printArray(int arr[], int n)
        {
            int i;
            cout<<"The sorted array is: "<<endl;
            for ( i = 0; i < n; i++)
            {
                cout<<arr[i];
                cout<<"\t";
            }
            cout<<endl;
        }
};

int main()
{
  int arr[10], n, i, choice;
  sortt a;
  while (choice !=4)
  {
    cout<<"Enter your choice: \n1) Insertion Sort \n2) Bubble Sort \n3) Selection Sort \n4) Exit"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the number of element in an array: "<<endl;
        cin>>n;
        cout<<"Enter the elements in the array: "<<endl;
        for ( i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
        a.insertionSort(arr,n);
        a.printArray(arr,n);
        break;
    
    case 2:
        cout<<"Enter the number of element in an array: "<<endl;
        cin>>n;
        cout<<"Enter the elements in the array: "<<endl;
        for ( i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
        a.bubbleSort(arr,n);
        a.printArray(arr,n);
        break;
    
    case 3:
        cout<<"Enter the number of element in an array: "<<endl;
        cin>>n;
        cout<<"Enter the elements in the array: "<<endl;
        for ( i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
        a.bubbleSort(arr,n);
        a.printArray(arr,n);
        break;

    case 4:
        break;
    }
  }
  
  return 0;
}