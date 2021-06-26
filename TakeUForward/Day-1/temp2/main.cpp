#include <iostream>

using namespace std;

typedef long long int lol;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int t, sum=0;
    for(int i=1;i<n;i++)
    {
        cin >> t;
        sum+=t;
    }
    cout << n*(n+1)/2-sum;
    return 0;
}
