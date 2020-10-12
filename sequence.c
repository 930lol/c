#include<stdio.h>
#include<string.h>
int check(char*,int);
int main()
{
	char d[100];
	int n,c;
	printf("enter the string:");
	gets(d);
	n=strlen(d);
	c=check(d,n);
	printf("%d is the sequence",c);
}
int check(char *d,int a)
{
	int c[a+1],i;
	c[0]=1;
	c[1]=1;
	for(i=2;i<=a;i++)
	{
		c[i]=0;
		if(d[i-1]>'0')
		{
			c[i]=c[i-1];
		}
		if(d[i-2]=='1'||d[i-2]=='2'&& d[i-2]<'7')
		{
			c[i]=c[i]+c[i-2];
		}
	}
	return c[a];
}
