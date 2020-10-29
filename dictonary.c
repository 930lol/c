#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100][100],temp[50];
	int i,j,n;
	printf("enter the total no. of word:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(ch[i]);
	}
	printf("the string\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\n",ch[i]);
	}
	printf("the sorting:");
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strcmp(ch[i],ch[j])>0)
			{
				strcpy(temp,ch[i]);
				strcpy(ch[i],ch[j]);
				strcpy(ch[j],temp);
			}
		}
	}
	printf("the lexiuicographical order:\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\n",ch[i]);
	}
}
