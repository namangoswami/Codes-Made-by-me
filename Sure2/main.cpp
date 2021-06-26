#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

void solve()
{

}

int main()
{
	fastio;
	for(int i=0;i<=5;i++)
    {
        for(int k=i;k<5;k++)
        {
            cout << "  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=5;i>0;i--)
    {

        for(int k=i;k<=5;k++)
        {
            cout << "  ";
        }
        for(int j=0;j<i;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
