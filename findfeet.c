#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d=findfeet(n,a);
	printf("%d is the measure in the feet",d);
	return 0;
}
int findfeet(int n,int a[])
{
	int i,r,s=0;
	for(i=0;i<n;i++)
	{ 
	    r=0;
		if(a[i]>=12)
		{
			r=a[i]/12;
		}
		s=s+r;
	}
	return s;
}
