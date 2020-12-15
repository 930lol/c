#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    char ch[1001][1001],temp[1001][1001];
   // printf("enter the number of the elements of first string\n");
    scanf("%d",&n);
   // printf("enter the elements of first string:\n");
    for(i=0;i<=n;i++)
    {
        gets(ch[i]);
    }
    int m,result=1;
    //printf("enter the number of the elements of second string\n");
    scanf("%d",&m);
    //printf("enter the elements of second string:\n");
    for(i=0;i<=m;i++)
    {
        gets(temp[i]);
    }
    int flag=0;
    for(i=1;i<=m;i++)
    {
        
        for(j=1;j<=n;j++)
        {
            if(strcmp(ch[j],temp[i])==0)
            {
                flag++;
            }
        }      
        printf("%d\n",flag);
        flag=0;
    }
    return 0;
}

