#include <iostream>

using namespace std;

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
     int min=0;
     for(int i=0;i<size;i++)
     {
         min=i;
       //  cout << "i" << endl;
         for(int j=i;j<size;j++)
         {
             if(ar[j]<ar[min])
             {
              min=j;
             }
         //    cout << "j" << " ";
         }
         if(min!=i)
         {


            ar[i]=ar[i]+ar[min];
                 ar[min]=ar[i]-ar[min];
                 ar[i]=ar[i]-ar[min];

        // cout << endl;
     }}
      for(int i=0;i<size;i++)
     {
         cout << ar[i] << " ";
     }

}
