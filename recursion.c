#include<stdio.h>
int fib(int );
int main()
{
	int n,i;
	printf("entre the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
}
int fib(int n)
{
	if(n==1||n==2)
		return 1;
	else
	return(fib(n-1)+fib(n-2));
}
