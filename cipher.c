#include<stdio.h>
#include<string.h>
int chiper(int n,char c[100])
{
	int i,r;
	r=n%26;
	if(n<=0)
	{
		printf("INVALID INPUT");
		return;
	}
	else
	{
		for(i=0;c[i]!='\0';i++)
		{
			if(c[i]>='A'&&c[i]<='Z'||c[i]>='a'&&c[i]<='z')
			{
				c[i]=c[i]+r;
			}
			if(c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9'||c[i]=='0')
			{
				c[i]=c[i]+r;
			}
		}
	}
	printf("%s",c);

}
int main()
{
	int n,i;
	printf("enter the key:");
	scanf("%d",&n);
	char c[100];
	//printf("enter the string:");
	gets(c);
	chiper(n,c);
	return 0;
}
