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
	else return (function(n-1)+2*function(n-2)+3*1);
}
int main()
{
	int n;
	scanf("%d",&n);
	int d=function(n);
	printf("%d",d);
}
