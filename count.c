#include<stdio.h>
int main()
{
	int n,d,r=0,c=0,i,j;
	printf("enter the number you want to check:");
	scanf("%d",&n);
	printf("enter the number you want to find out:");
	scanf("%d",&d);
	while(n!=0)
	{
		r=n%10;
		if(r==d)
		{
			c=c+1;
		}
		n=n/10;
	}
	printf("%d is occur %d times in %d",d,c,n);
	return 0;
}
