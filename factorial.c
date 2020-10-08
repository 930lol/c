#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter the number want to find factorial:");
	scanf(" %d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d is the factorial of the %d",fact,n);
	return 0;
}
