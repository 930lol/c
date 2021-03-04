#include<stdio.h>
int noofways(int);
int main()
{
	int n,ways;
	printf("enter the number of staircase: ");
	scanf("%d",&n);
	if(n>=24)
	{
		printf("thank you ");
	}
	else
	{
		ways =noofways(n);
		printf("%d",ways);
	}

	return 0;
}
int noofways(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else 
	{
		return noofways(n-1)+ noofways(n-2);
	}
	
}
