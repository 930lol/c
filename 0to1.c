#include<stdio.h>
int main()
{
	int n,r,s=0,b=10,o=1,d=0,w=10;
	printf("enter the number want to conver 0 into 1:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r==0)
		{
			s=s*b+o;
		}
		else
		{
			s=s*b+r;
		}
		n=n/10;
	}
	printf("%d\n",s);
	while(s!=0)
	{
		r=s%10;
		d=d*w+r;
		s=s/10;
	}
	printf("%d is number",d);
	return 0;
}
