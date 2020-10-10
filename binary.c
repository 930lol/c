#include<stdio.h>
int main()
{
	int n,s=0,r,b=1,m;
	printf("enter the number want to convert into binary:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%2;
		s=s+r*b;
		n=n/2;
		b=b*10;
	}
	printf("%d is the binary of the decimal number %d",s,m);
	return 0;
}
