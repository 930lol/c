#include<stdio.h>
int com(int);
int per(int,int);
int fact(int);
int main()
{
	int n,i,t=0,j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=1;j<=a[i];j++)
		{
			int r=com(j);
			t=t+r;
			printf("t = %d\n",t+r);
		}
	}
	printf("result = %d",t);
}
int com(int i)
{
	int e=10;
	int t=0;
	int c;
	c=per(e,i);
	int f;
	f=fact(i);
	int r=t+c/f;
//	int j=r;
	//r=r+j;
	//t=r+t;
	printf("com = %d\n",r);
	return r;
	
}
int per(int a,int i)
{
	int r=fact(a);
	int j=fact(a-i);
//	printf("per = %d\n",r/j);
	return r/j;
}
int fact(int a)
{
	int fact=1;
	while(a>0)
	{
		fact=fact*a;
		a--;
	}
	//printf("fact = %d\n",fact);
	return fact;
}
