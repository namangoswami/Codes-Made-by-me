#include <iostream>

using namespace std;
int ternarysearch(int ar[], int l, int r, int x)
{
    cout << "Enter Fn\n";
    cout << "L: " << l << " R: " << r << endl;
    if(r>=1)
    {
        cout << "Enter if\n";

        int mid1=l+(r-l)/3;
        cout << "Mid1: " << mid1 << endl;
        int mid2=r-(r-l)/3;
        cout <<"Mid2: " << mid2 << endl;
        if(ar[mid1]==x)
        {
            return mid1;
        }
        if(ar[mid2]==x)
        {
            return mid2;
        }
        if(ar[mid1]>x)
        {

            return ternarysearch(ar, l, mid1-1, x);
        }
        else if(ar[mid2]<x)
        {
            cout << "Works!\n";
            return ternarysearch(ar, mid2+1, r, x);
        }
        else
            return ternarysearch(ar, mid1+1, mid2-1, x);
    }
    return -1;

}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    int q;
    cin >> q;
    cout << "Output: " << ternarysearch(ar, 0, n-1, q)+1;
    return 0;
}
