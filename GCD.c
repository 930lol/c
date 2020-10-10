#include<stdio.h>
int check(int,int);
int main()
{
	int a,b,i,gcd;
	printf("enter the number you want to find the GCD:");
	scanf("%d%d",&a,&b);
	gcd=check(a,b);
	printf("%d is greatest commom divisor of %d and %d",gcd,a,b);
	return 0;
}
int check(int a,int b)
{
	if(a==b)
	{
		return a;
	}
	else if(a==0)
	{
		return b;
	}
	else if(b==0)
	{
		return a;
	}
	else if(a>b)
	{
		check(a-b,b);
	}
	else 
	{
		check(a,b-a);	
	}
}
