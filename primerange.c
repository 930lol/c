#include<stdio.h>
int main()
{
	int n,p,j,i,m=0;
	printf("Enter the range want to check:");
	scanf("%d%d",&n,&p);
	for(i=n;i<=p;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			printf("%d ",i);
		}
		m=0;
	}
	
	return 0;
}
