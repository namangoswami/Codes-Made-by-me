#include<bits/stdc++.h>

using namespace std;

typedef long long int lol;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lol n, b;
   cin >> n;
   //cin >> b;
   cout << n << " " ;
   lol ar[n];
   for(lol i=0;i<n;i++)
   {
      cin >> ar[i];
   }
   sort(ar, ar+n);
   lol sum=0, k=1, bcount=1;
   for(lol i=1;i<n;i++)
   {

      if(ar[i]==ar[i-1]+1)
      {
         k++;
      }
      else if(ar[i]==ar[i-1])
      {
          cout << "UP ";
          bcount++;
      }
      else
      {
         if(k>1)
         {
            sum+=k*(k-1)*bcount;///2;
         }
         else
            sum+=k;
         k=1;
         bcount=1;
      }


       cout << ar[i] << " " << k << " " << sum << "\n";
   }
          if(k>1)
         {
            sum+=k*(k+1)*bcount/2;
         }
         else
            sum+=k;

   cout << sum;
}
