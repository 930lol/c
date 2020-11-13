#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	if(b>0)
	{
		while(b!=0)
		{
			a++;
			b--;
		}
	
	}
	else if(b<0)
	{
		while(b!=0)
		{
			b++;
			a--;
		}	
	}
	printf("%d is sum",a);
}
