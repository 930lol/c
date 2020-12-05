#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[100];
	gets(s);
	int n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='w')
		{
			s[i]=s[i]+3;
		}
		else if(s[i]=='x')
		{
			s[i]='a';
		}
		else if(s[i]=='y')
		{
			s[i]='b';
		}
		else if(s[i]=='z')
		{
			s[i]='c';
		}
	}
	printf("%s",s);
}
