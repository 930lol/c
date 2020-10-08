#include<stdio.h>
int main()
{
	int m,n,o;
	printf("Enter the three number want to check\n");
	scanf("%d%d%d",&n,&m,&o);
	if(n>m)
	{
		if(n>=o)
		{
			printf("%d is greatest",n);
		}         
		else
		{
			printf("%d is greatest",o);
		}
	}
	else
	{
		if(m>=o)
		{
			printf("%d is greatest",m);
		}
		else 
		{
			printf("%d is greatest",o);

		}
	}
	return 0;
}
