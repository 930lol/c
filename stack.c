#include<stdio.h>
#include<stdlib.h>
#define size 20
int stack[size],top=-1;
void push(int stack[size],int num)
{
	if(top==size-1)
	{
		printf("overflow condition");
		return;
	}
	top++;
	stack[top]=num;
	printf("%d is pushed into the stack\n",stack[top]);
}
void pop(int stack[])
{
	if(top==-1)
	{
		printf("underflow condition\n");
		return;
	}
	int poped=stack[top];
	top--;
	printf("%d is the poped item\n",poped);
}
void display(int stack[])
{
	int i=0;
	if(top==-1)
	{
		printf("the stack is empty cant print anything\n");
		return;
	}
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int main()
{
	int choice,num,top=-1;
	
	while(1)
	{
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for display\n");
        printf("Press 4 for exit\n");
		printf("enter your choice:");
		printf("\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the number you want to push into the stack:");
				scanf("%d",&num);
				push(stack,num);
				break;
			case 2:
				pop(stack);
				break;
			case 3:
				display(stack);
				break;
			case 4:
				exit(0);
			default:
				printf("invalid choice\n");		
		}
		
	}
	return 0;
}
