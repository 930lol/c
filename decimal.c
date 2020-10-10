#include<stdio.h>
int main()
{
	int n,s=0,b=1,m,r;
	printf("enter the number you want to convert into binary to decimal:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*b;
		b=b*2;
		n=n/10;
	}
	printf("%d is the decimal converstion of %d",s,m);
	return 0;
}
