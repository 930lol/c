#include<stdio.h>
int main()
{
	int a,b,s,c;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		s=a^b;
		c=(a&b)<<1;
		a=s;
		b=c;
	}
	printf("%d",s);

}
