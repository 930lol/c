#include<stdio.h>
int main()
{
	int a[5][5],i,j,s=0;
	printf("enter the matrix:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the sum of rows:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			s=s+a[i][j];
		}
		printf("%d ",s);
		s=0;
	}
	printf("\nthe sum of colunm:\n");
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			s=s+a[i][j];
		}
		printf("%d ",s);
		s=0;
	}
	return 0;
}
