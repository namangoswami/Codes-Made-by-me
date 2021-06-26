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
//int ibc=1;
void explore(node *curr, list<int> &s)
{
//    cout << "Exploring: " << ibc++;
    if(curr==NULL)
        return;
    explore(curr->left, s);

    s.push_back(curr->val);
    explore(curr->right, s);
    //return s;
}
void compare(node *root1, node *root2)
{
    cout << "Comparing\n";
    explore(root1, s1);
    explore(root2, s2);
    if(s2.empty())
        cout << "En\n";

    if(s1==s2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
}
void serialize(node *curr, list<int> &listofnodes)
{
    if(curr==NULL)
    {

       listofnodes.push_back(INT_MIN);
       return;
       }
    listofnodes.push_back(curr->val);
    serialize(curr->left, listofnodes);
    serialize(curr->right, listofnodes);

}
list<int>::iterator i;
node* deserializeit(list<int> listofnodes, node *curr)
{
 //   cout << *i << endl;
    //cout << "Ent\n";
    if(i==listofnodes.end())
    return curr;
    else if(*i==INT_MIN)
    {
        curr=NULL;
    //    cout << "NULL\n";
        return curr;
    }
    curr= new node;
    curr->val=*i;
  //  cout << *i << endl;
    i++;
    curr->left=deserializeit(listofnodes, curr->left);
    i++;
    curr->right=deserializeit(listofnodes, curr->right);
    return curr;
}
node* deserialize(list<int> listofnodes, node *root)
{
    i=listofnodes.begin();
    root=deserializeit(listofnodes, root);
    cout << "Done\n";
    return root;

}
int main()
{
    root1=insert(10, root1);
     root1=insert(6, root1);
     root1=insert(16, root1);
     root1=insert(20, root1);
     root1=insert(14, root1);
    root1=insert(11, root1);
    root1=insert(15, root1);
   // searchnode(4, root2);
   list<int> listofnodes;
    serialize(root1, listofnodes);
    for(list<int>::iterator i =listofnodes.begin();i!=listofnodes.end();i++)
    {
        if(*i!=INT_MIN)
            cout << *i << " ";
        else
            cout << "n ";
    }
    cout << "\nAfter Serialization\n";
    root2=deserialize(listofnodes, root2);
    searchnode(20, root2);
    compare(root1, root2);
    return 0;
}
