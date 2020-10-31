#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int i,j,n,m,flag=1;
    printf("enter the row and column:");
    scanf("%d%d",&n,&m);
    printf("enter the  martix:");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
    printf("the matrix\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		printf("%d\t",a[i][j]);
    	}
    	printf("\n");
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		b[j][i]=a[i][j];
    	}
    }
    printf("the matrix\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		printf("%d\t",b[j][i]);
    	}
    	printf("\n");
    }
    printf("the matrix\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		printf("%d\t",b[i][j]);
    	}
    	printf("\n");
    }
    if(n==m)
    {
     for(i=0;i<n;i++)
     {
     	for(j=0;j<m;j++)
     	{
     		
    	  if(b[i][j]!=a[i][j])
    	  {
    		flag=0;
    		break;
    	  }
     	}
     	if(flag==0)
     	{
     		printf("the matrix is not symmertic");
     		break;
     	}
     }
     if(flag==1)
     {
     	printf("the matrix is symmeric");
     }
    }
    else
    {
    	printf("the matrix is not symmetric");
    }
}
