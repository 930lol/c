#include<stdio.h>
int check(int n);
int main()
{
	int n,i,s,t=0;
	printf("enter the number you want to check:");
	scanf("%d",&n);
	if(check(n))
	{
		printf("Automorphic");
	}
	else
	{
		printf("Not Automorphic");
	}
	return 0;	
}
int check(int i)
{
	int s;
	s=i*i;
	while(i>0)
	{
		if(i%10!=s%10)
		{
			return 0;
		}
		else
		{
		i=i/10;
		s=s/10;	
		}
	}
	return 1;	
}	
