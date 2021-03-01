#include<stdio.h>
int main()
{
	int n,i=25,j=35,k=45,l=0;
	printf("Enter the weigth in gram:");
	scanf("%d",&n);
	if(n>7000)
	{
		printf("OVERLOADED!");
	}
	else if(n<0)
	{
		printf("INVALID INPUT");
	}
	else if(n==0)
	{
		printf("Time Estimated: %d minutes",l);
	}
	else if(n>=1 && n<=2000)
	{
		printf("Time Estimated: %d minutes",i);
	}
	else if(n>=2001 && n<=4000)
	{
		printf("Time Estimated: %d minutes",j);
	}
	else if(n>=4001 && n<=7000)
	{
		printf("Time Estimated: %d minutes",k);
	}
	return 0;
}
