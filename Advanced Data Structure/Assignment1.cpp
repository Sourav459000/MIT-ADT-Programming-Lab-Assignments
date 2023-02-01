/*
	Construct a expression tree from postfix expression
	===================================================
	Functions:
		1.Create
		2.Inorder Traversal (Recursive)
		3.Preorder Traversal (Recursive)
		4.Postorder Traversal (Recursive)
		5.Inorder Traversal(N.Recursive)
		6.Preorder Traversal(N.Recursive)
		7.Postorder Traversal(N.Recursive)
_______________________________________________________
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 30
int isoperand(char ch)
{
    if((ch>='A'  && ch<='Z')||(ch>='a'  && ch<='z')||(ch>='0'  && ch<='9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isoperator(char ch)
{
	if(ch=='$'||ch=='^'||ch=='+'||ch=='-'||ch=='*'||ch=='/')
		return 1;
	else
		return 0;
}
struct Treenode
{
	Treenode *lchild;
	char data;
	Treenode *rchild;
};
class ET
{
	Treenode *root;
	public:
	    ET();
	    void create(char postfix[MAX]);
		void inorder();
		void inorder(Treenode *);
		void preorder();
		void preorder(Treenode *);
		void postorder();
		void postorder(Treenode *);
		void inorder_nrc();
		void preorder_nrc();
		void postorder_nrc();
};
ET::ET()
{
	root=NULL;
}
void ET::create(char prefix[MAX])
{
	Treenode *stack[MAX];
	int top=-1;
	int i,len,val;
	char ch;
	Treenode *temp;
	for(i=0;prefix[i]!='\0';i++);
	len=i-1;
	for(i=len;i>=0;i--)
	{
		ch=prefix[i];
		temp=new Treenode;
		temp->lchild=NULL;
		temp->data=ch;
		temp->rchild=NULL;
        if(isoperand(ch))
		{
			stack[++top]=temp;
		}
		else if(isoperator(ch))
		{
			temp->lchild=stack[top--];
			temp->rchild=stack[top--];
			stack[++top]=temp;
		}
		else
		{
			cout<<"\nWrong expression tree";
			cout<<"\nNode cannot be created";
			exit(0);
		}
	}
	root=stack[top--];
}
void ET::inorder()
{
	if(root)
		inorder(root);
	else
		cout<<"\nEmpty expression tree";
}
void ET::inorder(Treenode *root)
{
	if(root)
	{
		inorder(root->lchild);
		cout<<root->data<<" ";
		inorder(root->rchild);
	}
}
void ET::preorder()
{
	if(root)
		preorder(root);
	else
		cout<<"\nEmpty expression tree";
}
void ET::preorder(Treenode *root)
{
	if(root)
	{
		cout<<root->data<<" ";
		preorder(root->lchild);
		preorder(root->rchild);
	}
}
void ET::postorder()
{
	if(root)
		postorder(root);
	else
		cout<<"\nEmpty expression tree";
}
void ET::postorder(Treenode *root)
{
	if(root)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		cout<<root->data<<" ";
	}
}
void ET::inorder_nrc()
{
	Treenode *curr=root;
	Treenode *stack[MAX];
	int top=-1;
	while(1)
	{
		while(curr!=NULL)
		{
			stack[++top]=curr;
			curr=curr->lchild;
		}
		if(top!=-1)
		{
			curr=stack[top--];
			cout<<curr->data<<" ";
			curr=curr->rchild;
		}
		else
			break;
	}
}
void ET::preorder_nrc()
{
	Treenode *curr=root;
	Treenode *stack[MAX];
	int top=-1;
	while(1)
	{
		while(curr!=NULL)
		{
			cout<<curr->data<<" ";
			stack[++top]=curr;
			curr=curr->lchild;
		}
		if(top!=-1)
		{
			curr=stack[top--];

			curr=curr->rchild;
		}
		else
			break;
	}
}
void ET::postorder_nrc()
{
	Treenode *curr=root;
	Treenode *stack[MAX];
	int top=-1,flag[MAX],f;
	while(1)
	{
		if(curr!=NULL)
		{
			stack[++top]=curr;
			flag[top]=0;
			curr=curr->lchild;
		}
		else
        {
            	if(top!=-1)
                {
                    f=flag[top];
                    curr=stack[top--];
                    if(f==0)
                    {
                        stack[++top]=curr;
                        flag[top]=1;
                        curr=curr->rchild;
                    }
                    else if (f==1)
                    {
                        cout<<curr->data<<" ";
                        curr=NULL;
                    }
                }
                else
                    break;
        }

	}
}
int main()
{
	int ch;
	char prefix[MAX];
	ET e;
	cout<<"\nEnter a prefix expression";
	cin>>prefix;
	while(1)
	{
		cout<<"\n*********MENU*********";
		cout<<"\n1.Create a expression tree\n2.Inorder Traversal (Recursive)\n3.Preorder Traversal (Recursive)";
		cout<<"\n4.Postorder (Recursive)\n5.Inorder Traversal(Non Recursive)\n6.Preorder Traversal(Non Recursive)";
		cout<<"\n7.Post order Traversal(Non Recursive)\n8.Exit";
		cout<<"\nEnter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1: 
				e.create(prefix);
				cout<<"\nExpression Tree Created from Prefix Expression\n";
				break;
			case 2: 
				e.inorder();
				break;
			case 3: 
				e.preorder();
				break;
            case 4: 
				e.postorder();
				break;
			case 5: 
				e.inorder_nrc();
				break;
			case 6: 
				e.preorder_nrc();
				break;
            case 7: 
				e.postorder_nrc();
				break;
			case 8:
				exit(0);
			default:
				break;
		}
	}
}