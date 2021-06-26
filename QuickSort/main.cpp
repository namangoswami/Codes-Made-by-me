#include <iostream>

using namespace std;
void qsort(int low, int high,  int ar[])
{
    if(low>=high)
        return;
    cout << "N\n";
    int mid=low+(high-low)/2;
    int pivot =ar[mid];
    int i=low;
    int j=high;
    while(i<=j)
    {
        while(ar[i]<pivot)
        {
            i++;
        }
        while(ar[j]>pivot)
        {
            j--;
        }

        if(i<=j)
        {
            cout << "Swapping: " << ar[i] << " with " << ar[j] << endl;
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
            i++;
            j--;
        }
    }
    if(low<j)
    {
        qsort(low, j, ar);
    }
    if(high>i)
    {
        qsort(i, high, ar);
    }

}

int main()
{
    int size;
    cout << "Enter Size\n";
    cin >> size;
     int ar[size];
     cout << "Enter Unsorted Value\n";
     for(int i=0;i<size;i++)
     {
         cin >> ar[i];
     }

     qsort(0, size-1, ar);
     for(int i=0;i<size;i++)
     {
        cout << ar[i] << " ";
     }
     return 0;
}
