#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	long int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	int d=findbill(n,a);
	printf("%d is the bill amount",d);
	return 0;
}
int findbill(int n,long int a[])
{
	int i,r,s=0;
	for(i=0;i<n;i++)
	{
		r=0;
		if(a[i]>1000)
		{
			r=r+((a[i]-1000)*0.1);
		}
		s=s+r;
	}
	return s;
}
