#include<stdio.h>

int main()
{
    int attendance, marks;
    printf("Enter Attendance and Marks\n");
    scanf("%d%d", &attendance, &marks);
    if(attendance>70&&marks>50)
    printf("Pass\n");
    else
    {
        printf("Fail!\n");
    }
    return 0;
}