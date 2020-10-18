#include<stdio.h>
int sub(int a[],int);
int max(int x,int y);
int min(int x,int y);
int main()
{
	int n,i,r;
	printf("enter the size of the elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	r=sub(a,n);
	printf("%d is the maxproduct",r);
}
int sub(int a[],int n)
{
	int i;
	int max_end=1;
	int min_end=1;
	int max_so_far=1;
	for( i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			max_end=max_end*a[i];
			min_end=min(min_end*a[i],1);
		}
		else if(a[i]==0)
		{
			max_end=1;
			min_end=1;
		}
		else
		{
			int t=max_end;
			max_end=max(min_end*a[i],1);
			min_end=t*a[i];	
		}
		if(max_so_far<max_end)
		{
			max_so_far=max_end;
		}
	}
	return max_so_far;
}
int min (int x, int y) 
{
	return x < y? x : y;
}
int max (int x, int y) 
{
	return x > y? x : y;
}

