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
void explore(node *curr, int &flag)
{
    if(curr==NULL)
        return;
    explore(curr->left, flag);
    flag++;
    explore(curr->right, flag);

    //return s;
}node* insert(int val, node *root)
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
void compare(node* root)
{
    if(root==NULL)
    return;
    int ll=0;
    explore(root, ll);
    cout << ll;
}
int main()
{

/*    root1=new node;
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
*/
    root1=insert(10, root1);
    root1=insert(12, root1);
    root1=insert(3, root1);
    root1=insert(1, root1);
    root1=insert(6, root1);
    root1=insert(11, root1);
     root1=insert(16, root1);
     root1=insert(4, root1);
    // root1=insert(9, root1);
    //root1=insert(7, root1);
    //root1=insert(15, root1);
    //root1=insert(17, root1);
compare(root1);
    }
