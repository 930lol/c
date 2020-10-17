#include<stdio.h>
int binary(int a[],int,int,int);
int main()
{
	int n;
	printf("entee the size of the arrya:");
	scanf("%d",&n);
	int a[n],k,r,i;
	printf("enter the elements of  the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to search:");
	scanf("%d",&k);
	r=binary(a,0,n-1,k);
	//printf("%d",r);
	if(r==-1)
	{
		printf("number not found");
		
	}
	else
	{
		printf("number found at %d location",r);
	}
}
int binary(int a[],int l,int h,int f)
{
	if(h>=l)
	{
		int mid=(l+(h-1))/2;
		if(a[mid]==f)
		{
			return mid;
		}
		else if(a[mid]<f)
		{
			return binary(a,mid+1,h,f);
		}
		else if(a[mid]>f)
		{
			return binary(a,l,mid-1,f);
		}
	}
	return -1;
}
