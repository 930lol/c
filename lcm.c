#include<stdio.h>
int check(int,int);
int main()
{
	int a,b,i,lcm;
	printf("enter the number you want to find the LCM:");
	scanf("%d%d",&a,&b);
	lcm=check(a,b);
	printf("%d is greatest commom divisor of %d and %d",lcm,a,b);
	return 0;
}
int check(int a,int b)
{
	int n1,n2;
	n1=a;
	n2=b;
	while(n1!=n2)
	{
		if(n1<n2)
		{
			n1=n1+a;
		}
		else
		{
			n2=n2+b;
		}
	}
	return n1;
}
