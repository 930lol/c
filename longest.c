#include<stdio.h>
int check(int);
int main()
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n],i,s[100],k,j=0;;
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(check(a[i])==1)
		{
			s[j]=a[i];
			j++;
		}
	}
	printf("%d",j);
	for(k=0;k<j;k++)
	{
		for(i=k+1;i<j;i++)
		{
			int t;
			if(s[k]>s[i])
			{
				t=s[k];
				s[k]=s[i];
				s[i]=t;
			}
		}
	}
	printf("%d is the longest palindrome of the array\n",s[k-1]);
}
	//printf("%d is the longest palindrome of the array",s[j-1]);
int check(int n)
{
	int s=0,r,m;
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(m==s)
	{
	//	printf("%d hjhk\n",s);
		return 1;
	}
	else 
	{
		return 0;
	}
}
