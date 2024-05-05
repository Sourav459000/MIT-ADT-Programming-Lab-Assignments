#include <iostream>
#include <stack>
using namespace std;

bool IsOperator(char);  
bool IsOperand(char);  
int precedence(char);
bool eqlOrhigher(char, char);  
string convert(string);  

int main()
{
    string infix, postfix;
    int option;

    do
    {
        cout<<"Enter Infix Expression: "<<endl;
        cin >> infix;

        postfix=convert(infix);
        cout<<"Entered Infix Expression is: "<<infix<<endl;
        cout<<"Postfix Expression Obtained: "<<postfix<<endl;

        cout<<"Do you want to enter another infix expression(1/0)?";
        cin>>option;
    } while (option==1);
        return 0;
}

bool IsOperator(char c)
{
    if(c=='+'|| c=='-'|| c=='*'|| c=='/'|| c=='^')
    return true;
  return false;
}

bool IsOperand(char c1)
{
    if(c1>='A' && c1<='Z')
    return true;
    if(c1>='a' && c1<='z')
    return true;
    if(c1>='0' && c1>='9')
    return true;
}

int precedence(char op)
{
    if(op=='+' || op=='-')
    return 1;
    if(op=='*' || op=='-')
    return 2;
    if(op=='^')
    return 3;
   return 0;
}

bool eqlOrhigher(char op1, char op2)
{
    int p1= precedence(op1);
    int p2= precedence(op2);
    if(p1==p2)
    {
        if(op1=='^')
        return false;
        return true;
    }
    return (p1>p2?true:false);
}

string convert(string infix)
{
    int i = 0;
    string postfix = "";
    stack <int>s;

    while(infix[i]!='\0')
    {
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }

        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else            
        {
            while (!s.empty() && precedence(infix[i]) <= precedence(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}
// #include<iostream>
// using namespace std;
// int binary(int arr[],int n,int key)
// {
//     int s=0;
//     int e=n;        
//     cout<<"Enter the element to search: ";
//     cin>>key;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if (arr[mid]==key)
//         {
//         return mid;
//         }
//         else if (arr[mid]>key)
//         {
//             e=mid-1;
//         }
//         else
//         { 
//             s=mid+1;
//         }
//     }        
//     return -1;
// }
// int main()
// {
//     int n;
//     int arr[n];
//     cout<<"Enter the length of array: ";
//     cin>>n;
//     cout<<"Enter the elements in array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
    
//     cout<<binary(arr,n,key);
    
//     return 0;
// }