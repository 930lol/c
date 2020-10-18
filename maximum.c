#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],i,j,p=1,t;
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n>=4)
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		for(i=n-4;i<n;i++)
		{
			p=p*a[i];
		}
		printf("%d is the maximum product",p);
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}
