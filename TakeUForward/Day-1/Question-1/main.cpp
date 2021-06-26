//Find the Duplicate in an array of N+1 integers
#include<bits/stdc++.h>

using namespace std;

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n;
    cin >> n;
    int ar[n+1];
    int sum=0, temp, maxv=1;
    for(int i=1;i<=n;i++)
    {
        ar[i]=0;
    }
    for(int i=0;i<=n;i++)
    {

        cin >> temp;
        ar[temp]++;
        if(ar[temp]>maxv)
        {
            sum=temp;
            maxv=ar[temp];
        }
    }
    cout << sum;
}
