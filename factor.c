#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number you want to find the factor:");
	scanf("%d",&n);
	printf("the factor of the %d is:",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
