#include<iostream>
using namespace std;

int input(){

int mat[5][2];
cout<<"ENTER THE ELEMENTS : \n\n";
for(int i=0; i<5; i++){
for(int j=0 ; j<2; j++){
cin>>mat[i][j];
}
}

return mat;
}

void display(int mat[][2], int x){

for(int i=0; i<x; i++){
for(int j=0; j<2; j++){
cout<<mat[i][j]<<" ";
}
cout<<endl;
}
}

int main(){

int matr[5][2];
matr[5][2] = input();
display(matr, 5);

return 0;
}
