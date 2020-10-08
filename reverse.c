#include<stdio.h>
int main()
{
	int m,n,i,s=0,r;
	printf("Enter the number want to find the sum of the digit:");
	scanf(" %d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	printf("the number %d is reverse of %d",s,m);
	return 0;
}
