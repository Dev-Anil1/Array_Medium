#include<stdio.h>
int main()
{
    int a[5];
    int d=adjacentDup(a,5);
    printf("%d",d);
    return 0;
}

int adjacentDup(int b[],int n)
{
    printf("Enter %d elements",n);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        if(b[i]==b[i+1])
            return b[i];
    }
}

