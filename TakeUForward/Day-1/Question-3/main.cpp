//Missing and Repeated
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    int sum=n*(n+1)/2, sqsum=n*(n+1)*(2*n+1)/6;
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
        sum-=ar[i];
        sqsum-=(ar[i]*ar[i]);
    }
    sqsum=sqsum/sum;
    int x, y;
    x=(sqsum+sum)/2;
    y=x-sum;
    cout << "Missing: " << x << " Repeated: " << y;
}
