#include<stdio.h>
int main()
{
	int m=0,p=1,n,r,i,n3,l;
	printf("ENTER THE LIMIT:");
	scanf("%d",&l);
	printf("%d %d",m,p);
	for(i=2;i<l;i++)
	{
		n3=m+p;
		m=p;
		p=n3;
		printf(" %d",n3);
	}
	return 0;
}
