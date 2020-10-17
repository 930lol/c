#include<stdio.h>
int main()
{
	int n,m,g,s=0,r,b=1,j,i=0;
	char a[100];
	printf("enter the number you want to octal to binary");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		r=m%10;
		if(r==0)
		{
			for(j=1;j<=3;j++)
			{
				a[i]=a[i]+'0';
				i++;
			}
			
		}
		else
		{
			while(r!=0)
			{
				if(r%2==0)
				{
					a[i]=a[i]+'0';
					i++;
					r=r/2;
				}
				else
				{
					a[i]=a[i]+'1';
					i++;
					r=r/2;
				}
			}			
		}
		m=m/10;	
	}
	for(j=i;j>=0;j--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
