#include<stdio.h>
int main()
{
	int b=1,n,s=0,r,m;
	printf("enter the octal number you want to convert in decimal number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*b;
		n=n/10;
		b=b*8;
	}
	printf("%d is the decimal number of %d",s,m);
	return 0;
}
