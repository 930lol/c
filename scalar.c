#include<stdio.h>
int main()
{
	int n,t;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elemest of the array");
	int a[n],b[n],i,j,s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		{
			if(b[i]<b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		s=s+(a[i]*b[i]);
	}
	printf("%d scalar product",s);
	return 0;
	
}
