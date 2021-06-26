#include<iostream>
#include<map>

using namespace std;

class node
{
    public:
    int val;
    node *left=NULL;
    node *right=NULL;
};
node *root, *temp, *ptr, *ptr2;

void insertnode()
{
    temp=new node;
    cout << "Enter Value\n";
    cin >> temp->val;
    if(root==NULL)
    {
        root=temp;
        temp=NULL;
        return;
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
        return;
        }
    }
    if(temp->val>ptr->val)
    ptr->right=temp;
    else
    ptr->left=temp;
    temp=NULL;
    ptr=NULL;
}
void insertit(node *temp, node *ptr)
{
    if(temp->val>ptr->val)
    {
        if(ptr->right==NULL)
        ptr->right=temp;
        else
            insertit(temp, ptr->right);
    }
    else if(temp->val<ptr->val)
    {
        if(ptr->left==NULL)
        ptr->left=temp;
        else
            insertit(temp, ptr->left);
    }
    else
        cout << "Value Exists\n";
}
void insert2()
{
    temp=new node;
    cout << "Enter Val\n";
    cin >> temp->val;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    ptr=root;
    insertit(temp, ptr);
}
void searchnode()
{
    int val;
    cout << "Enter Value\n";
    cin >> val;
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
    void searchit(node *ptr, int val){
        if(val<ptr->val)
        {
            if(ptr->left==NULL)
                cout << "Value does not exist\n";
            else
            searchit(ptr->left, val);
        }
        else if(val>ptr->val)
        {
            if(ptr->right==NULL)
                cout << "Value does not exist\n";
            else
            searchit(ptr->right, val);
        }
        else
        cout << "Found: " << val << endl;
    }
    void search2(){
        int val;
        cout << "Enter Value\n";
        cin >> val;
        searchit(root, val);
    }
 void deletenode()
 {
     int val;
     cout << "Enter Val\n";
     cin >> val;
     temp=root;
     ptr2=root;
     while(temp!=NULL)
    {
       // cout << temp->val;
        if(temp->val > val)
        {
           // cout << "Left\n";
            temp=temp->left;
        }
        else if(temp->val<val)
        {
           // cout << "Right\n";
            temp=temp->right;
        }
        else
        {
            //cout << "Found: " << val << endl;
            break;
        }

    }
    if(temp==NULL)
    {
        cout << "Node does not exist\n";
        return;
    }
    int ch;
    if(temp->left==NULL&&temp->right==NULL)
        ch=1;
    else if(temp->left==NULL||temp->right==NULL)
        ch=2;
    else
        ch=3;
        ptr=temp;
    //ptr2=temp->right;
    temp=root;
    while(temp!=NULL)
    {
        //cout << temp->val;
        if(temp->val > val)
        {
           // cout << "Left\n";
             if(temp->left->val==val)
                break;
            temp=temp->left;
        }
        else if(temp->val<val)
        {
            if(temp->right->val==val)
                break;
            temp=temp->right;
        }
        else
        {
            //cout << "Found: " << val << endl;
            break;
        }
    }
    switch(ch)
    {
        case 1:
                      if(temp->val>val)
                  {
                       temp->left=NULL;
                     //    temp->left=ptr;
                     }
                     else
                     {
                     temp->right=NULL;
                            // temp->right=ptr;
                     }
                     delete ptr;
                     break;
    case 2:
                     if(temp->val>val)
                     {
                         if(ptr->left==NULL)
                             temp->left=ptr->right;
                         else
                             temp->left=ptr->left;
                     }
                     else{

                         if(ptr->left==NULL)
            temp->right=ptr->right;
        else
            temp->right=ptr->left;
    }
    break;
    case 3:
        ptr2=ptr->right;
        node *temp2=ptr;
        ptr=ptr->left;
        while(ptr->right!=NULL)
        {
            ptr=ptr->right;
        }
        ptr->right=ptr2;
        if(temp->val>val)
    {
        temp->left=temp2->left;
        //    temp->left=ptr;
    }
    else
    {
    temp->right=temp2->left;;
           // temp->right=ptr;
    }
    delete temp2;


    }
    }
void findpath()
{
    int val1, val2, c1=0, c2=0;
    cout << "Enter Node 1\n";
    cin >> val1;
    cout << "Enter Node 2\n";
    cin >> val2;
    map<int, bool> visited;
    temp=root;
    while(temp!=NULL)
    {
     if(temp->val>val1)
        {
            visited[temp->val]=true;
            c1++;
            temp=temp->left;
        }
        else if(temp->val<val1)

        {
            visited[temp->val]=true;
            c1++;
            temp=temp->right;
        }
        else //(temp->val==val1)
            {c1++;
                break;}
    }
    temp=root;
    while(temp!=NULL)
    {
        if(temp->val>val2)
        {
            if(visited[temp->val]==true)
                c1--;
            else
                c2++;
            temp=temp->left;
        }
        else if(temp->val<val2)
        {
            if(visited[temp->val]==true)
                c1--;
            else
                c2++;
            temp=temp->right;
        }
        else
        {
            c2++;
            break;
        }

    }
    cout << "Distance: " << c1+c2 << endl;
}
int main()
{
    int ch;
    do{
    cout << "1.Insert\n2.Search\n3.Delete\n4.Find Path\n";
    cin >> ch;
    switch(ch)
    {
        case 1: insert2();
                   break;
        case 2: search2();
                    break;
        case 3:deletenode();break;
        case 4: findpath();break;

    }
    }while(ch<=4);
}
