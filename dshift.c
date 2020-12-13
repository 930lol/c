#include<stdio.h>
int main()
{
    int n,d,i,t;
    scanf("%d%d",&n,&d);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=d%n;
    for(i=d;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     for(i=0;i<d;i++)
    {
        printf("%d ",a[i]);
    } 
}

