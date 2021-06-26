#include<stdio.h>

int main()
{
    int avg=0, temp, i;
    printf("Enter Marks of 5 subjects\n");
    for(i=0;i<5;i++)
    {
        printf("Enter Marks of Subject: %d\n", i+1);
        scanf("%d", &temp);
        avg+=temp/5;
    }
    if(avg>=60)
    printf("First Division\n");
    else if(avg>=50)
    {
        printf("Second Division\n");
    }
    else if(avg>=40)
    {
        printf("Third Division\n");
    }
    else 
    {
        printf("Fail\n");
    }
    return 0;
}
