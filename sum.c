#include<stdio.h>
int main()
{
	int n;
	printf("enter the size ofthe array:");
	scanf("%d",&n);
	int a[n],i,s=0;
	printf("enter the element of araay you want to sort:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("%d is the smallest elements ofthe array",s);
	return 0;
}
