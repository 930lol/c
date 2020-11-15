#include<stdio.h>
void arrange(int a[],int n,int m);
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int a[m],i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    arrange(a,n,m);
}
void arrange(int a[],int n,int m)
{
  int i,j;
  for(i=0;i<m;i++)  
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        if(a[i]==n)
        {
            printf("%d",i);
        }
    }
}

