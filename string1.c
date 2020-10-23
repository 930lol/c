#include<stdio.h>
int main()
{
	char s[100];
	gets(s);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
		else if(s[i] >= 'a' && s[i] <= 'z')
        {
  	      s[i] = s[i] - 32;
	    }
	}
	printf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		
	}
	return 0;
}
