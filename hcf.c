#include<stdio.h>
int main()
{
	int a,b,i,hcf;
	printf("enter the number you want to find the HCF:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a||i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}
	}
	printf("%d is greatest commom divisor of %d and %d",hcf,a,b);
	return 0;
}
