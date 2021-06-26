#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    int key;
    node* next=NULL;
};
node* head[1000];
int size;
void insertNode(int val,int key, node* temp)
{

//cout << key << "\n";
    if(temp==NULL)
    {
     //   cout << "NULL\n";
        head[key%10]=new node;
        temp=head[key%10];
        temp->val=val;
        temp->key=key;
        return;
    }
   // node *temp=hed.head;
   // int i=1;
    while(1)
    {
        cout << temp->val << "\n";

        if(temp->next==NULL)
        {
            temp->next=new node;
            temp->next->val=val;
            temp->next->key=key;
            break;
        }
        else
            temp=temp->next;
    }

}
int main()
{
   // int size;
    cout << "Enter Size\n";
    cin >> size;
    int ch, key, val;
    do
    {
        cout << "1.Insert\n2.Display\n3.Delete\n";
        cin >> ch;
        switch(ch)
        {
            case 1: cout << "Enter Key and Value\n";
                    cin >> key >> val;
                    insertNode(val,key, head[key%size]);
                    break;
            case 2: cout << "Enter The key and value";
        }
    }while(ch<=3);

}
