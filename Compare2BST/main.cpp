#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int val;
    node *left=NULL;
    node *right=NULL;
};
node *root1, *root2, *ptr, *temp, *ptr2;
void searchnode(int val, node* root)
{
    //int val;
    //cout << "Enter Value\n";
    //cin >> val;
    temp=root;
    if(temp==NULL)
    {
        cout << "Empty Tree\n";
        return;
    }
    while(temp!=NULL)
    {
        cout << temp->val;
        if(temp->val > val)
        {
            cout << "Left\n";
            temp=temp->left;
        }
        else if(temp->val<val)
        {
            cout << "Right\n";
            temp=temp->right;
        }
        else
        {
            cout << "Found: " << val << endl;
            break;
        }

    }}

node* insert(int val, node *root)
{
    temp=new node;
  //  cout << "Enter Value\n";
    //cin >> temp->val;
    temp->val=val;
    if(root==NULL)
    {
      //  cout << "Empty Tree Now adding " << val << endl;
        root=temp;
        temp=NULL;
        return root;
    }
    ptr=root;
    ptr2=root;
    while(ptr2!=NULL)
    {
        ptr=ptr2;
        if(temp->val<ptr->val)
            ptr2=ptr->left;
        else if(temp->val>ptr->val)
            ptr2=ptr->right;
        else
       {

        cout << "Val Exists\n";
        return root;
        }
    }
    if(temp->val>ptr->val)
    ptr->right=temp;
    else
    ptr->left=temp;
    temp=NULL;
    ptr=NULL;
    return root;
}
 list<int> s1, s2;

void explore(node *curr, list<int> &s)
{
    if(curr==NULL)
        return;
    explore(curr->left, s);

    s.push_back(curr->val);
    explore(curr->right, s);
    //return s;
}
void compare(node *root1, node *root2)
{
    explore(root1, s1);
    explore(root2, s2);
    if(s1.empty())
        cout << "En\n";
    if(s1==s2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
}
int main()
{
    root1=insert(4, root1);
     root1=insert(3, root1);
     root1=insert(6, root1);
     root2=insert(3, root2);
    root2=insert(4, root2);
    root2=insert(9, root2);
   // searchnode(4, root2);
    compare(root1, root2);
    return 0;
}
