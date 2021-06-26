#include<bits/stdc++.h>

using namespace std;

void push(int ar[], int &ptr, int n, int val)
{
    if(ptr>=n-1)
        {
            cout << "OverFlow\n";
            return;
        }
    ar[++ptr]=val;
}
void disp(int ar[], int ptr)
{
    if(ptr==-1)
    {
        cout << "Empty Stack\n";
        return;
    }
    cout << "Stack:-";
    for(int i=ptr;i>=0;i--)
    {

        cout << ar[i] << " " << "\n";
    }
}
void pop(int ar[], int &ptr)
{
    if(ptr<0)
    {
        cout << "Underflow\n";
        return;
    }
    cout << "Removed: " << ar[ptr] << endl;
    ptr--;
    disp(ar, ptr);
}

int main()
{

    int n=10;
    int ar[n];
    int ptr=-1, val;
    int ch;
    do{
        cout << "1.Push\n2.Pop\n3.Display\n";
        cin >> ch;
        switch(ch)
        {

            case 1:cout << "Enter Value\n";
                   cin >> val;
                   push(ar, ptr, n, val);break;
            case 2:pop(ar, ptr);break;
            case 3: disp(ar, ptr);break;
        }
    }while(ch<=3);
    return 0;
}
