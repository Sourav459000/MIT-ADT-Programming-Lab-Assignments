/*A Dictionary stores keywords & its meanings. Provide facility for adding new 
keywords, deleting keywords, updating values of any entry. Provide a facility 
to display whole data sorted in ascending/ Descending order. Also, find how many
maximum comparisons may require for finding any keyword. Use Binary Search Tree 
for implementation */

#include <iostream>
#include<string>
using namespace std;
class dictionary;
class node
{
  string word,meaning;
  node *left,*right;
  public:
    friend class dictionary;
    node()
    {
      left = NULL;
      right = NULL;
    }
    node(string word, string meaning)
    {
      this -> word = word;
      this -> meaning = meaning;
      left = NULL;
      right = NULL;
    }
};
class dictionary
{
  node *root;
  public:
  dictionary()
  {
    root = NULL;
  }
  void create();
  void inorder_rec(node *rnode);
  void postorder_rec(node *rnode);
  void inorder()
  {
    inorder_rec(root);
  }
  void postorder();
  bool insert(string word,string meaning);
  int search(string key);
};
int dictionary::search(string key)
{
  node *tmp = root;
  int count;
  if(tmp == NULL)
  {
    return -1;
  }
  if(root -> word == key)
    return 1;
  while(tmp != NULL)
  {
    if((tmp -> word) > key)
    {
    tmp = tmp -> left;
    count++;
    }
    else if((tmp -> word) < key)
    {
    tmp = tmp -> right;
    count++;
    }
    else if(tmp -> word == key)
    {
    return ++count;
    }
  }
  return -1;
}
void dictionary::postorder()
{
  postorder_rec(root);
}
void dictionary::postorder_rec(node *rnode)
{
 if(rnode)
 {
   postorder_rec(rnode -> right);
   cout<<" "<<rnode->word<<" : "<<rnode->meaning<<endl;
   postorder_rec(rnode->left);
 }
}
void dictionary::create()
{
  int n;
  string wordI,meaningI;
  cout<<"\nHow many Word to insert?:\n";
  cin>>n;
  if (n < 1)
  {
    cout<<"You don't want to enter any word. Hence, exiting.";
    exit(0);
  }
  else
  {
    for(int i=0;i<n;i++)
    {
    cout<<"\nEnter Word: ";
    cin>>wordI;
    cout<<"Enter Meaning: \n";
    cin>>meaningI;
    insert(wordI,meaningI);
    } 
  }
}
void dictionary::inorder_rec(node *rnode)
{
  if(rnode)
  {
    inorder_rec(rnode -> left);
    cout<<" "<<rnode -> word<<" : "<<rnode -> meaning<<endl;
    inorder_rec(rnode -> right);
  }
}
bool dictionary::insert(string word, string meaning)
{
  node *p = new node(word, meaning);
  if(root == NULL)
  {
    root=p;
    return true;
  }
  node *cur = root;
  node *par = root;
  while(cur != NULL)
  {
    if(word > cur -> word)
    {
      par = cur;
      cur = cur -> right;
    }
    else if(word < cur -> word)
    {
      par = cur;
      cur = cur -> left;
    }
    else
    {
      cout<<"\nWord is already in the dictionary.\n";
      return false;
    }
  }
  if(word > par -> word)
  {
    par -> right = p;
    return true;
  }
  else
  {
    par -> left = p;
    return true;
  }
}
int main() 
{
  string word;
  dictionary dict;
  dict.create();
  cout<<"\nAscending order\n";
  dict.inorder();
  cout<<"\nDescending order:\n";
  dict.postorder();
  cout<<"\nEnter word to search: ";
  cin>>word;
  int comparisons = dict.search(word);
  if(comparisons == -1)
  {
    cout<<"\nNot found word";
  }
  else
  {
    cout<<"\n"<<word<<" found in "<<comparisons<<" comparisons";
  }
  return 0;
}
