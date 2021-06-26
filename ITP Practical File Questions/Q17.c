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

int main()
{
    char str[400], str2[400];
    printf("Enter String\n");
    scanf("%s", &str);
    reverseString(str, str2);
    printf("Reverse of String:'%s' is: %s", str, str2);
   return 0;

}
