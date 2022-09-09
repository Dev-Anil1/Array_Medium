#include<stdio.h>
int main()
{
    int a[5];
    int m=grArray(a,5);
    printf("%d",m);
    return 0;
}

int grArray(int b[],int n )
{
    int i;
    printf("Enter the %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int gr=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>gr)
            gr=b[i];
    }
    //printf("greatest element is %d",gr);
    return gr;
}
