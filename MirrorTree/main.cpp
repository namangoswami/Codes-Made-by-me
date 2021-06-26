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

 list<int> s1, s2;

void explore(node *curr, list<int> &s, int flag)
{
    if(curr==NULL)
        return;
 cout << curr->val << endl;
     if(flag==1)
    explore(curr->left, s, flag);
 else
 explore(curr->right, s, flag);

    s.push_back(curr->val);
        if(flag!=1)
    explore(curr->left, s, flag);
 else
    explore(curr->right, s, flag);

    //return s;
}
void compare(node *root1, node *root2)
{
    explore(root1, s1, 1);
    explore(root2, s2, 0);
    if(s2.empty())
        cout << "En\n";
    if(s1==s2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
}
int main()
{

    root1=new node;
    ptr=root1;
    ptr->val=10;
    ptr->right=new node;
    ptr=ptr->right;
    ptr->val=2;
    ptr=root1;
    ptr->left=new node;
    ptr=ptr->left;
    ptr->val=16;
    ptr->left=new node;
    ptr->left->val=3;
    ptr->right=new node;
    ptr->right->val=15;

     root2=new node;
    ptr=root2;
    ptr->val=10;
    ptr->left=new node;
   ptr=ptr->left;
    ptr->val=2;
    ptr=root2;
    ptr->right=new node;
    ptr=ptr->right;
    ptr->val=16;
    ptr->right=new node;
    ptr->right->val=3;
    ptr->left=new node;
    ptr->left->val=15;
    compare(root1, root2);
}
