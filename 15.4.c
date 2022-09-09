#include<stdio.h>
int main()
{
    int a[5];
    rotate1(a,5);
    return 0;
}

void rotate1(int b[],int n)
{
    int i,j,temp;
    int d=2;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<d;i++)
    {
        temp=b[0];
        for(j=0;j<n-1;j++)
        {
            b[j]=b[j+1];
        }
        b[n-1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
