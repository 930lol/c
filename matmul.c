#include<stdio.h>
#define m 50
int main()
{
	int a[m][m],b[m][m],s[m][m],i,j,k,sum=0,r,c;
	printf("enter the row of the matrix\n");
	scanf("%d",&r);
	printf("enter the colunm of the matrix\n");
	scanf("%d",&c);
	if(r!=c)
	{
		printf("multiplication not possible");
	}
	else
		printf("enter the first number:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf(" %d",&a[i][j]);
			}
		}
		printf("enter the second number:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf(" %d",&b[i][j]);
			}
		}
		printf("the first number:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("\nthe second number:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				for(k=0;k<r;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				s[i][j]=sum;
				sum=0;
			}
		}
		printf("\nthe matrix after multiplication is\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",s[i][j]);
			}
			printf("\n");
		}
	return 0;
}
