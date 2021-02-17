#include<stdio.h>
int convert(int key,char ch[]);
int main()
{
	int key;
	char ch[100],r[100];
	printf("Enter the message:");
	gets(ch);
	printf("Enter the key number you want to shift:");
	scanf("%d",&key);
	convert(key,ch);
	//printf("%s",r);
	return 0;
}
int convert(int key,char ch[])
{
	int n=0,i=0;
	for(n=0;ch[n]!='\0';n++)
	if(key<0)
	{
		printf("INVALID INPUT");
		return;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(ch[i]!=' ')
			{
				if(ch[i]>=65 && ch[i]<=90)
				{
					if((int)(ch[i]+key)<=90)
					{
						ch[i]=(int)(ch[i]+key);
					}
					else
					{
						ch[i]=(int)(ch[i]+key-90+65+1);
					}
				}
				else if(ch[i]>=97 && ch[i]<=122)
				{
					if((int)(ch[i]+key)<=122)
					{
						ch[i]=(int)(ch[i]+key);
					}
					else
					{
						ch[i]=(int)(ch[i]+key-122+97+1);
					}
				}
				else if(ch[i]>=48 && ch[i]<=57)
				{
					if((int)(ch[i]+key)<=57)
					{
						ch[i]=(int)(ch[i]+key);
					}
					else
					{
						ch[i]=(int)(ch[i]+key-57+48+1);
					}
				}
			}
		}
	}
	printf("%s",ch);
}
