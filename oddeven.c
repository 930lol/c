#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d=findevenodd(n,a);
	printf("%d is the odd even difference",d);
	return 0;
}
int findevenodd(int n,int a[])
{
	int i,e=0,o=0,s;
	for(i=0;i<n;i++)
	{ 
		if(a[i]%2==0)
		{
			e=e+a[i];
		}
		else
		{
			o=o+a[i];
		}
	}
	s=abs(e-o);
	return s;
}
