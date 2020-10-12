#include<stdio.h>
int check(char);
int main()
{
	char c;
	printf("enter the character want to check:");
	scanf("%c",&c);
	if(check(c)==1)
	{
		printf("Vowel");
	}
	else 
	{
		printf("consonant");
	}
	return 0;
}
int check(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
