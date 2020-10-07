#include<stdio.h>
int main()
{
	int m,n,p=0,i;
	printf("Enter the value of first range:");
	scanf("%d",&n);
	printf("Enter the last range:");
	scanf("%d",&m);
	for(i=n;i<=m;i++)
	{
		p=p+i;	
	}
	printf("%d",p);
}
