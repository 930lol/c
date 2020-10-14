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
	printf("%d is the smallest elements ofthe array",a[0]);
	return 0;
}
