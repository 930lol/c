#include<stdio.h>
int main()
{
	int m,n,i,s=1,r,a=0,p=0,b=1;
	printf("Enter the number want to find the sum of the digit:");
	scanf(" %d",&n);
	m=n;
	while(n!=0)
	{
		p=p+1;
		n=n/10;
	}
	//printf("%d\n",p);
	s=p;
	n=m;
	while(n!=0)
	{
		r=n%10;
		while(s!=0)
		{
			b=b*r;
			s--;
		}
		a=a+b;
		n=n/10;
		s=p;
		b=1;
	//	printf("%d\n",a);
	//	printf("%d\n",n);
	}
//	printf("%d",a);
	if(a==m)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
	return 0;
}
