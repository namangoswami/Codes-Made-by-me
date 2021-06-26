#include <bits/stdc++.h>

using namespace std;
class stair
{
public:
    int num;
    list<int> visited;
    stair(int num2, list<int> visited2)
    {
        num=num2;
        visited.merge(visited2);
        visited.push_back(num);
    }
};

int main()
{
  stack<stair> stairstack;
  int step;
  cout << "Enter Size\n";
  cin >> step;
  list<int> namee;
  stair s(0, namee);
  //namee.push_back(0);
  stairstack.push(s);
  while(!stairstack.empty())
  {
      stair current = stairstack.top();
      stairstack.pop();
      if(current.num==step)
      {
          for(auto i:current.visited)
          {
              cout << i << " ";
          }
          cout << endl;
          continue;
      }
      int numone=current.num+1;
      if(numone<=step)
      {
         stair s2(numone, current.visited);
          stairstack.push(s2);
      }
      int numtwo =current.num+2;
      if(numtwo<=step)
      {
         stair s2(numtwo, current.visited);
          stairstack.push(s2);
      }
  }
  return 0;
}
