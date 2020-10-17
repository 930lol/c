#include<stdio.h>
int main()
{
	int n,i,j=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],k;
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements you want to search:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			j++;
			printf("%d is found at %d postion",k,i+1);
		}
		break;
	}
	if(j==0)
	{
		printf("elements not found in the array");
	}
	return 0;
}
