#include<stdio.h>
int check(char c)
{
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	char c[100],b[100];
	gets(c);
	int i,r=0,j=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(check(c[i])==1)
		{
			 r=r+1;
		}
		else
		{
			b[j]=c[i];
			j++;
		}
	}
	b[j]='\0';
	printf("%d is the total vowel count\n",r);
	printf("%s is the word after removal of the vowel",b);
	return 0;
}
