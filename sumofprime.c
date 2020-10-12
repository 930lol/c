#include<stdio.h>
int check(int);
int main()
{
	int n,i,flag=0;
	printf("enter the number you want to express as the sum of two prime number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(check(i)==1)
		{
			if(check(n-i)==1)
			{
				printf("%d and %d is express as the sum of two prime number\n",i,n-i);
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("%d is no express as the sum of two prime number\n",n);

	}
	return 0;
}
int check(int a)
{
	int p=1,i;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			p=0;
		}

	}
	return p;
}
