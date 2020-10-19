#include<stdio.h>
int main()
{
	int n,m,c=0,i,j;
	printf("enter the size of the first array:");
	scanf("%d",&n);
	printf("enter the sizr of the second array:");
	scanf("%d",&m);
	int a[n],b[m];
	printf("enter the fisrt array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				c=c+1;
				break;
			}
			
		}
	}
	printf("%d\n",c);
	if(m>n)
	{
		if(c==m)
		{
			printf("entered arrays is subset of other array");
		}
		else
		{
			printf("array is not subset of the array");
		}
	}
	else
	{
		if(c==n)
		{
			printf("entered arrays is subset of other array");
		}
		else
		{
			printf("array is not subset of the array");
		}
	}
	return 0;
}
