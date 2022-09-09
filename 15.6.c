#include<stdio.h>
int main()
{
    int a[5];
    reversearray(a,5);
    return 0;
}

void reversearray(int b[],int n)
{
    int i,a=n;
    printf("Enter %d elements",n);
    for( i=0;i<n;i++)
        scanf("%d",&b[i]);
   for(i=n-1;i>=0;i--)
   {
       printf("%d ",b[i]);
   }
}
