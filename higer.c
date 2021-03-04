#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char c[100];
	printf("Enter the string: ");
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		c[i]=-c[i]+122+97;
	}
	printf("%s",c);
}

