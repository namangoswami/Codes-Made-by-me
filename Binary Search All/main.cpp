#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    node *left=NULL;
    node *right=NULL;
    node *parent=NULL;
};
node *root, *temp, *ptr;
void insertNode(int val)
{
    if(root==NULL)
    {
        root=new node;
        root->val=val;
        return;
    }
    ptr=root;
    while(1)
    {
        if(ptr->val>val)
        {
            if(ptr->left==NULL)
            {
                ptr->left=new node;
                ptr->left->val=val;
                ptr->left->parent=ptr;
                return;
            }
            else
            {
                ptr=ptr->left;
            }
        }
        else if(ptr->val<val)
        {
            if(ptr->right==NULL)
            {
                ptr->right=new node;
                ptr->right->val=val;
                ptr->right->parent=ptr;
                return;
            }
            else
            {
                ptr=ptr->right;
            }
        }
        else
        {
            cout << "Value Already Exists!\n";
            return;
        }
    }

}
int searchNode(node *temp, int val)
{
    if(temp->val>val)
    {
        if(temp->left!=NULL)
        {
            return searchNode(temp->left, val);
        }
        else
        {
            return -1;
        }
    }
    else if(temp->val<val)
    {
        if(temp->right!=NULL)
        {
            return searchNode(temp->right, val);
        }
        else
        return -1;
    }
    else
    {
        return 1;
    }
}
void displayall()
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int v=q.size();
    while(v--)
    {
        temp=q.front();
        cout << temp->val << " ";
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        q.pop();
    }
    cout << "\n";

    }
}
void dispPreOrder(node *temp)
{
    if(temp==NULL)
        return;
    dispPreOrder(temp->left);
    cout << temp->val << " ";
    dispPreOrder(temp->right);
}

void dispInOrder(node *temp)
{
    if(temp==NULL)
        return;
    cout << temp->val << " ";
    dispInOrder(temp->left);
    dispInOrder(temp->right);
}

void dispPostOrder(node *temp)
{
    if(temp==NULL)
        return;
    dispPostOrder(temp->left);
    dispPostOrder(temp->right);
    cout << temp->val << " ";
}
void deleteAll(node *temp)
{
    if(temp==NULL)
        return;
    deleteAll(temp->left);
    deleteAll(temp->right);
    if(temp->parent!=NULL)
    {
        delete temp;
    }
    else
    {
        root=NULL;
        delete temp;
    }
}
int main()
{
   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int ch, tempVal;
    do{
     //       system("clear");
        cout << "Enter Your Choice\n1. Insert\n2. Row wise Display\n3. Search\n4. Pre-Order Traversal Display\n5. In-Order Traversal Display\n6. Post-Order Traversal Display\n7. Delete All\n";
        cin >> ch;
        switch(ch)
        {
            case 1: cout << "Enter Value to Insert\n";
                    cin >> tempVal;
                    insertNode(tempVal);
                    break;
            case 2: displayall();break;
            case 3: cout << "Enter Value to be searched\n";
                    cin >> tempVal;
                    if(searchNode(root, tempVal)==1)
                        cout << "Exists\n";
                    else
                        cout << "Does Not Exist\n";
                    break;
            case 4: dispPreOrder(root);
                    break;
            case 5: dispInOrder(root);
                    break;
            case 6: dispPostOrder(root);
                    break;
            case 7: deleteAll(root);break;
        }
    }while(ch<=7);
}
