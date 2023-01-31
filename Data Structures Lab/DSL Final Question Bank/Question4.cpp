#include<iostream>
#include<string.h>
using namespace std;

class STRING1
{
  public:
    int i;
    void frequency(string);
    void deletel(string);
    void chardel(string);
    void palindrome(string);
};
void STRING1 :: frequency(string arr)
{
    char ch;
    cout<<"Enter the character for which you want to count frequency: \n";
    cin>>ch;
    int count = 0;
    for ( i = 0; arr[i]!='\0'; i++)
    {
        if (ch == arr[i])
        {
            count+=1;
        }
        
    }
    cout<<"The frequency of character"<<ch<<"is: "<<count<<endl;
}
void STRING1 :: deletel(string arr)
{
    int j,k,flag=0;
    cout<<"Enter the two positions at which you want to delete characters: "<<endl;
    cin>>j>>k;
    for ( i = j-1; arr[i] !='\0'; i++)
    {
        arr[i]=arr[i+1];
    }
    for ( i = k-2; arr[i] !='\0'; i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"The edited string is: "<<endl;
    for ( i = 0; arr[i]!=0; i++)
    {
        cout<<arr[i];
    } 
}
void STRING1 :: chardel(string arr)
{
    char ch, arr1[8];
    int j, len=0;
    cout<<"Enter character to be deleted: ";
    cin>>ch;
    for ( i = 0; arr[i]!='\0'; i++)
    {
        len++;
    }
    for ( i = j = 0; i<len ; i++)
    {
        if (arr[i]!=ch)
        {
            arr1[j++]=arr[i];
        }
    }
    arr1[j]='\0';
    cout<<"The edited string is: ";
    for ( int k = 0; arr1[k]!='\0'; k++)
    {
        cout<<arr1[k];
    }
}
void STRING1 :: palindrome(string arr)
{
    int i,j,count = 0, k , flag = 0;
    for ( i = 0; arr[i]!='\0'; i++)
    {
        count+=1;
    }

    int a = count/2;
    
    for ( i = 0, j = count-1; i <= a; i++, j--)
    {
            if (arr[i]!=arr[j])
            {
                flag = 1;
                break;
            }
    }
    if (flag == 1)
    {
        cout<<"It is not a palindrome."<<endl;
    }
    else
    {
        cout<<"It is palindrome."<<endl;
    }
} 
int main()
{
  int y, choice;
  STRING1 obj;
  string ch;
  char ans;

  do
  {
   cout<<"\nEnter String: ";
   cin>>ch;
   cout<<"\nString operation menu:\n 1.frequecy \n 2.Delete \n 3.Delete character \n 4.Palindrome check"<<endl;
   cout<<"Enter your choice: ";
   cin>>choice;
   switch (choice)
   {
    case 1:
    {
        obj.frequency(ch);
        break;
    }
    case 2:
    {
        obj.deletel(ch);
        break;
    }
    case 3:
    {
        obj.chardel(ch);
        break;
    }
    case 4:
    {
        obj.palindrome(ch);
        break;
    }
    default:
    {
        cout<<"Invalid input"<<endl;
    }
   }
   cout<<"\nDo you want to continue (Y/y):";
   cin>>ans;
  } while (ans == 'y' || ans == 'Y');
  return 0;
}
