#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, q=0;
    cin >> t;
    while(t--){
        q++;
        int n, p;
        cin >> n >> p;
        int ar[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            sum+=ar[i];
        }
        sort(ar, ar+n);
        int noh, minh=INT_MAX;
        for(int i=n-1;i>=p-1;i--)
        {
            cout << ar[i] << endl;
            noh=0;
            for(int j=i-1, jj=0;jj<p;j--, jj++)
            {
                cout << ar[j] << " ";

                noh+=(ar[i]-ar[j]);
            }

            minh=min(minh, noh);
               cout << minh << endl;
        }
        cout <<"Case #" << q << ": " <<  noh << "\n";
    }
    return 0;
}
