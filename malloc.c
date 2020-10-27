#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	int *ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available");
		exit(1);
	}
	printf("enter the integers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("numbers are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
