#include<stdio.h>
int main()
{
	int n,i,m=0;
	printf("Enter the value of number want to check:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			m=1;
			break;
		}
	}
	if(m==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
