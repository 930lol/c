#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,s=0;
	int *ptr=input();
	for(i=0;i<5;i++){
		s=s+ *(ptr+i);
	}
	printf("Sum is %d",s);
	free(ptr);
	ptr=NULL;
	return 0;
}
int input()
{
	int *ptr,i;
	ptr=(int*)malloc(5*sizeof(int));
	printf("Enter the 5 number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	return ptr;
}
