
#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;


int main()
{
	fastio;
	for(int i=0;i<7;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout << " ";
        }
        for(int j=i+1;j<=7;j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    for(int i=6;i>0;i--)
    {
        for(int k=1;k<i;k++)
        {
            cout << " ";
        }
        for(int j=i;j<=7;j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
