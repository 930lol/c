#include<stdio.h>
int main()
{
	int n;
	printf("enter the size ofthe array:");
	scanf("%d",&n);
	int a[n],i,j,t;
	printf("enter the element of araay you want to sort:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	//printf("%d is the smallest elements ofthe array",a[0]);
	return 0;
}
