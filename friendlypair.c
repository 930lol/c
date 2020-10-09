#include<stdio.h>
int main()
{
	int n,m,i,s=0,j=0;
	printf("enter the number you want to find check:");
	scanf("%d%d",&n,&m);
//	printf("the factor of the %d is:",n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	for(i=1;i<=m/2;i++)
	{
		if(m%i==0)
		{
			j=j+i;
		}
	}
	if(s==m&&j==n)
	{
		printf("Amicable number");
	}
	else
	{
		printf("Not Amicable number");
	}
	return 0;
}
