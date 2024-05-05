#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }

};
void insertattail(node* &head,int val)
{
    node*n=new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    
    
    node*temp=head;
    while(temp-> next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
node*reverse(node*&head, int k  )
{
    node*preptr=NULL;
    node*current=head;
    node*nextptr;
    int count=0;

    while(current!=NULL && count<k)
    {
        nextptr=current->next;
        current->next=preptr;
        preptr=current;
        current=nextptr;
        count++;

    }
}
int main()
{
    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    reverse(head,2);
    display(head);
    return 0;
}
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node*next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }

// };
// void insertattail(node* &head,int val)
// {
//     node*n=new node(val);
//     if (head==NULL)
//     {
//         head=n;
//         return;
//     }
    
    
//     node*temp=head;
//     while(temp-> next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;

// }
// void insertathead(node* &head,int val)
// {
//     node*n=new node(val);
//     n->next=head;
//     head=n;

// }

// void display(node*head)
// {
//     node*temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;

//     }
//     cout<<"NULL"<<endl;
// }
// bool scearch(node*head,int key)
// {
//     node*temp=head;
//     while(temp!=NULL)
//     {
//         if (temp->data==key)
//         {
//             return true;
          
//         }
//         temp=temp->next;
//         return false;
        
//     }
// }
// void deleteathaed(node*&head)
// {
//     node*todelete=head;
//     head=head->next;
//     delete todelete;
// }

// void deletetion(node* &head,int val)
// {
//     if (head==NULL)
//     {
//         return;
//     }
//     if (head->next==NULL)
//     {
//         deleteathaed(head);
//         return;

//     }
    
    
//     node*temp=head;
//     while(temp->next->data!=val)
//     {
//         temp=temp->next;

//     }
//     node*todelete=temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }


// int main()
// {
//     node*head=NULL;
//     insertattail(head,1);
//     insertattail(head,2);
//     insertattail(head,3);
//     insertattail(head,4);
//     insertathead(head,4);
//     display(head);
//     cout<<scearch(head,5)<<endl;
//     //deletetion(head,3);
//     deleteathaed(head);
//     display(head);
//    return 0;
// }