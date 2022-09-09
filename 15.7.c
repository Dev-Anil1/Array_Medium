#include<stdio.h>
int dupelements(int b[],int n);
int main()
{
    int a[10];
    printf("Enter 10 elements ");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    dupelements(a,10);
    return 0;
}

int dupelements(int b[],int n)
{
    int i;
    int freq[100]={0};
    for(i=0;i<10;i++)
    {
       freq[b[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if( freq[i]>=2)
            printf("%d ==>%d\n",i,freq[i]);
    }
}
