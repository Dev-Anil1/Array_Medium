#include<stdio.h>
int main()
{
    int a[5];
    rot(a,5);
    return 0;
}

void rot(int b[],int n)
{
    int i;
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int temp[5];
    int k=0;
    for(i=2;i<n;i++)
    {
        temp[k]=b[i];
        k++;
    }
    for(i=0;i<2;i++)
    {
        temp[k]=b[i];
        k++;
    }
    for(i=0;i<n;i++)
        b[i]=temp[i];
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}

