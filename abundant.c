#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the number you want to find the factor:");
	scanf("%d",&n);
//	printf("the factor of the %d is:",n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s>n)
	{
		printf("Abundant number");
	}
	else
	{
		printf("Not Abundant number");
	}
	return 0;
}
