#include <iostream>

using namespace std;

class node
{
    public:
    int val;
    node *next=NULL;
};
node *front1, *end1, *temp, *ptr;
 void insertnode()
 {
     cout << "Enter Value\n";
     temp=new node;
     cin >> temp->val;
     if(end1==NULL)
     {
         front1=temp;
         end1=temp;
     }
     else if(front1->val>temp->val)
     {
         temp->next=front1;
         front1=temp;
         goto funcend;
     }
     else{
        ptr=front1;
        while(ptr->next!=NULL)
        {
            if(ptr->next==NULL)
                break;
                if(ptr->next->val>=temp->val)
                    break;
                else
            ptr=ptr->next;

        }

        if(ptr==end1)
        {
            end1=temp;
        }
        temp->next=ptr->next;
        ptr->next=temp;

     }
     funcend:
     temp=NULL;

 }
 int removenode()
 {
     if(front1==NULL)
     {
         return -1;
     }
     if(front1==end1)
     {
         delete end1;
         front1=NULL;
         end1=NULL;
         return 1;

     }
     temp=front1;
     front1=front1->next;
     delete temp;
     return 1;
 }
 void showall()
 {
     temp=front1;
     if(temp==NULL)
        cout << "Empty Queue";
     else
     while(temp!=NULL)
     {
         cout << temp->val << " " ;
         temp=temp->next;
     }
     cout << endl;
 }
int main()
{
    int ch;
    do{
    cout << "1.Insert\n2.Delete\n3.ShowALL\n";
    cin >> ch;
    switch(ch)
    {
        case 1: insertnode();
                   break;
        case 2: if(removenode()==1)
                    cout << "Success\n";
                    else
                        cout << "Underflow\n";
                      break;
        case 3: showall();break;

    }
    }while(ch<=3);
}
