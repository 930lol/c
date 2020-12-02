#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int j=strlen(s);
//	printf("%d",j);
	if(s[j-5]=='.'&&s[j-4]=='j'&&s[j-3]=='a'&&s[j-2]=='v'&&s[j-1]=='a')
	{
		printf("the file is java file");
	}
	else 
	{
		printf("the file is not java file");
	}
}
