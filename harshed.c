#include<stdio.h>
int main()
{
	int n,i,s=0,r,t;
	printf("enter the number you want to find the factor:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	if(t%s==0)
	{
		printf("%d is the harshad number",t);
	}
	else
	{
		printf("%d is not harshad number",t);
	}
	return 0;
}
