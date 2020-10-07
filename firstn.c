#include<stdio.h>
int main()
{
	int m,n,p=0,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the first m numbers:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		p=p+i;	
	}
	printf("%d",p);
}
