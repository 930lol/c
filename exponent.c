#include<stdio.h>
int main()
{
	int n,p,s=1,e;
	printf("enter the number you want to find the power:");
	scanf("%d",&n);
	printf("enter the exponent:");
	scanf("%d",&p);
	e=p;
	while(e!=0)
	{
		s=s*n;
		e--;
	}

	printf("%d is the value of of %d to power %d",s,n,p);
	return 0;
}
