#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
//rintf("Enter the number of integers: ");
	//anf("%d",&n);
	int *ptr=(int *)malloc(2*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available");
		exit(1);
	}
	printf("enter the integers: ");
	for(i=0;i<2;i++)
	{
		scanf("%d",ptr+i);
	}
	ptr=(int *)realloc(ptr,4*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available");
		exit(1);
	}
	printf("Enter the more numbers are:");
	for(i=2;i<4;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("The Numbers are:");
	for(i=0;i<4;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
