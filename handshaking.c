#include<stdio.h>
int main()
{
	int n,m,r;
	printf("enter the number you perons for calculating the handsheaking:");
	scanf("%d",&n);
	m=n-1;
	r=(m*n)/2;
	printf("%d is the total number of handshaking",r);
	return 0;
}
