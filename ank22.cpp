#include<iostream>
using namespace std;

struct student{
char name[30];
int age;
int marks[2];
//int sum=0;

}p[2];

void input(){
//student p[2];

cout<<"ENTER DETAILES : \n";
for(int i=0; i<2; i++){
cout<<"\nENTER "<<i+1<< " STUDENT DETAILS :--";
cout<<"\nname : ";
cin>>p[i].name;
cout<<"age : ";
cin>>p[i].age;

cout<<"enter "<<i+1 << " STUDENT MARKS : --\n";

for(int j=0; j<2; j++){
cout<<j+1<<" marks : ";
cin>>p[i].marks[j];

}

}
//return p[2];

}

void dis(student p[]);

int main(){


//student p1[2]
//p1[2] =
 input();
dis(p);


return 0;
}

void dis(student p[]){
    cout<<"details are here\n\n";
    for(int i=0; i<2; i++){
        cout<<"NAME :"<<p[i].name;
        cout<<"\nAGE : "<<p[i].age << endl;

        for(int j=0; j<2; j++){
            cout<<p[i].marks[j]<<endl;
            }

        }


    }
