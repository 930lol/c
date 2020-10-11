#include<stdio.h>
int fact(int);
int main()
{
	int n,s,t,num,deno,per;
	printf("enter the number of the people:");
	scanf("%d",&n);
	printf("enter the number of seat to be for the people:");
	scanf("%d",&s);
	if(n<s)
	{
		t=n;
		n=s;
		s=t;
	}
	num=fact(n);
	deno=fact(n-s);
	per=num/deno;
	printf("%d is the permutation of the given data",per);
	return 0;
}
int fact(int a)
{
	int r=1,i;
	for(i=1;i<=a;i++)
	{
		r=r*i;
	}
	return r;
}
