//Merge 2 sorted Arrays
#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin >> n1;
    int ar1[n1];
    for(int i=0;i<n1;i++)
    {
        cin >> ar1[i];
    }
    int n2;
    cin >> n2;
    int ar2[n2];
    for(int i=0;i<n2;i++)
    {
        cin >> ar2[i];
    }
    int ptr1=0, ptr2=0, i=0;
    int ar3[n1+n2];
    while(i<n1+n2)
    {
    //    cout << ptr1 << " " << ptr2 << " " << i << "\n";
        if(ptr1>=n1)
        {
            ar3[i++]=ar2[ptr2++];
        }
        else if(ptr2>=n2)
        {
            ar3[i++]=ar1[ptr1++];
        }
        else if(ar1[ptr1]<ar2[ptr2])
        {
            ar3[i++]=ar1[ptr1++];
        }
        else
        {
            ar3[i++]=ar2[ptr2++];
        }
    }
    for(int j=0;j<(n1+n2);j++)
    {
        cout << ar3[j] << " ";
    }
}
