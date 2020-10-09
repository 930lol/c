#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the number you want to find the factor:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("%d is the perfect number",n);
	}
	else 
	{
		printf("%d is not the perfect number",n);
	}
	return 0;
}	
