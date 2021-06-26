#include <iostream>

using namespace std;
void merge(int ar[], int low, int high)
{
    if(high<=low)
        return;
    int mid=low+(high-low)/2;
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1], r[n2];
   for(int i=0;i<n1;i++)
    l[i]=ar[i+low];
   for(int i=0;i<n2;i++)
    r[i]=ar[i+mid+1];
    int i=0, j=0;
    int k=low;
    cout << "IN LOOP: " << "Size n1:  " << n1 << " Size n2: " << n2 << endl;
    while(i<n1&&j<n2)
    {
        if(l[i]<r[j])
        {

            cout << "Input: " << l[i] << endl;
            ar[k]=l[i];
            k++;
            i++;

        }
        else
        {

            cout << "Input: " << r[j] << endl;
            ar[k]=r[j];
            k++;
            j++;
        }

    }
    if(i<n1)
    {
        while(i<n1)
        {
            ar[k]=l[i];
            i++;
            k++;
        }
    }
    else if(j<n2)
    {
        while(j<n2)
        {
            ar[k]=r[j];
            j++;
            k++;
        }
    }
}

void mergesort(int ar[], int low, int high)
{
    if(low>=high)
        return;
    cout << "Sorting With index: " << low+1 << " " << high+1 << endl;
    int mid=low+(high-low)/2;
    mergesort(ar, low, mid);
    mergesort(ar, mid+1, high);
    merge(ar, low, high);
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

     mergesort(ar, 0, size-1);
     for(int i=0;i<size;i++)
     {
        cout << ar[i] << " ";
     }
     return 0;
}
