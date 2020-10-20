#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("ente the elements of the array:");
	int a[n],i,j;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s=0,m;
	m=a[n/2-1];
	printf("%d\n",m);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		s=s+abs(a[i]-m);
	}
	printf("%d is the absolute difference",s);
	return 0;
}
