#include<stdio.h>
#include<math.h>

int main()
{
    int size;
    printf("Enter Size of Array\n");
    scanf("%d", &size);
    printf("Enter The array\n");
    int ar[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &ar);
    }
    int num;
    int flag=0;
    printf("Enter the number to search\n");
    scanf("%d", &num);
    for(int i=0;i<size;i++)
    {
        if(ar[i]==num)
        {
            printf("%d", num);
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Element Not Found\n");
    }
    return 0;

}
