#include<iostream>
#include<stdio.h>
#include<cstring>
#include<ctype.h>
using namespace std;
void getstring(char []);

int main()
{
char a[100];
cout<<"Enter the first string : ";
cin.getline(a, 10, '.');

getstring(a);
return 0;
}

void getstring(char c[]){
char j[100];
int a;
a= strlen(c);
//cout<<a;
int h=0;
for(int i=a-1; i>=0 ; i--, h++){
j[h]=c[i];
}
j[a]='\0';
puts(j);

}
