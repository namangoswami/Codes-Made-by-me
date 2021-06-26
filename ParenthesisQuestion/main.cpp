#include <iostream>

using namespace std;

int main()
{
  string ar;
  cin >> ar;
  int count1=0;
  for(int i=0;i<ar.length();i++)
  {
      if(ar[i]=='(')
            count1++;
      else if(ar[i]==')')
        count1--;

  }
  if(count1!=0)
    cout << "Ineligible\n";
  else
    cout << "Eligible\n";
}
