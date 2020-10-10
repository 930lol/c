#include<stdio.h>
int main()
{
	int n,s=0,b=1,m,r,i=1,o=0;
	printf("enter the number you want to convert into binary to octal:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*b;
		b=b*2;
		n=n/10;
	}
	while(s!=0)
	{
		r=s%8;
		o=o+r*i;
		i=i*10;
		s=s/8;
		
	}
	printf("%d is the octal converstion of %d",o,m);
	return 0;
}
