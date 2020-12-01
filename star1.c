#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			if(i==n)
			{
				printf("*");
			}
			else
			{
				if(k==1||k==2*i-1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	
	}
	return 0;
}
