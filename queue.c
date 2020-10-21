#include<stdio.h>
# define size 5
int queue[size],front=-1,rear=-1;
void enqueue(int val)
{
	if(rear==size-1)
	{
		printf("Overflow can't enqueue\n");
	}
	else
	{
		if(front==-1)
		{
			front++;	
		}
		rear++;
		queue[rear]=val;
		printf("%d was enqueue in the queue\n",queue[rear]);
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Underflow condition \n");
	}
	else 
	{
		int temp=queue[front];
		front++;
		printf("%d is the dequeued fro the queue\n",temp);
	}
}
void display()
{
	if(rear==-1)
	{
		printf("Queue is empty\n");
	}
	else 
	{
		int i;
		printf("The queue are looks like:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	dequeue();
	display();
}
