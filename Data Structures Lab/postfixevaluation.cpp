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
    if(top< SIZE-1)
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