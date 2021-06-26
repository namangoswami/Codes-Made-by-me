#include<bits/stdc++.h>

using namespace std;

class naman
{
public:
    int size;
    vector<vector<int>> mat;
    naman()
    {
        cout << "Enter Size\n";
        cin >> size;
        cout << "Enter The Matrix\n";
        for(int i=0;i<size;i++)
        {

            vector<int> temp(size);
            for(int j=0;j<size;j++)
            {
                cin >> temp[j];
            }
            mat.push_back(temp);
        }
    }
};

int determinant(naman a, int tempsize, int i, int j)
{
    if(tempsize==2)
    {
        if(i+1<a.size)
        return a.mat[i][j]*a.mat[i+1][j+1]-a.mat[i+1][j]*a.mat[i][j+1];
        else
        {
        cout << "LOOP!\n";
        return -a.mat[i][j]*a.mat[0][j+1]+a.mat[0][j]*a.mat[i][j+1];
        }
    }
    else
    {
        int c=0, sum=0;
        for(int k=i;c<tempsize;c++)
        {
           // cout << k << "\n";

            if(k==a.size)
                k=0;
            int v;
            if(k<a.size-1)
            v=determinant(a, tempsize-1, k+1, j+1);
            else
            v=determinant(a, tempsize-1, 0, j+1);
            if(c%2!=0)
                v*=-1;
                cout << v << " * " << a.mat[k][j] <<  "\n";
            sum+=v*a.mat[k++][j];
        }
        return sum;
    }

}

int main()
{
    cout << "Create a new matrix\n";
    naman a;
    cout << determinant(a, a.size, 0, 0);

}
