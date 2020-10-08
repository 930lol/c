#include<stdio.h>
int main()
{
	int m,n,p=0,i;
	printf("Enter the value of year want to check:");
	scanf("%d",&n);
	if(n%4==0&&n%100!=0)
	{
		printf("%d is leap year",n);

	}
	else if(n%400==0)
	{
		printf("%d is leap year",n);

	}
	else
	{
		printf("%d is not a leap year",n);

	}
	return 0;
}
