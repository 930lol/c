#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d=findmax(n,a);
	printf("%d",d);
	return 0;
}
int findmax(int n,int a[])
{
	int i=0,max=0,s;
	while(i<n-1)
	{
		if((a[i]-a[i+1])>max)
		{
			max=(a[i]-a[i+1]);
		}
		i++;
	}
	return max;
}
