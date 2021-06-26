#include<stdio.h>

int main()
{
    int val=0, temp, i;
    for(i=0;i<3;i++)
    {
        printf("Enter Angle: %d\n", i+1);
        scanf("%d", &temp);
        if(temp==0)
        val=-10000;
        val+=temp;
    }
    if(val==180)
    printf("Valid\n");
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
    
