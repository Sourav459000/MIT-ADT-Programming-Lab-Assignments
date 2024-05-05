// #include <iostream>
// #include <stack>
// using namespace std;

// bool Operator(char);  
// bool Operand(char);  
// int precedence(char);
// bool equalOrhigher(char, char);  
// string convert(string);  

// int main()
// {
//     string infix, postfix;
//     int option;

//     do
//     {
//         cout<<"Enter Infix expression: "<<endl;
//         cin >> infix;

//         postfix=convert(infix);
//         cout<<"Infix Expression is : "<<infix<<endl;
//         cout<<"Postfix Expression obtained is : "<<postfix<<endl;

//         cout<<"Do you want to enter another infix expression(1/0)?";
//         cin>>option;
//     } while (option==1);
//         return 0;
// }
// bool Operator(char x)
// {
//     if(x=='+'|| x=='-'|| x=='*'|| x=='/'|| x=='$')
//     return true;
//   return false;
// }

// bool Operand(char x1)
// {
//     if(x1>='A' && x1<='Z')
//     return true;
//     if(x1>='a' && x1<='z')
//     return true;
//     if(x1>='0' && x1>='9')
//     return true;
// }

// int precedence(char o)
// {
//     if(o=='+' || o=='-')
//     return 1;
//     if(o=='*' || o=='-')
//     return 2;
//     if(o=='$')
//     return 3;
//     return 0;
// }

// bool equalOrhigher(char o1, char o2)
// {
//     int p1= precedence(o1);
//     int p2= precedence(o2);
//     if(p1==p2)
//     {
//         if(p1=='$')
//         return false;
//         return true;
//     }
//     return (p1>p2?true:false);
// }
// string convert(string infix)
// {
//     int i = 0;
//     string postfix = "";
//     stack <int>s;

//     while(infix[i]!='\0')
//     {
//         if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
//         {
//             postfix += infix[i];
//             i++;
//         }

//         else if(infix[i]=='(')
//         {
//             s.push(infix[i]);
//             i++;
//         }
//         else if(infix[i]==')')
//         {
//             while(s.top()!='(')
//             {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop();
//             i++;
//         }
//         else            
//         {
//             while (!s.empty() && precedence(infix[i]) <= precedence(s.top())){
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(infix[i]);
//             i++;
//         }
//     }
//     while(!s.empty())
//     {
//         postfix += s.top();
//         s.pop();
//     }
//     return postfix;
// }
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

#define SIZE 40

int pop();
void push(int);
char postfix[SIZE];
int stack1[SIZE], top = -1;
int main()
{
    int i,a,b,result,pEval;
    char ch;
    for(i=0;i<SIZE;i++)
    {
        stack1[i]=-1;
    }
    cout<<"\nEnter a postfix expression:"<<endl;
    cin>>postfix;

    for(i=0;postfix[i]!='\0';i++)
    {
        ch = postfix[i];
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='$' )
        {
            b = pop();
            a = pop();
            switch(ch)
            {
                case '+':
                    result = a+b;
                    break;
                case '-':
                    result = a-b;
                    break;
                case '*':
                    result = a*b;
                    break;
                case '/':
                    result = a/b;
                    break;
                case '$':
                    result = pow(a,b);
                    break;

            }
            push(result);
        }
    }
    pEval = pop();
    cout<<"\nThe postfix evaluation is: "<<pEval<<endl;
    return 0;
}
void push(int n)
{
    if(top < SIZE-1)
    {
        stack1[++top]=n;
    }
    else
    {
        cout<<"Stack is full!\n"<<endl;
        exit(-1);
    }
}
int pop()
{
    int n;
    if(top>-1)
    {
        n=stack1[top];
        stack1[top--]=-1;
        return n;
    }
    else
    {
        cout<<"\nStack is empty"<<endl;
        exit(-1);
    }
}