#include<stdio.h>

void copyString(char str[], char str2[])
{
    int n=0;
    for(int i=0;str[i]!='\0';i++, n++)
    {
        str2[i]=str[i];
    }
    str2[n]='\0';
}

int stringLength(char str[])
{
    int n=0;
    for(int i=0;str[i]!='\0';i++, n++)
    {
    }
    return n;
}
void reverseString(char str[], char str2[])
{
    copyString(str, str2);
    int n=stringLength(str)-1;
    for(int i=0 ;str[i]!='\0';i++, n--)
    {
        str2[n]=str[i];
    }
}
int checkPalindrome(char str[], char str2[])
{
    reverseString(str, str2);
    int res=1;
    for(int i=0 ;str[i]!='\0';i++)
    {
        if(str[i]!=str2[i])
        {
            res=0;
            break;
        }
    }
    return res;
}

int main()
{
    char str[400], str2[400];
    printf("Enter String\n");
    scanf("%s", &str);
    printf("%s",checkPalindrome(str, str2)?"The String is Palindrome":"The String is not Palindrome");
   return 0;

}
