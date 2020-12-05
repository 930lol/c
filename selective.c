#include<stdio.h>
int function(int n)
{
	if(n==1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	else return (n-1)*(function(n-1)+function(n-2));
}
int main()
{
	int n;
	scanf("%d",&n);
	int d=function(n);
	printf("%d",d);
}
