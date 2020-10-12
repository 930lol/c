#include<stdio.h>
int check(char);
int main()
{
	char c;
	printf("enter the character want to check:");
	scanf("%c",&c);
	if(check(c)==1)
	{
		printf("Character");
	}
	else 
	{
		printf("not character");
	}
	return 0;
}
int check(char c)
{
	if(c>=65 && c<=90 ||c>=97 && c<=122)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
