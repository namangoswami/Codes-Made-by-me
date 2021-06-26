#include<stdio.h>


int stringLength(char str[])
{
    int n=0;
    for(int i=0;str[i]!='\0';i++, n++)
    {
    }
    return n;
}
int checkPalindrome(char str[])
{

    int res=1;
    int len=stringLength(str);
    for(int i=0, n= len-1;i<=len/2;i++, n--)
    {
        if(str[i]!=str[n])
        {
            res=0;
            break;
        }
    }
    return res;
}

int main()
{
    char str[400];
    printf("Enter String\n");
    scanf("%s", &str);
    printf("%s",checkPalindrome(str)?"The String is Palindrome":"The String is not Palindrome");
   return 0;

}
