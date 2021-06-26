#include<iostream>
#include<cstring>
using namespace std;

class student{
private:
    int long long add;
    string name;
    float marks;
    char grade;
    void grademe(){
if(marks>=80){
    grade='A';
}
else if(marks>=65 && marks<80){
    grade='B';
}
else if(marks>=50 && marks<65){
    grade='C';
}

else {
    grade='D';
}
}

public:

void enter(){
cout<<"ADDMISSION NO. : ";
    cin>>add;
cout<<"\nNAME: ";
//gets(name);
    cin>>name;
cout<<"MARKS: ";
    cin>>marks;
grademe();
}

void result(){
    cout<<"\n\nRESULTS ARE HERE : -\n\n";
    cout<<"ANo. :"<<add;
    cout<<"\nNAME : "<<name;
    cout<<"\nMARKS : "<<marks;
    cout<<"\nGRADE : "<<grade;
}

}s1;


int main(){
    s1.enter();
    s1.result();
return 0;
}
