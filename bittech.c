#include<stdio.h>
char* bitwise(int n);
int main(void)
{
	int n,i;
	scanf("%d",&n);
	char* z=bitwise(n);
	for(i=0;i<5;i++)
	{
		printf("%c",z[i]);
	}
	
}
char* bitwise(int n)
{
	int i,r,s=0,b=1,a[100],k=0,c=0,d[100],l=0,e,f,m=0;
	char z[100];
	while(n>0)
	{
		r=n%2;
		s=s+r*b;
//1		printf("%d ",r);
		a[k]=r;
		k++;
		n=n/2;
		b=b*10;
	}
//	printf("\n%d",s);
	for(i=0;i<k;i++)
	{
		if(a[i]>0)
		{
			c=c+1;
		}
	}
	for(i=k-1;i>=0;i--)
	{
		d[l]=a[i];
		l++;
	}
	for(i=0;i<l;i++)
	{
	//	printf("%d",d[i]);
	}
	for(i=0;i<l;i++)
	{
		if(d[i]==1)
		{
			e=(l-i)-1;
			break;
		}
		
	}
	for(i=l-1;i>=0;i--)
	{
	//	printf("hello");
		if(d[i]==1)
		{ 
		   // printf("hello");
			f=(l-1)-i;
			//printf("\n%d", f);
			break;
		}
	}
	z[m]=c+'0';
	m++;
	z[m]='#';
	m++;
	z[m]=f+'0';
	m++;
	z[m]='#';
	m++;
	z[m++]=e+'0';
	//m++;
	//z[m]='\0';
	//printf("\n%s",z);
	return z;
}
