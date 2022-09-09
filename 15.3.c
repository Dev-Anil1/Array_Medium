#include<stdio.h>
int main()
{
    int a[5];
    sorting(a,5);
    return 0;
}
void sorting(int b[],int n)
{
    int i,j,temp;
    printf("Enter %d elements ",n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
