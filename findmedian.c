#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	findmedian(a,b,n);
	return 0;
}
int findmedian(int a[],int b[],int n)
{
	int i,c[n+n],k=0,j,t,r;
	for(i=0;i<n;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(i=0;i<n;i++)
	{
		c[k]=b[i];
		k++;
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(c[i]>c[j])
			{
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	if(k%2==0)
	{
		r=(c[k/2]+c[k/2-1])/2;
	}
	else
	{
		r=c[k/2-1];
	}
	printf("The median of the sorted array \n%d",r);
}
