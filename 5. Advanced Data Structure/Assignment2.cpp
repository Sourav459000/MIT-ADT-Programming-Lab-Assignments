#include<iostream>
#include<cstring>
using namespace std;

typedef struct node
{
    char k[20];
    char m[20];
    struct node *left, *right;
    
}Node;


class dict
{
    public:
        Node *root;
        void create();
        void display_asc(Node *);
        void display_des(Node *);
        void insert(Node *root, Node *temp);
        int search(Node *, char[]);
        int update(Node *, char[]);
        Node *del(Node *, char[]);
        Node *min(Node *);
};

void dict :: create()
{
    Node *temp;
    int ch;

    do
    {
        temp = new Node;
        cout << "\nEnter Keyword:";
        cin >> temp->k;
        cout << "\nEnter Meaning:";
        cin >> temp->m;

        temp->left = NULL;
        temp->right = NULL;

        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            insert(root, temp);
        }
        cout << "\nDo u want to add more (yes = 1/no = 0):";
        cin >> ch;
    } while (ch == 1);
}


void dict :: insert(node *root, node *temp)
{
    if (strcmp(temp->k, root->k) < 0)
    {
        if (root->left == NULL)
            root->left = temp;
        else
            insert(root->left, temp);
    }
    else
    {
        if (root->right == NULL)
            root->right = temp;
        else
            insert(root->right, temp);
    }
}

void dict :: display_asc(Node *root)
{
    if (root != NULL)
    {
        display_asc(root->left);
        cout << "\n Key Word :" << root->k;
        cout << "\t Meaning :" << root->m <<endl;
        display_asc(root->right);
    }
}

void dict :: display_des(Node *root)
{
    if (root != NULL)
    {
        display_des(root->right);
        cout << "\n Key Word :" << root->k;
        cout << "\t Meaning :" << root->m <<endl;
        display_des(root->left);
    }
}


int dict ::search(node *root, char k[20])
{
    int c = 0;
    while (root != NULL)
    {
        c++;
        if (strcmp(k, root->k) == 0)
        {
            cout << "\nNo of Comparisons :" << c;
            return 1;
        }
        if (strcmp(k, root->k) < 0)
            root = root->left;
        if (strcmp(k, root->k) > 0)
            root = root->right;
    }

    return -1;
}

int dict ::update(Node *root, char k[20])
{
    while (root != NULL)
    {
        if (strcmp(k, root->k) == 0)
        {
            cout << "\nEnter New Meaning of Keyword " << root->k<<" : ";
            cin >> root->m;
            return 1;
        }
        if (strcmp(k, root->k) < 0)
            root = root->left;
        if (strcmp(k, root->k) > 0)
            root = root->right;
    }
    return -1;
}

Node *dict ::del(Node *root, char k[20])
{
    Node *temp;

    if (root == NULL)
    {
        cout << "\nElement Not Found";
        return root;
    }

    if (strcmp(k, root->k) < 0)
    {
        root->left = del(root->left, k);
        return root;
    }
    if (strcmp(k, root->k) > 0)
    {
        root->right = del(root->right, k);
        return root;
    }

    if (root->right == NULL && root->left == NULL)
    {
        temp = root;
        delete temp;
        return NULL;
    }
    if (root->right == NULL)
    {
        temp = root;
        root = root->left;
        delete temp;
        return root;
    }
    else if (root->left == NULL)
    {
        temp = root;
        root = root->right;
        delete temp;
        return root;
    }
    temp = min(root->right);
    strcpy(root->k, temp->k);
    root->right = del(root->right, temp->k);
    return root;
}

Node *dict ::min(Node *q)
{
    while (q->left != NULL)
    {
        q = q->left;
    }
    return q;
}

int main()
{
    int ch;
    dict d;
    d.root = NULL;

    while(true)
    {
        cout << "\nMenu \n1.Create \n2.Display ascending/descending \n3.Search \n4.Update \n5.Delete \n6.Exit \nEnter your choice:";
        cin >> ch;

        switch (ch)
        {
            case 1:
                d.create();
                break;

            case 2:
                if (d.root == NULL)
                {
                    cout << "\nNo Keyword in the dictionary";
                }
                else
                {
                    int ord;
                    cout<<"\n1 - Ascending \n2 - Descending \nEnter choice for displaying:";
                    cin>>ord;
                    if(ord==1)
                    {
                        d.display_asc(d.root);

                    }
                    else{
                        d.display_des(d.root);

                    }
                    
                }
                break;


            case 3:
                if (d.root == NULL)
                {
                    cout << "\nDictionary is Empty. First add keywords then try again ";
                }
                else
                {
                    char k[20];
                    cout << "\nEnter Keyword which you want to search:";
                    cin >> k;

                    if (d.search(d.root, k) == 1)
                        cout << "\nKeyword Found";
                    else
                        cout << "\nKeyword Not Found";
                }
                break;


            case 4:
                if (d.root == NULL)
                {
                    cout << "\nDictionary is Empty. First add keywords then try again ";
                }
                else
                {
                    char k[20];
                    cout << "\nEnter Keyword whose meaning you want to update:";
                    cin >> k;
                    if (d.update(d.root, k) == 1)
                        cout << "\nMeaning Updated";
                    else
                        cout << "\nMeaning Not Found";
                }
                break;


            case 5:
                if (d.root == NULL)
                {
                    cout << "\nDictionary is Empty. First add keywords then try again ";
                }
                else
                {
                    cout << "\nEnter Keyword which you want to delete:";
                    char k[20];
                    cin >> k;
                    if (d.root == NULL)
                    {
                        cout << "\nKeyword is not present in the dictionary ";
                    }
                    else
                    {
                        d.root = d.del(d.root, k);
                        cout<<"\nKeyword is deleted";
                    }
                }
                break;

            case 6:
                exit(1);
                break;

            default:
                cout<<"Oops!... Invalid choice"<<endl;
                break;
        }
    } 
    return 0;
}