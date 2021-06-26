#include<stdio.h>
#include<math.h>

void mergeit(int ar[], int l, int h, int mid)//, int &totp)
{
	int a[h-l];
	int p=l, q=mid+1;
	int k=0;
	for(int i=l;i<=h;i++)
	{
		if(p>mid)
		{
			a[k++]=ar[q++];
		}
		else if(q>h)
		{
			a[k++]=ar[p++];
		}
		else if(ar[p]<ar[q])
		{
			//if(ar[p]<ar[q])
		//	totp--;
			a[k++]=ar[p++];
		}
		else
		{
			a[k++]=ar[q++];
			//totp--;
		}

	}
	for(int i=0;i<k;i++)
	{
		ar[l++]=a[i];
	}
}

void mergesort(int ar[], int l, int h)
{
	if(l>=h)
	return;
	int mid=l+(h-l)/2;
	mergesort(ar, l, mid);
	mergesort(ar, mid+1, h);
	mergeit(ar, l, h, mid);
}
int binarySearch(int ar[], int size, int key)
{

    int l, h, mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key>ar[mid])
        {

            l=mid+1;
        }
        else if(key<ar[mid])
        {

            h=mid-1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    printf("Enter Size of Array\n");
    scanf("%d", &size);
    printf("Enter The array\n");
    int ar[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d", &ar[i]);
    }
    mergesort(ar, 0, size-1);
    for(int i=0;i<size;i++)
    {
        printf("%d\n", ar[i]);
    }
    int num;
    int flag=0;
    printf("Enter the number to search\n");
    scanf("%d", &num);
    if(binarySearch(ar, size, num))
    {
        printf("Item Found\n");
    }
    else
    {
        printf("Element Not Found\n");
    }

    return 0;

}
