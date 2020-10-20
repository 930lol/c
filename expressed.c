#include<stdio.h>
int main()
{
	int n,c=1;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		while(a[i]%2==0)
		{
			a[i]=a[i]/2;
		}
		while(a[i]%3==0)
		{
			a[i]=a[i]/3;
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[0])
		{
			c=0;
		}
	}
	if(c==1)
	{
		printf("we can represnts the number ");
	}
	else
	{
		printf("not represented");
	}
	return 0;
}
