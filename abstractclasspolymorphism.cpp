#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{

   protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache: public Cache
{
    public:
    int counter=0;
    LRUCache(int c)
    {
        cp=c;
    }
    int get(int key)
    {
        if(mp[key]!=NULL)
        return mp[key]->value;
        else
        return -1;
    }
    void set(int key, int value)
    {
        if(counter==0)
        {
            counter++;
            Node *temp=new Node(key, value);
            mp[key]=temp;
            head=temp;
            tail=temp;
            return;
        }
       if(mp[key]!=NULL)
       {
           Node *temp=mp[key];
           if(head==temp)
           return;
           if(tail==temp)
           {
              Node *ptr=temp->prev;
              tail=ptr;
              ptr->next=NULL;
              head->prev=temp;
              temp->next=head;
              head=temp;
              return;
               }
           Node *ptr=temp->prev;
           Node *ptr2=temp->next;
           ptr->next=ptr2;
           ptr2->prev=ptr;
           head->prev=temp;
           temp->next=head;
           head=temp;//}
           return;
       }

      counter++;
      Node *temp=new Node(key, value);
      head->prev=temp;
      temp->next=head;
      head=temp;
      mp[key]=temp;
       if(counter>cp)
       {
        Node *ptr=tail;
        //tail->prev->next=NULL;
        mp[tail->key]=NULL;
        tail=tail->prev;
        tail->next=NULL;
        delete ptr;
       }


    }

};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
