#include<stdio.h>
int main()
{
	int n,d,r=0,c=0,i,j;
	printf("enter the range you want to find the divisor:");
	scanf("%d",&n);
	printf("enter the exact number of divisor you want to find out:");
	scanf("%d",&d);
	for(i=1;i<n+1;i++)
	{
		c=0;
		for(j=1;j<i+1;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==d)
		{
			r=r+1;
			printf("%d ",i);
		}
		
	}
	printf("\n%d is the exact number of the divisor in the range %d\n",r,n);
	return 0;
}

