#include<stdio.h>
int main()
{
    int a[5];
    int s=smarray(a,5);
    printf("%d is smallest element",s);
    return 0;
}

int smarray(int b[],int n)
{
    int i;
    printf("Enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int sm=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<sm)
            sm=b[i];
    }
    return sm;
}
