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
     for(int i=0;i<size;i++)
     {
         cout << "i" << endl;
         for(int j=0;j<size-(i+1);j++)
         {
             if(ar[j]>ar[j+1])
             {
                 ar[j]=ar[j]+ar[j+1];
                 ar[j+1]=ar[j]-ar[j+1];
                 ar[j]=ar[j]-ar[j+1];

             }
             cout << "j" << " ";
         }
         cout << endl;
     }
      for(int i=0;i<size;i++)
     {
         cout << ar[i] << " ";
     }

}
