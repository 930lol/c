#include<stdio.h>
int check(int);
int main()
{
    int j,m;
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        int r;
        r=check(j);
       // printf("%d\n",r);
       
    }
}
int check(int r)
{
	int n,j,i;
	int s=0,max=-1,max1=-1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]>=0)
		{
			s=s+a[i];
		}
	}
	if(s==0)
	{
		s=max1;
	}
	int maxsum=0,cursum=0;
	for(i=0;i<n;i++)
	{
		cursum=cursum+a[i];
		if(cursum<0)
		{
			cursum=0;
		}
		else if(cursum>maxsum)
		{
			maxsum=cursum;
		}
	}
	if(maxsum==0)
	{
		maxsum=s;
	}
	printf("%d %d\n",maxsum,s);
 //   return s;
}

