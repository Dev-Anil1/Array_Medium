#include<stdio.h>
void mergeAndSort(int a[],int b[],int c[],int n);


int main()
{
    int a[5]={7,8,1,4,6};
    int b[5]={10,25,2,78,5};
    int c[10];

    mergeAndSort(a,b,c,10);
    return 0;
}


void mergeAndSort(int a[],int b[],int c[],int n)
{
  int i,j,k,temp;
    k=0;


    for(i=0;i<5;i++)
    {
        c[k]=a[i];
        k++;
    }


    for(j=0;j<5;j++)
    {
        c[k]=b[j];
        k++;
    }


    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }


    for(i=0;i<10;i++)
       printf("%d ",c[i]);
}


