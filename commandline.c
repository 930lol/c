#include<stdio.h>
#include<stdlib.h>
int main(int argc ,char* argv[])
{
	if(argc==1)
	{
		printf("No command line argument exist please provide them first \n");
	}
	else 
	{
		int i,n,ans;
		for(i=0;i<argc;i++)
		{
			n=atoi(argv[i]);
			ans=fact(n);
			printf("%d\n", ans);
		}
	}
	return 0;
}
int fact(int n)
{
	int i;
	if(n==0)
	{
		return 1;
	}
	else 
	{
		int ans=1;
		for(i=1;i<=n;i++)
		{
			ans =ans*i;
		}
		return ans;
	}
}
