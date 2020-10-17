#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],i,t,p,j;
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[p]>a[j])
			{
				p=j;
			}
		}
		if(p!=i)
		{
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	}
	printf("the sorted array after selection sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
