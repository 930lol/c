#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],b[n],s=0,i,j,t,m,k=0;
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=1;
		if(a[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=-1;
				//	a[i]=-1;
				}
			}
			if(c==1)
			{
				b[k]=a[i];
				k++;
			}

		}
	}
		printf("%d\n",n);
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
