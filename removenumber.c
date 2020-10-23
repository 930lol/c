#include<stdio.h>
int main()
{
	char s[100],b[100];
	gets(s);
	int i,k=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z'||s[i] >= 'a' && s[i] <= 'z')
		{
			b[k]=s[i];
			k++;
		}
		b[k]='\0';
	}
	printf("%s",b);
	for(k=0;s[k]!='\0';k++)
	{
		
	}
	return 0;
}
