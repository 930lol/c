#include<stdio.h>
int main()
{
	int n,i,fact=1,m,r,s=0;
	printf("enter the number you want to find the factor:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		s=s+fact;
		fact=1;
		n=n/10;
	}
	if(m==s)
	{
		printf("%d is the strong number",m);
	}
	else
	{
		printf("the number is not a strong");
	}
	return 0;
}
