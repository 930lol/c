#include<stdio.h>
int main()
{
	int n,c=0,i,j;
	printf("enter the sizr of the array:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter the fisrt array:");
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
			if(a[i]==b[j])
			{
				c=c+1;
			}
		}
	}
	if(c==0)
	{
		printf("entered arrays is disjoint array");
	}
	else
	{
		printf("array is not disjoint");
	}
	return 0;
}
