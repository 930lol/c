#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter the first array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j+1]&&a[j]==b[i+1])
			{
				printf("(%d,%d)\t",a[i],b[i]);
				continue;
			}
		}
	}
	return 0;
	
}
