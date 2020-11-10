#include<stdio.h>
#include<string.h>
int main()
{
    char c[10],b[10];
    fgets(c,10,stdin);
    fgets(b,10,stdin);
    //gets(c);
    //gets(b);
    int k,i,j,n;
    scanf("%d",&k);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(k==i)
        {
        	if(c[i]==b[i])
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}	
        }
    }
}
