#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],b[100];
	gets(s);
	int n=strlen(s);
	int i,c=0;
	for(i=n-1;i>=0;i--)
	{
		b[i]=s[i];
	}
	b[n-1]='\0';
	for(i=0;i<n;i++)
	{
		if(b[i]==s[i])
		{
			c=c+1;
		}
	}
	if(c==n-1)
	{
		printf("palindrome\n");
	}
	else 
	{
		printf("thankyou\n");
	}
	printf("%s %s",s,b);
	
	return 0;
}
