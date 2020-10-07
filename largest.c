#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the two number want to check\n");
	scanf("%d%d",&n,&m);
	if((m&&n)!=0&&(m!=n))
	{
		if(n>m)
		{
			printf("%d is the largest",n);
		}
		else
		{
			printf("%d is the largest",m);

		}
	}
	else
	{
		printf("both are equal");

	}
	
}
