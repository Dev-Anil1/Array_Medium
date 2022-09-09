#include<stdio.h>
 void freq(int b[],int n);
int main()
{
    int a[10];
    int i;
    printf("Enter 10 elements ");

    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    freq(a,10);
    return 0;
}
    void freq(int b[],int n)
    {


    int freq[100]={0};


    for(int i=0;i<10;i++)
    {
        freq[b[i]]++;
    }

    for(int i=0;i<100;i++)
    {
        if(freq[i]!=0)
            printf("%d ==>%d\n",i,freq[i]);
    }
    }

