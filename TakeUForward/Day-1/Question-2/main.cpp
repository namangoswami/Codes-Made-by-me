//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    int lo=0, mid=0, hi=n-1;
    while(mid<=hi)
    {
        switch(ar[mid])
        {
            case 0:swap(ar[lo++], ar[mid++]);break;
            case 1:mid++;break;
            case 2: swap(ar[mid], ar[hi--]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << ar[i] << " ";
    }
}
