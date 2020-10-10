#include<stdio.h>
int main()
{
	int n,s=0,r,b=1,m,c=1,d=0,i=1,o=0;
	printf("enter the number want to convert into decimal to octal:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%2;
		s=s+r*b;
		n=n/2;
		b=b*10;
	}
	while(s!=0)
	{
		r=s%10;
		d=d+r*c;
		c=c*2;
		s=s/10;
	}
	while(d!=0)
	{
		r=d%8;
		o=o+r*i;
		i=i*10;
		d=d/8;
		
	}
	printf("%d is the octal converstion of %d",o,m);
	return 0;
}
