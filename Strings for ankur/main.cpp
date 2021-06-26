#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{

 char heo[20];
 gets(heo);
// A n k u r N a m a n \0
 for(int i=0;heo[i]!='\0';i++)
 {
     if(heo[i]==' ')
        heo[i]='Z';
 }
 puts(heo);
    return 0;
}
