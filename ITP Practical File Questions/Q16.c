#include<stdio.h>

int numOfDigits(char str[])
{
    int n=0;
    for(int i=0;str[i]!='\0';i++, n++)
    {

    }
    return n;
}

int main()
{
    char str[400];
    printf("Enter String\n");
    scanf("%s", &str);
    printf("Length of String:'%s' is: %d", str, numOfDigits(str));
   return 0;

}
