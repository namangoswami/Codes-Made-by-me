#include<iostream>
using namespace std;
int main()
{
int arr[6], f=0, pos;

for(int i=0; i<6; i++){

cout<<"enter the value ["<<i<<"] =";
cin>>arr[i];
}
cout<<"Enter the value to a position :";
cin>>pos;
int i=0;
for(; i<6; i++){

    if(pos==arr[i]){
        f++;
        break;

    }
}
if(f==1){
cout<<"position is :"<<i;
}
else { cout<< "there is no value !!";
}
}
