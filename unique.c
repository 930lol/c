#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],b[n],s=0,i,j,t,m;
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			c=1;
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					a[j]=-1;
				}
			}
		}
	}
	printf("Unique elements of the array");
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
